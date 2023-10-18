#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double p(const double x);
int main()
{
	double gp, gk, z;
	int n;
	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;
	double dg = (gk - gp) / n;
	double g = gp;
	cout << "--------------------------------" << endl;
	cout << setw(6) << "p" << setw(10) << "|" << setw(10) << "z" << endl;
	cout << "--------------------------------" << endl;
	while (g <= gk)
	{
		z = p(1 - 2 * g) + pow(p(1 - p(1)) + pow(p(2 * g) ,2 ), 2);
		cout << setw(10) << fixed << setprecision(4) << g << setw(19) << fixed << setprecision(4) << z << endl;
		g += dg;
	}
	cout << "--------------------------------" << endl;
	return 0;
}
double p(const double x)
{
	if (abs(x) >= 1)
		return( pow(cos(x),2)-sin(x))/exp(sin(x));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = -x  / ((2 * j - 1)* 2 * j);
			a *= R;
			S += a;
		} while (j < 4);
		return S;
	}
}