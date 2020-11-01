#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(5) << "Обчислення суми ряду Тейлора за допомогою iтерацiйних циклiв та рекурентних" << setw(4) << " |" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(5) << "Лабораторна №4.7" << setw(63) << " |" << endl;
	cout << "|" << setw(5) << "Юркiв Мирослав" << setw(65) << " |" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(9) << "x" << setw(9) << " |"
		<< setw(14) << "arcth(x)" << setw(9) << " |"
		<< setw(13) << "S" << setw(9) << " |"
		<< setw(7) << "n" << setw(9) << " |"
		<< endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		n = 0; 
		a = 1/x;
		S = a;
		do {
			n++;
			R = (2*n - 1) / ((2*n + 1) * pow(x, 2)); 
			a *= R;
			S += a;
		} while (abs(a) >= eps);
		cout << "|" << setw(16) << setprecision(2) << x << " |"
			<< setw(21) << setprecision(5) << atanh(1/x) << " |"
			<< setw(20) << setprecision(5) << S << " |"
			<< setw(14) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "--------------------------------------------------------------------------------" << endl;
	return 0;
}