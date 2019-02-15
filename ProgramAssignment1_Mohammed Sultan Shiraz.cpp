/*
* This is a program for the first programming assignment
* It was created by Mohammed Shiraz
* Created date: January 29, 2018
*/

//Preprocessor directive
#include <iostream>
//Namespace definition
using namespace std;

int main()
{
	//Variable declaration
	int TNumber = 2771; //TODO: Please make a change to the last four digits of your T-Number
	int int1, int2, s, d, p, q, r;

	//Display student information
	cout << "\nMy name is Mohammed Sultan Shiraz"; //TODO: Please make a change to your name
	cout << "\nMy TSU T-Number is T" << TNumber << endl << endl; //DO NOT make any change here

																	 //Input request
	cout << "Enter the first integer please: ";
	cin >> int1;
	cout << "Enter the second integer please: ";
	cin >> int2;

	//Processing (calculation)
	s = int1 + int2;
	d = int1 - int2;

	//TODO: Please calculate the product of int1 and int2, and write the result to p
	
	p = int1 + int2;

	//TODO: Please calculate the division of int1 and int2, and write the result (quotient of division) to q
		
	q = int1 / int2;

	//TODO: Please calculate the module of int1 and int2, and write the result (remainder of division) to r

	r = int1 % int2;

	//Output result
	cout << "\nThe sum of " << int1 << " and " << int2 << " is " << s;
	cout << "\nThe difference of " << int1 << " and " << int2 << " is " << d;
	cout << "\nThe product of " << int1 << " and " << int2 << " is " << p;
	cout << "\nThe quotient of " << int1 << " divided by " << int2 << " is " << q;
	cout << "\nThe remainder of " << int1 << " divided by " << int2 << " is " << r << endl << endl;

	return 0;
}
