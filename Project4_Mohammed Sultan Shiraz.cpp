/*
* Programming Assignment 4: User-Defined Functions
*
* Created by Li Ma, April 6 2018
*/

#include <iostream>
using namespace std;

// TODO#4: provide the prototype of all functions

int Menu_MakeChoice();
void drawShapes(int choice);
void printSquare();
void printRectangle();
void printURtriangle();
void printDRtriangle();

int main()
{
	// declare the needed variables
	int theChoice;

	// call functions in a do-while loop to
	// display the menu for the shape choice and
	// draw the chosen shape
	do
	{
		// TODO#1: call function Menu_MakeChoice to return the user choice
		theChoice = Menu_MakeChoice();

		drawShapes(theChoice); // function call to draw the chosen shape
	} while (true);

	return 0;
} // end main

  // function to display the menu and choose shape to draw
int Menu_MakeChoice()
{
	int choice;

	cout << "\n*****************************************\n";
	cout << "*\t 1. Square\t\t\t*\n";
	cout << "*\t 2. Rectangle\t\t\t*\n";
	cout << "*\t 3. Upward Right Triangle\t*\n";
	cout << "*\t 4. Downward Right Triangle\t*\n";
	cout << "*\t-1. Exit\t\t\t*\n";
	cout << "*****************************************\n";

	cout << "\nPlease enter your choice: ";
	cin >> choice;

	return choice;
} // end Menu_MakeChoice

  // function to draw the chosen shape
void drawShapes(int choice)
{
	// print the shape according to the different choice using a switch structure
	switch (choice)
	{
	case 1:
		// TODO#2a: call function printSquare to print a square
		printSquare();

		break;
	case 2:
		// TODO#2b: call function printRectangle to print a rectangle
		printRectangle();

		break;
	case 3:
		// TODO#2c: call function printURTriangle to print an upward isosceles right triangle
		printURtriangle();
			

		break;
	case 4:
		// TODO#2d: call function printDRTriangle to print a downward isosceles right triangle
		printDRtriangle();

		break;
	case -1:
		cout << "\nYou have decided to exit!\n\n";
		return;
	default:
		cout << "\nYou have entered wrong choice!\n\n";
	} // end switch
}

// function to print a rectangle
void printRectangle()
{
	int length, height;

	do
	{
		cout << "\nPlease enter length of the rectangle: ";
		cin >> length;
		cout << "Please enter height of the rectangle: ";
		cin >> height;
	} while (length <= 0 || length > 20 || height <= 0 || height > 20);

	cout << endl;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < length; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

} // end printRectangle

  // TODO#3: create three more functions to print square,
void printSquare()
{
	int height;

	do
	{
		cout << "Please Enter The Height Of The Square: ";
		cin >> height;
	} while (height <= 0 || height > 20);

	cout << endl;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < height; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

} // end printSquare
  // upward and downward isosceles right triangles
void printURtriangle()
{
	int Base;

	do
	{
		cout << "Please Enter The Height Of The Triangle: ";
		cin >> Base;
	} while (Base <= 0 || Base > 20);

	cout << endl;
	for (int i = 0; i < Base; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

} // end printURtriangle

void printDRtriangle()
{
	int MrTriangle, Base;

	do
	{
		cout << "Please Enter The Height Of The Triangle: ";
		cin >> Base;
		MrTriangle = Base;
	} while (Base <= 0 || Base > 20);

	cout << endl;
	for (int i = 0; i < Base; i++)
	{
		if (MrTriangle != 0)
		MrTriangle--;
		for (int j = 0; j < MrTriangle + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

} // end printDRTriangle