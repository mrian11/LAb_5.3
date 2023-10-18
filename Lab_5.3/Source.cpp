#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
double z(const double x);
int main()
{
	double kp, kk, p;
	int n;
	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(10) <<setprecision(3)<< " k" << "|"
		<< setw(10) << setprecision(3)<< "p" << "|"
		<< endl;
	cout << "---------------------------" << endl;
	double dk = (kk - kp) / n;
	double k = kp;
	while (k <= kk)
	{
		p = z(1 - k * k) + pow( z(1 + z(k)),2);
		cout <<"|"<<setw(10)<< k << "|" <<setw(10)<< p <<"|"<< endl;
		cout << "---------------------------" << endl;
		k += dk;
	}
	cout << "|" << setw(10) << setprecision(3)<<  k << "|"
		 << setw(10) << setprecision(3)<< p  << "|"
		 << endl;
	cout << "---------------------------" << endl;
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (1 - sin(x)) / (exp(x) + cos(x) * cos(x));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = x / (pow(4 * j, 2) - 2. * j);
			a *= R;
			S += a;
		} while (j < 7);
		return S;
	}
}