#include<iostream>
#include"Fraction.h"
using namespace std;
int main()
{
	Fraction f1(1, 2);
	Fraction f2;
	f2.setNumerator(1);
	f2.setDenominator(6);
	Fraction f3 = f1 / f2;
	Fraction f4 = f1 * f2;
	cout << "F1:-\n";
	f1.Display();
	cout << "F2:-\n";
	f2.Display();
	cout << "F3:-\n";
	f3.Display();
	cout << "F4:-\n";
	f4.Display();
	if (f2 == f3)
	{
		cout << "\nEquals\n" << endl;
	}
	else
	{
		cout << "\nNot Equals\n\n" << endl;
	}
	system("pause");
	return 0;
}