#include<iostream>
using namespace std;
void main()
{
	int r, k, n, fact = 1;
		cout << "Enter a number to calculate its factorial\n";
		cin >> n;
		for (k = 1; k <= n; k++)
		{
			fact = fact * k;
		}
		cout << "Factorial of " << n << " = " << fact<<endl;
		system("pause");
}