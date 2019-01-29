/*
Cola Machine

Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.

★ If you program uses if statements instead of a switch statement, modify it to use a switch statement.
If instead your program uses a switch statement, modify it to use if/else-if statements.

★★ Modify the program so that if the user enters a choice other than 1-5 then it will output "Error. choice was not valid, here is your money back."

*/

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << " Welcome to the Cola Machine Dispenser!" << endl;
	cout << "---------------------------------------" << endl;

	//Variables 
	int choice; 
	char purchaseAgain; 
	bool backToStore = false; 

	while (!backToStore)
	{
		//Dispenser Menu
		cout << " What would you like to Purchase? (1-5)\n\n";
		cout << " 1.                              Water\n";
		cout << " 2.                              Coke\n";
		cout << " 3.                              Sprite\n";
		cout << " 4.                              Nestea\n";
		cout << " 5.                              Fanta\n";
		cout << "--------------------------------------\n";
		cin >> choice;

		//Output Player Choice
		switch (choice) {

		case 1:
			if (choice == 1)
			{
				cout << "You have purchased a Water bottle!\n";
				backToStore = true;
			}
		case 2:
			if (choice == 2)
			{
				cout << "You have purchased a can of Coke!\n";
				backToStore = true;
			}
		case 3:
			if (choice == 3)
			{
				cout << "You have purchased a can of Sprite!\n";
				backToStore = true;
			}
		case 4:
			if (choice == 4)
			{
				cout << "You have purchased a can of Nestea!\n";
				backToStore = true;
			}
		case 5:
			if (choice == 5)
			{
				cout << "You have purchased a can of Fanta!\n";
				backToStore = true;
			}
		}

		//Ask user if they'd like to purchase more
		cout << "Would you like to purchase any more? (Y/N)\n";
		cin >> purchaseAgain;

		if (purchaseAgain == 'y' || purchaseAgain == 'Y')
		{
			backToStore = false;
		}
		else
		{
			backToStore = true;
		}
	}
}
