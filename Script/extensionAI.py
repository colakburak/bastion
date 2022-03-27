#!/usr/bin/env python
# coding: utf-8

# In[1]:


# Standart Libs for AI
from typing import List
import pandas as pd, numpy as np, matplotlib.pyplot as plt
import re
import json

# This libraries below will be used for NLP
from textblob import TextBlob
from textblob.classifiers import NaiveBayesClassifier


# In[2]:


# Creating Data Frame
train_set = pd.read_csv('./input/train.csv.zip',encoding='latin-1')


# In[3]:


train_set.head(10)


# In[4]:


# Cleaning text 
def cleanText(text):
    text = re.sub('#[A-Za-z0-9]+', '', text) # removes any string with a '#'
    text = re.sub('@[A-Za-z0-9_]+', '', text) # removes any string with a '#'
    text = re.sub('\\n', '', text) # removes the '\n' string
    text = re.sub('https:\/\/\S+', '', text) # removes any hyperlinks
    return text


# In[5]:


train_set['CleanedText'] = train_set['SentimentText'].apply(cleanText)
train_set


# In[6]:


# Modifiying DF
train_set = train_set.drop(['ItemID', 'SentimentText'], axis=1)
train_set=train_set.reindex(columns=['CleanedText', 'Sentiment'])
train_set.loc[train_set["Sentiment"] == 0, "Sentiment"] = "neg"
train_set.loc[train_set["Sentiment"] == 1, "Sentiment"] = "pos"
train_set


# In[7]:


# Dividing DF to train our model
df = train_set.iloc[np.random.choice(np.arange(len(train_set)), 5000, False)]

df


# In[8]:


# Train data as input list
train = list()
for index, row in df.iterrows():
    train.append((row['CleanedText'], row['Sentiment']))


# In[9]:


# Training AI to learn Sentiments
cl = NaiveBayesClassifier(train)


# In[10]:


# Little test for trained data with complex keywords
prob_dist = cl.prob_classify("Why in this good wheater i have ugly face")
prob_dist.max()


# In[11]:


# Showing Data Distrubutin 0 as Negative, 1 as Positive for test uses only!
'''
labels = ['Negative', 'Positive']
sizes = [df['Sentiment'].value_counts()[0],
         df['Sentiment'].value_counts()[1]
        ]
fig1, ax1 = plt.subplots()
ax1.pie(sizes, labels=labels, autopct='%1.1f%%', shadow=True)
ax1.axis('equal')
plt.title('Sentiment Proportion', fontsize=20)
plt.show()
'''

# In[12]:


# Test Data and configuration
test_df = train_set.iloc[np.random.choice(np.arange(len(train_set)), 300, False)]

test_df


# In[13]:


# Test data as input list
tests = list()
for index, row in test_df.iterrows():
    tests.append((row['CleanedText'], row['Sentiment']))


# In[14]:


# To see how well our predictions are
cl.accuracy(tests)


# In[15]:


# Keyword's ratio on sentiment
cl.show_informative_features(10)





# In[ ]:
def get_user_input(file_name:str):
    with open(file_name, 'r') as f:
        inputs = [line.strip() for line in f]
    return inputs


def check_sentences(test_list:list):
    counter = 0
    for test in test_list:
        prob_dist = cl.prob_classify(test)
        if prob_dist.max() == 'pos':
            counter+=1
    
    percent_pos = (100*counter)/len(test_list)

    print(f"You have been searching {percent_pos}% positive data ratio!")

    if percent_pos <= 66:
        print("Would you like to take a depression test with our Chatbot?")
        print("Check out BASTION Chatbot")
    else:
        print("You are so positive! :) Keep it up! Have a wonderful day!")
    return percent_pos
# %%

# %%
def main():
    percent_pos = float(check_sentences(get_user_input("./Script/userInputs.txt")))
    
    if percent_pos >= 0:
        dictionary ={
        "percentage_pos" : percent_pos,
        "percentage_neg" : 100-percent_pos
        }

        with open("sample.json", "w") as outfile:
            json.dump(dictionary, outfile)

if __name__ == '__main__':
    main()
