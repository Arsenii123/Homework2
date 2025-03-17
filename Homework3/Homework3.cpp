

#include <iostream>
using namespace std;

int main()
{
   //1
	int num1;
	int num2;
	cout << "Print first number:\n";
	cin >> num1;
	cout << "Print second number:\n";
	cin >> num2;
	int sum = num1 + num2;
	int minus = num1 - num2;
	int dobytok = num1 * num2;
	cout << num1 << "+" << num2 << "=" << sum <<"\n" << num1 << "-" << num2 << "=" << minus <<"\n" << num1 << "*" << num2 << "=" << dobytok << "\n";
	//2
	int number;
	int procent;
	cout << "Print your number:\n";
	cin >> number;
	cout << "Print your %:\n";
	cin >> procent;
	int result = (number * procent) / 100;
	cout << "Result:" << result << "\n";
	//3
	int a;
	int b;
	cout << "Print your a:\n";
	cin >> a;
	cout << "Print your b:\n";
	cin >> b;
	int S = a * b;
	cout << "Print S:"<<S<<"\n";
	//4
	double ceil;
	cout << "Print your ceil:\n";
	cin >> ceil;
	double faregeit = ceil * 33.8;
	cout << "Result:\n"<< faregeit <<"\n";
	//6
	double r;
	cout << "Print your radius:\n";
	cin >> r;
	const double PI = 3.1415926;
	double Stringle = 2 * r * PI;
	cout << "S:" << Stringle;

	





}  


