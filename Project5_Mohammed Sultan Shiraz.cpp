/*
 * Project5 for Arrays
 *
 * This program illustrates how to use a sequential search to
 * find the position of the first apparance of a number in an array
 *
 * Created by Mohammed Sultan Shiraz, on December 2 2018
 * For educational purpose.
 */

#include<iostream>
using namespace std;

//Integer Definition
const int Size_Array = 10;
//Functions Prototypes
int sequentialSearch(const int list[], int listLenght, int searchItem);

int main()
{
	//Declaration Of Ingeres & Arrays. That is: Array_Size
	int intList[Size_Array];
	int Hold_Number; // hold the number to be searched in array
	int Array_Position = -1; //hold the position where number is in the array
	cout << "Please enter" << Size_Array << "integers." << endl;
	//using for loop request for each element
	for (int i = 0; i < Size_Array; i++)
	{
		cin >> intList[i];
	}
	cout << "\nPlease Enter The Desired Search Number: ";
	cin >> Hold_Number;
	cout << endl;
	//call sequentialSearch() function to get the position of a given number in array
	position = sequentialSearch(intList, Size_Array, Hold_Number);
	if (position != -1)
		cout << Hold_Number << "The Number In This Position: " << Array_Position << endl << endl;
	else
		cout << Hold_Number << "The System Wasn't Able To Find The Number." << endl << endl;
	return 0;
}
//sequentialSearch() function definition
int sequentialSearch(const int list[], int listLenght, int searchItem)
{
	int Location_OF_Number = 0; // first position to be checked in array
	bool Found = false; //initially number has been not found
	while (Location < listLenght && !Found)
	{
		//access element from array
		//compare with given number
		if (list[Location_OF_Number] == searchItem)
		{
			//if found
			Found = true;
			break;
		}
		else
		{
			//if not found
			Location_OF_Number++;
		}
	}
	if (Found)
		return Location_OF_Number; // number found in array, return position
	else
		return -1; // number not found in array
}