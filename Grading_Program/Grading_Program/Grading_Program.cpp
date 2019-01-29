/*
											Grading Program
					Requires:
					variables, data types, and numerical operators
					basic input/output
					logic (if statements, switch statements)

					Write a program that allows the user to enter the grade scored in a programming class (0-100).
					If the user scored a 100 then notify the user that they got a perfect score.

					★ Modify the program so that if the user scored a 90-100 it informs the user that they scored an A

					★★ Modify the program so that it will notify the user of their letter grade
					0-59 F 60-69 D 70-79 C 80-89 B 90-100 A
*/

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Grade Calculator \n";
	cout << "---------------- \n";

	//Variables 
	int grade;
	char playAgain;
	bool loop = false;

	//Grade Loop 
	while (!loop)
	{
		//User Prompt 
		cout << "Enter your grade: \n";
		cin >> grade;

		//
		if (grade == 100)
		{
			cout << "You got a perfect score! A" << endl;
			loop = true;
		}
		else if (grade >= 90 && grade <= 100)
		{
			cout << "A" << endl;
			loop = true;
		}
		else if (grade >= 80 && grade < 90)
		{
			cout << "B" << endl;
			loop = true;
		}
		else if (grade >= 70 && grade < 80)
		{
			cout << "C" << endl;
			loop = true;
		}
		else if (grade >= 60 && grade < 70)
		{
			cout << "D" << endl;
			loop = true;
		}
		else
		{
			cout << "F" << endl;
			loop = true;
		}

		// Ask user if they would like to enter another grade 
		cout << "Would you like to input another grade? (Y/N) ";
		cin >> playAgain;

		if (playAgain == 'y' || playAgain == 'Y')
		{
			loop = false;
		}
		else
		{
			loop = true;
		}
	}
}