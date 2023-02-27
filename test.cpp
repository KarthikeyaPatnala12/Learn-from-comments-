#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
// In this curly brackets whatever you type it'll run 
// cout (See-out) used to print, cin (See in) used for input. 
// return 0 ends the main function 
// namespace std; can be used as std:: for some objects 
// "\n" and endl1 are used to break lines are also called as escape sequence 
// \t creates a tab space, \\ inserts a backslash, \" inserts a double quotes character. 
// Single line comments are starts with two forward slashes
/*This is a 
multiline comment */
/* int - stores whole numbers
 double - stores floating point numbers
 char - stores a single character 
 bool - stores values with two status; true or false 
 float - Used for floating numbers. 
 Although float and double are for same purpose but precision varies 
 for float it is upto 7 digits and for double it is upto 15 digits. 

 How to assign a variable? 
 
 >> int mynumber = 20; 

>> datatype variable_name = literal 

*/
/* All C++ variables must be identified with different names.
Reserved words like or C++ keywords such as int cannot be used as names 
 like int int = 2; >> throws a error  
  Names can contain: 
  Letters(uppercase and lowercase), digits and underscores 
  Must begin with letter (upper and lowercase) or underscore 
  Names are case sensitive 
  Names cannot contain: 
  Reserved word like int, bool, float, double, char, string. 

*/
/*
When you do not want other to or yourself to override the existing variable
values use "const" keyword
>> const int mynumber = 15; 
   my number = 10;
   cout << mynumber: 

>> 15 
*/

/*
Extraction operator(>>),Insertion operator(<<)
cin >> , cout << 

*/
/*
Operators:
+ - Addition 
- - Substraction 
* - Multiplication 
/ - Division 
% - Modulus 
++ - increment 
-- - Decrement 
= used for assign a value 
+= adds a value to a variable 

Comparison operator: 
== equal to 
!= Not equal 
> greater than 
< less than 
>= greater than or equal to 
<= less than or equal to 

Logical operators: 
&& - Logical and 
|| - logical or 
!  - logical not 

>> x < 5 && x < 10 

*/
/*
Numbers are added strings are concatenated. 


*/
return 0;
}
