#include <Windows.h>
#include <iostream>
#include "pBase.h"

using namespace std;
pCalc Calc;

int main()
{
	int input, temp1,temp2;
	cout << "Welcome to Ponzi's simple calculator!";
	while (true)
	{
		cout << "Enter 1. to add 2. to subtract 3. to multiple 4. divide 5. Memory of last input" << endl;
		cin >> input;
		if (input == 1)
		{
			cout << "First number:";
			cin >> temp1;
			cout << "Second number:";
			cin >> temp2;
			cout << "Result: " << Calc.Add(temp1, temp2);
		}
		else if (input == 2)
		{
			cout << "First number:";
			cin >> temp1;
			cout << "Second number:";
			cin >> temp2;
			cout << "Result: " << Calc.Sub(temp1, temp2);
		}
		else if (input == 3)
		{
			cout << "First number:";
			cin >> temp1;
			cout << "Second number:";
			cin >> temp2;
			cout << "Result: " << Calc.Multi(temp1, temp2);
		}
		else if (input == 4)
		{
			cout << "First number:";
			cin >> temp1;
			cout << "Second number:";
			cin >> temp2;
			cout << "Result: " << Calc.Multi(temp1, temp2);
		}
		else if (input == 5)
		{
			cout << Calc.oMemory();
		}
		Sleep(3000);
		system("cls");
	}
}