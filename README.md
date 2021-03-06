
MySQL Connector Module for Godot Engine
=======================================  
  
**Requirements:**  
  C++ MySQL Connector Library, which can be installed on Unix/Linux Systems with: apt-get install libmysqlcppconn-dev
  
**Installation:**  
Simply place or clone the repository into **/path/to/godot/modules** folder  
and rename it to **"mysql"** and build the engine from source.  
  
Module directory should look like this **"/path/to/godot/modules/mysql"**.  
  
How to use:  
===========  
* instance module; **MySQL.new()**  
* set login info; **mysql.credentials("localhost", "username", "password")**  
* select database;  **mysql.select_database("pinguins")**  
* query or execute; **mysql.query("sql_code","colum_name_or_index") / mysql.execute("sql_code")**   
  
Example 1; get the amout of rows in a table 
===========================================
  var mysql = MySQL.new()  
  var rows = mysql.query("SELECT COUNT(*) FROM table_name", "1")  
  print(rows)  
  
  
Example 2; get the name from a row with the id 
==============================================
var mysql = MySQL.new()  
  var name = mysql.query("SELECT * FROM table_name WHERE id='1'", "name")  
  or  
  var name = mysql.query("SELECT name FROM table_name WHERE id='1'", "1")  
  print(name)  


Example 3; insert data into database table  
==========================================
var mysql = MySQL.new()  
  mysql.execute("INSERT INTO table_name (id, name) VALUES (0, 'billy the pinguin')")  
