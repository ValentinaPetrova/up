﻿#include <iostream>

using namespace std;

int main()
{
	for (int i = 9; i <= 23; cout << i << endl) i++;
	/*Принтира числата от 9 до 23 включително*/

//-----------------------------------------------------------------------------------------

	int num1 = 5;
	int num2 = 13;
	num2 = num1 + 12;
	cout << num2 << endl;
	/*Няма да се изпълни, защото в следния израз даваме стойност на num2, 
	а когато му сложим два плюса, компилаторът не знае дали искаме да му прибавим 1 
	или да му дадем новата стойност, която е стойността на израза, стояща следв равното. */

//---------------------------------------------------------------------------------------------
	int a = 0;
	cin >> a;
	switch (a)
	{
	case 3:
		cout << "error";
		break;
	case 1:
		cout << "one";
	default:
		cout << "13";
		break;
	}

	/*if (a == 1)
		cout << "one";
	if (a != 3)
		cout << "13";
	else if (a > 3)
		cout << "big";
	else
		cout << "error";*/

}