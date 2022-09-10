//****************************************************************************** 
// PROJECT: Lab 5 Part 2 
// FILE: lab5-2.cpp 
// 
// DESCR: This program displays a prompt asking the user to enter their 
// grade average (a double). If the average is greater than 60 then 
// the program outputs "You Pass" followed by a newline. Otherwise, 
// if average is less than 60, the program outputs "You Fail" followed 
// by a newline. 
// 
// AUTHOR: Jefferey Rigler <asujeff@asu.edu> 
// DATE: 09/09/2022
//**************************************************************

#include <iostream>
using namespace std;

int main() 
{
  float average; // average could alternatively be defined as a double 
 // Display the prompt to ask the user to enter their average. 
  
 cout << "Input your average:" << endl; 
 // Read the average from the keyboard and stick the value into variable 
 // average. 
 cin >> average; 
 // Check if the average is out of range.
 if(average>100 || average<0)
 // Print message
 cout<<"Invalid data."<<endl;
// If average in range 90-100
else if(average<=100 && average>=90)
// Print you get an A
cout<<"You get an A!"<<endl;
// if average in range 80-90
else if(average<=90 && average>=80)
// Print you get an B
cout<<"You get a B."<<endl;
// If average in range 60-79
else if(average<=79 && average>=60)
// Print you passed
cout<<"You Pass"<<endl; 
  
 else 

 cout << "You Fail" << endl; 
  
 return 0; 
  
}