// Lab_04_2.cpp
// Кучальська Власта
// Лабораторна робота № 4.2
// Цикли.
// Варіант 13
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x, xp, xk, dx, a, b, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|  " << setw(5) << "x" << " |   "
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		a = 2 * fabs(x - 5);
		if (x < -1)
			b = pow(sin(x), 2) / (1 + fabs(cos(x)));
		else
			if (x >= -1 && x <= 1)
				b = pow(cos(1 / fabs(x + 2)), 2);
			else
				b = log(fabs(x + 2));
		y = a - b;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}