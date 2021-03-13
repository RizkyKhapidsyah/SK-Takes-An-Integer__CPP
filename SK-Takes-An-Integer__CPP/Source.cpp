#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <conio.h>

#include "DaysOfYearClass.h"

using namespace std;

int main(int argc, char** argv) {

	//An instance of DaysOfYearClass
	DaysOfYearClass dayOfYearObj;

	//To hold the day
	int day;

	//temporary array to hold the user input 
	//to stor input & exit character 'Q'
	char input[10];

	//Display the purpose of the program
	cout << "\n This program convert a number \n";
	cout << "into a string representing the \n";
	cout << "month and day.\n\n";

	//Variable to exit
	char choice = 'n';

	while (choice != 'Q') {

		//Get the day as input from user
		cout << "\n\n 'Q' to quit";
		cout << "\n A whole number 1 & 365";
		cin >> input;

		choice = input[0];

		day = atoi(input);

		if (day > 0 && day <= 365) {
			//Set the day
			dayOfYearObj.setDay(day);

			//Dispaly the object
			dayOfYearObj.print();
		} else {
			if (choice == 'Q') {
				cout << "\n thanks ";
			} else {
				cout << "\n[Error: * Invalid Input *] \n\n";
			}
		}
	}

	_getch();
	return 0;
}