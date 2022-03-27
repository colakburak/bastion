#include "bot.h"
#include "question.h"


int main()
{

	bot bot;
	bool loop = true;
	std::string userInput;
	int depressionlevel=0;

	std::cout << "Hello! How is your day so far!" << std::endl << "(0) I do not feel sad. (1) I feel sad (2) I am sad all the timeand I can't snap out of it. (3) I am so sad and unhappy that I can't stand it." << std::endl;
		getline(std::cin, userInput);
		if (userInput == "0")
			depressionlevel = depressionlevel;
		if (userInput == "1")
			depressionlevel = depressionlevel + 1;
		if (userInput == "2")
			depressionlevel = depressionlevel + 2;
		if (userInput == "3")
			depressionlevel = depressionlevel + 3;
		for (int i = 0; i != userInput.length(); i++)
		{
			userInput.at(i) = tolower(userInput.at(i));
		}
		if (bot.isQuestion(userInput) == true)					// check if bot knows answer to the question.
		{														// if bot knows the answer, reply with answer if bot does not know the answer then bot will ask the same question,
			if (bot.check(userInput) == true)					//and store the users answer in the linked list as well as the text file	
			{
				bot.reply(userInput);
			}
			else
			{
				bot.storeNewQuestion(userInput);
			}
		}
		else
		{
			std::cout << "You did not ask your question with the right format! Correct questions end with a '.'" << std::endl;
		}

		std::cout << "How do you feel about the future ?" << std::endl;std::cout << "(0)I am not particularly discouraged about the future.(1) I feel discouraged about the future.(2) I feel I have nothing to look forward to.(3) I feel the future is hopeless and that things cannot improve." << std::endl;
		getline(std::cin, userInput);
		if (userInput == "0")
			depressionlevel = depressionlevel;
		if (userInput == "1")
			depressionlevel = depressionlevel + 1;
		if (userInput == "2")
			depressionlevel = depressionlevel + 2;
		if (userInput == "3")
			depressionlevel = depressionlevel + 3;
		for (int i = 0; i != userInput.length(); i++)
		{
			userInput.at(i) = tolower(userInput.at(i));
		}
		if (bot.isQuestion(userInput) == true)					// check if bot knows answer to the question.
		{														// if bot knows the answer, reply with answer if bot does not know the answer then bot will ask the same question,
			if (bot.check(userInput) == true)					//and store the users answer in the linked list as well as the text file	
			{
				bot.reply(userInput);
			}
			else
			{
				bot.storeNewQuestion(userInput);
			}
		}
		else
		{
			std::cout << "You did not ask your question with the right format! Correct questions end with a '.'" << std::endl;
		}

		if (depressionlevel < 3){
			std::cout << "Have a nice day :)" << std::endl;
			system("pause");
			system("cls");
			return 0;
		}
		std::cout << "Have you recently had suicidal thoughts?" << std::endl;std::cout << "(0) I don't have any thoughts of killing myself. (1) I have thoughts of killing myself, but I would not carry them out. (2) I would like to kill myself.(3) I would kill myself if I had the chance." << std::endl;
		getline(std::cin, userInput);
		if (userInput == "0")
			depressionlevel = depressionlevel;
		if (userInput == "1")
			depressionlevel = depressionlevel + 1;
		if (userInput == "2")
			depressionlevel = depressionlevel + 2;
		if (userInput == "3")
			depressionlevel = depressionlevel + 3;
		for (int i = 0; i != userInput.length(); i++)
		{
			userInput.at(i) = tolower(userInput.at(i));
		}
		if (bot.isQuestion(userInput) == true)					// check if bot knows answer to the question.
		{														// if bot knows the answer, reply with answer if bot does not know the answer then bot will ask the same question,
			if (bot.check(userInput) == true)					//and store the users answer in the linked list as well as the text file	
			{
				bot.reply(userInput);
			}
			else
			{
				bot.storeNewQuestion(userInput);
			}
		}
		else
		{
			std::cout << "You did not ask your question with the right format! Correct questions end with a '.'" << std::endl;
		}

		std::cout << "Do you have difficulties in decision-making compared to past?" << std::endl;std::cout << "(0) I make decisions about as well as I ever could. (1) I put off making decisions more than I used to. (2) I have greater difficulty in making decisions more than I used to. (3) I can't make decisions at all anymore."<<std::endl;
		getline(std::cin, userInput);
			if (userInput == "0")
			depressionlevel = depressionlevel;
		if (userInput == "1")
			depressionlevel = depressionlevel + 1;
		if (userInput == "2")
			depressionlevel = depressionlevel + 2;
		if (userInput == "3")
			depressionlevel = depressionlevel + 3;
		for (int i = 0; i != userInput.length(); i++)
		{
			userInput.at(i) = tolower(userInput.at(i));
		}
		if (bot.isQuestion(userInput) == true)					// check if bot knows answer to the question.
		{														// if bot knows the answer, reply with answer if bot does not know the answer then bot will ask the same question,
			if (bot.check(userInput) == true)					//and store the users answer in the linked list as well as the text file	
			{
				bot.reply(userInput);
			}
			else
			{
				bot.storeNewQuestion(userInput);
			}
		}
		else
		{
			std::cout << "You did not ask your question with the right format! Correct questions end with a '.'" << std::endl;
		}
		std::cout << "Have you recently had difficulties in doing work - related tasks ? " << std::endl;std::cout << "(0) I can work about as well as before. (1) It takes an extra effort to get started at doing something. (2) I have to push myself very hard to do anything. (3) I can't do any work at all." << std::endl;
		getline(std::cin, userInput);
		if (userInput == "0")
			depressionlevel = depressionlevel;
		if (userInput == "1")
			depressionlevel = depressionlevel + 1;
		if (userInput == "2")
			depressionlevel = depressionlevel + 2;
		if (userInput == "3")
			depressionlevel = depressionlevel + 3;
		for (int i = 0; i != userInput.length(); i++)
		{
			userInput.at(i) = tolower(userInput.at(i));
		}
		if (bot.isQuestion(userInput) == true)					// check if bot knows answer to the question.
		{														// if bot knows the answer, reply with answer if bot does not know the answer then bot will ask the same question,
			if (bot.check(userInput) == true)					//and store the users answer in the linked list as well as the text file	
			{
				bot.reply(userInput);
			}
			else
			{
				bot.storeNewQuestion(userInput);
			}
		}
		else
		{
			std::cout << "You did not ask your question with the right format! Correct questions end with a '.'" << std::endl;
		}

		std::cout << "Do you have difficulty sleeping?" << std::endl;std::cout << "(0) I can sleep as well as usual. (1) I don't sleep as well as I used to. (2) I wake up 1-2 hours earlier than usual and find it hard to get back to sleep. (3) I wake up several hours earlier than I used to and cannot get back to sleep." << std::endl;
		getline(std::cin, userInput);
		if (userInput == "0")
			depressionlevel = depressionlevel;
		if (userInput == "1")
			depressionlevel = depressionlevel + 1;
		if (userInput == "2")
			depressionlevel = depressionlevel + 2;
		if (userInput == "3")
			depressionlevel = depressionlevel + 3;
		for (int i = 0; i != userInput.length(); i++)
		{
			userInput.at(i) = tolower(userInput.at(i));
		}
		if (bot.isQuestion(userInput) == true)					// check if bot knows answer to the question.
		{														// if bot knows the answer, reply with answer if bot does not know the answer then bot will ask the same question,
			if (bot.check(userInput) == true)					//and store the users answer in the linked list as well as the text file	
			{
				bot.reply(userInput);
			}
			else
			{
				bot.storeNewQuestion(userInput);
			}
		}
		else
		{
			std::cout << "You did not ask your question with the right format! Correct questions end with a '.'" << std::endl;
		}

		std::cout << "Do you get tired quicker than usual while performing your daily activities?" << std::endl;std::cout<<"(0) I don't get more tired than usual. (1) I get tired more easily than I used to. (2) I get tired from doing almost anything. (3) I am too tired to do anything."<<std::endl;

		getline(std::cin, userInput);
		if (userInput == "0")
			depressionlevel = depressionlevel;
		if (userInput == "1")
			depressionlevel = depressionlevel + 1;
		if (userInput == "2")
			depressionlevel = depressionlevel + 2;
		if (userInput == "3")
			depressionlevel = depressionlevel + 3;
		for (int i = 0; i != userInput.length(); i++)
		{
			userInput.at(i) = tolower(userInput.at(i));
		}
		if (bot.isQuestion(userInput) == true)					// check if bot knows answer to the question.
		{														// if bot knows the answer, reply with answer if bot does not know the answer then bot will ask the same question,
			if (bot.check(userInput) == true)					//and store the users answer in the linked list as well as the text file	
			{
				bot.reply(userInput);
			}
			else
			{
				bot.storeNewQuestion(userInput);
			}
		}
		else
		{
			std::cout << "You did not ask your question with the right format! Correct questions end with a '.'" << std::endl;
		}
		std::cout << "Have you recently lost weight?" << std::endl;std::cout << "(0) I haven't lost much weight, if any, lately. (1) I have lost more than five pounds (2 kilograms). (2) I have lost more than ten pounds (4 kilograms). (3) I have lost more than fifteen pounds (6 kilograms)." << std::endl;
		getline(std::cin, userInput);
		if (userInput == "0")
			depressionlevel = depressionlevel;
		if (userInput == "1")
			depressionlevel = depressionlevel + 1;
		if (userInput == "2")
			depressionlevel = depressionlevel + 2;
		if (userInput == "3")
			depressionlevel = depressionlevel + 3;
		for (int i = 0; i != userInput.length(); i++)
		{
			userInput.at(i) = tolower(userInput.at(i));
		}
		if (bot.isQuestion(userInput) == true)					// check if bot knows answer to the question.
		{														// if bot knows the answer, reply with answer if bot does not know the answer then bot will ask the same question,
			if (bot.check(userInput) == true)					//and store the users answer in the linked list as well as the text file	
			{
				bot.reply(userInput);
			}
			else
			{
				bot.storeNewQuestion(userInput);
			}
		}
		else
		{
			std::cout << "You did not ask your question with the right format! Correct questions end with a '.'" << std::endl;
		}
		std::cout << "Are you particularly worried about your physical health?" << std::endl;std::cout << "(0) I am no more worried about my health than usual. (1) I am worried about physical problems like aches, pains, upset stomach, or constipation. (2) I am very worried about physical problems and it's hard to think of much else. (3) I am so worried about my physical problems that I cannot think of anything else." << std::endl;
		getline(std::cin, userInput);
		if (userInput == "0")
			depressionlevel = depressionlevel;
		if (userInput == "1")
			depressionlevel = depressionlevel + 1;
		if (userInput == "2")
			depressionlevel = depressionlevel + 2;
		if (userInput == "3")
			depressionlevel = depressionlevel + 3;
		for (int i = 0; i != userInput.length(); i++)
		{
			userInput.at(i) = tolower(userInput.at(i));
		}
		if (bot.isQuestion(userInput) == true)					// check if bot knows answer to the question.
		{														// if bot knows the answer, reply with answer if bot does not know the answer then bot will ask the same question,
			if (bot.check(userInput) == true)					//and store the users answer in the linked list as well as the text file	
			{
				bot.reply(userInput);
			}
			else
			{
				bot.storeNewQuestion(userInput);
			}
		}
		else
		{
			std::cout << "You did not ask your question with the right format! Correct questions end with a '.'" << std::endl;
		}
		std::cout << std::endl;
		std::cout << std::endl;
		system("pause");

		if (depressionlevel >= 7)
			std::cout << std::endl;
	  	std::cout << std::endl;
			std::cout << "Our scores indicate you might belong to a risk group in depression. But there is nothing" << std::endl;
			std::cout << "to worry about.You can follow our self - help strategy guide to learn more about depression" << std::endl;
			std::cout << "and adopt simple daily life practices to cope with it." << std::endl;

			std::cout << "* Your sleeping habits matter : A bedtime routine involving a quiet and dark room with 7 - 9 hours of sleep can" << std::endl;
			std::cout << "drastically increase your energy throughout the day." << std::endl;
			std::cout << "* Get your nutrition right : Nutrient deficiencies can play a role in depression, make sure to contact your" << std::endl;
			std::cout << "doctor for dietary suggestions." << std::endl;
			std::cout << "* Meditation is an emerging method in treating depressionand anxiety : Spiritual practices are a great way to" << std::endl;
			std::cout << "lower your stress levelsand help your muscle relaxation by releasing muscle tension." << std::endl;
			std::cout << "* Get more exercise : Overall body fitness is a great fundamental way to ensure better mental health." << std::endl;
			std::cout << "* Avoid substance use : Substances such as alcohol or tobacco can worsen the symptoms of depression." << std::endl;
			std::cout << "* Reframe your negative thoughts : Don't be too harsh on yourself." << std::endl;
			std::cout << "* Socialize by joining a support group or volunteer : Finding recreational activities to release" << std::endl;
			std::cout << "your stress, or finding a community who might be going through similar things may be helpful." << std::endl;

			std::cout << "Although self - help practices are complementary ways to cope with depression and anxiety," << std::endl;
			std::cout << "we always suggest you to see a healthcare professional who would guide you better with" << std::endl;
			std::cout << "personalized treatment strategies.You can print out our initial treatment guide in PDF form" << std::endl;
			std::cout << "and use the following link to book an appointment from your local general practitioner." << std::endl;

			std::cout << "With love from the Bastion Team, your mental health companion."<<std::endl;
			system("pause");
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "Here you can find your score;" << std::endl;std::cout << depressionlevel << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "1-3: These ups and downs are considered normal" << std::endl;
			std::cout << "4 - 6: Mild mood disturbance" << std::endl;
			std::cout << "7 - 8 : Borderline clinical depression" << std::endl;
			std::cout << "9 - 13 : Moderate depression" << std::endl;
			std::cout << "14 - 17 : Severe depression" << std::endl;
			std::cout << "17 + : Extreme depression" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "Would you like to get an oppiontmant from your local general doctor?" << std::endl;
			getline(std::cin, userInput);
			
			if (userInput == "yes"){

				std::cout << "You can book and oppointmant via http://www.neak.gov.hu/felso_menu/lakossagnak/ellatas_magyarorszagon/egeszsegugyi_ellatasok/haziorvosi_ellatas " << std::endl;
				std::cout << std::endl;
				std::cout << std::endl;
				std::cout << "Thank you for taking care of yourself! Have a nice day :)" << std::endl;
			}
			else
				std::cout << "It's always good to get some help :) " << std::endl;


	system("pause");
	return 0;
	
}
