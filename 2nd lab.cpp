#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	double x;
	int sum = 0;
	double product = 1;
	cout << "input n>= 4 , n =";

	cin >> n;

	cout << "enter x";
	cin >> x;

	if (x < 0)
	{

		for (int j = 2; j <= n - 2; j++)
		{
			product *= (j + x);
		}
		cout << "product =" << product << endl;
	}
	else
	{

		for (int i = 0; i <= n - 1; i++)
		{
			double p = 1;
			for (int j = 0; j <= n - 1; j++)
			{
				p *= (x + i + pow(j, 2));
			}
			sum += p;

		}
		cout << "SUM =" << sum << endl;
	}

	system("pause");

	return 0;

}