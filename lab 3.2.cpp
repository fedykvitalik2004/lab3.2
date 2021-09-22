// lab 3.2.cpp
// Федик Віталій
//Лабораторна робота №3.2.
//Розгалуження, задане формулою: функція з параметрами
// Варіант 11

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x; //вхідний аргумент
	double a; //вхідний аргумент
	double b; //вхідний аргумент
	double c; //вхідний аргумент
	double F; //результат обчислення виразу

	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;
	cout << "x="; cin >> x;

	// спосіб 1: розгалуження в повній формі

    if (x < 1 && c != 0)
		F = a * x * x + b / c;
	if (x > 1.5 && c == 0)
		F = (x - a) / (pow((x - c), 2));
	if (!(x < 1 && c != 0) && !(x > 1.5 && c == 0))
		F = x * x * 1.0 / (c * c);

	cout << endl;
	cout << "1)F=" << F << endl;

	// спосіб 2: розгалуження в скороченій формі

	if (x < 1 && c != 0)
		F = a * x * x + b / c;
	else
		if (x > 1.5 && c == 0)
			F = (x - a) / (pow((x - c), 2));
		else
			F = x * x * 1.0 / (c * c);

	cout << "2)F=" << F << endl;

	cin.get();
	return 0;
}