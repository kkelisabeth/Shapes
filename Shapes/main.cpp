/*
* Creator:      Kozlova Elizabeth Paula
*
* Title:		Shapes Creation
*
* Description:
*			    This program creates a shape of your choice: 
*					- a line (using $ symbol)
*					- a square (using $ symbol) 
*					- a line (using entered symbol) 
*					- a square (using entered symbol) 
*/

#include <iostream>
using namespace std;

//function prototypes: 
void line(int, char);
void square(int);
void customline(int, char, char);
void customsquare(int, char);

int main()
{
	int num, number;
	char symbol, character;
	cout << "Menu: " << endl;
	cout << "1. Display a line of $" << endl;
	cout << "2. Display a square of $" << endl;
	cout << "3. Display a customised line" << endl;
	cout << "4. Display a customised sqaure" << endl;
	cout << "0. EXIT" << endl;

	cout << "Enter the number of your choice: ";
	cin >> num;
	while (num != 0)
	{
		switch (num)
		{
		case 1:
		{
			cout << "Enter the amount of signs in your line: ";
			cin >> number;
			if (number > 0)
			{
				line(number, '$');
			}
			else
				cout << "invalid value." << endl;
			break;
		}
		case 2:
		{
			cout << "Enter the side of your square: ";
			cin >> number;
			if (number > 0)
			{
				square(number);
			}
			else
				cout << "invalid value." << endl;
			break;
		}
		case 3:
		{
			cout << "Enter the amount of signs in your line: ";
			cin >> number;
			if (number > 0)
			{
				cout << "Enter the symbol that you want to use: ";
				cin >> symbol;
				cout << "Enter the character 'v' - for vertical line or ' h' - for horizontal line: ";
				cin >> character;
				if ((character == 'v') || (character == 'h'))
					customline(number, symbol, character);
				else
					cout << "Invalid value." << endl;
			}
			else
				cout << "invalid value." << endl;
			break;
		}
		case 4:
		{
			cout << "Enter the side of your square: ";
			cin >> number;
			if (number > 0)
			{
				cout << "Enter the symbol that you want to use: ";
				cin >> symbol;
				customsquare(number, symbol);
			}
			else
				cout << "invalid value" << endl;
			break;
		}

		default:
			cout << "Sorry, the entered value is invalid. Please, restart the program and reenter the value. " << endl;
		}
		cout << "Enter a number of your choice: ";
		cin >> num;
	}
	cout << "Goodbye" << endl;

	return 0;
}

void line(int number, char symbol)
{
	for (int i = 1; i <= number; i++)
		cout << symbol;
	cout << endl;
}

void square(int number)
{
	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= number; j++)
			cout << "$";
		cout << endl;
	}
}

void customline(int number, char symbol, char character)
{
	if (character == 'v')
	{
		for (int i = 1; i <= number; i++)
			cout << symbol << endl;
	}
	else if (character == 'h')
	{
		for (int i = 1; i <= number; i++)
			cout << symbol;
		cout << endl;
	}
}

void customsquare(int number, char symbol)
{
	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= number; j++)
			cout << symbol;
		cout << endl;
	}
}