#include<iostream>
#include "math.h"
#include "Header.h"

using namespace std;

Rational y1(Rational& x)
{
	Rational res = (x*x)*(22/10) + x + 1;
	return res;
}

double y2(double x)
{
	return (x * x) * (22 / 10) + x + 1;;
}

int main() 
{
	setlocale(LC_ALL, "RUS");
	Rational a, res; 
	double x, resx;
	cout << "¬ведите рациональное число" << endl;
	cin >> a;
	res = y1(a);
	cout << res << endl;
	cout << "¬ведите x" << endl;
	cin >> x;
	resx = y2(x);
	cout << resx;
}

