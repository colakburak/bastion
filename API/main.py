from uuid import UUID, uuid4
from fastapi import FastAPI, Form
from typing import List

from numpy import append
from models import User, Gender, Role, Search


from fastapi.responses import HTMLResponse

app = FastAPI()


db: List[User] = [
    User(id=UUID("1e8221e3-b216-49c1-ab7a-c8a12dbdb891"), first_name="Burak", last_name="Colak", gender=Gender.male, roles=[Role.admin]),
    User(id=UUID("51ca07ce-2ab8-44e1-b099-46eafb8d4c41"), first_name="John", last_name="Cena", gender=Gender.male, roles=[Role.user])
]

db_search: List[Search] = []

@app.get("/api/v1/users")
async def fetch_users():
    return db

@app.post("/api/v1/users")
async def register_user(user:User):
    db.append(user)
    return {"id": user.id}

@app.get("/items/abc")
async def get_searches():
    return db_search

@app.get("/items/a")
async def read_items():
    html_content = """
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
<style>
body {
  font-family: Arial;
}

* {
  box-sizing: border-box;
}

form.example input[type=text] {
  padding: 10px;
  font-size: 17px;
  border: 1px solid grey;
  float: left;
  width: 80%;
  background: #f1f1f1;
}

form.example button {
  float: left;
  width: 20%;
  padding: 10px;
  background: #2196F3;
  color: white;
  font-size: 17px;
  border: 1px solid grey;
  border-left: none;
  cursor: pointer;
}

form.example button:hover {
  background: #0b7dda;
}

form.example::after {
  content: "";
  clear: both;
  display: table;
}
</style>
</head>
<body>

<h2>Search Button</h2>

<form class="example" method="POST" style="margin:auto;max-width:300px" action="/items/">
  <input type="text" placeholder="Search.." name="search">
  <button type="submit"><i class="fa fa-search"></i></button>
</form>

</body>
</html> 
    """
    
    return HTMLResponse(content=html_content, status_code=200)

'''
@app.post("/items/a")
async def put_search(search:Search):
    db_search.append(search)
    return {"search": search.input_search}
'''
