/*
While( user == gullible )
Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)
loops (for, while, do-while)

Write a program that ccontinues to asks the user to enter any number other than 5 until the user enters the number 5.
Then tell the user "Hey! you weren't supposed to enter 5!" and exit the program.

★ Modify the program so that after 10 iterations if the user still hasn't entered 5 will tell the user "Wow, you're more patient then I am, you win." and exit.

★★ Modify the program so that it asks the user to enter any number other than the number equal to the number of times they've been asked to enter a number. (i.e on the first iteration "Please enter any number other than 0" and on the second iteration "Please enter any number other than 1"m etc. etc. The program must behave accordingly exiting when the user enters the number they were asked not to.)
*/

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Variables 
	int choice;
	bool equal = false;

	//Iteration Loop
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter any number other than 5 and " << i << endl;
		cin >> choice;

		//Failed condition
		if (choice == 5 || choice == i)
		{
			cout << "Hey you weren't supposed to enter " << choice << "!" << endl;
			equal = true;
			break;
		}
	}
	if (!equal)
	{
		cout << "Wow, you're more patient than I am! You win!" << endl; 
	}
}