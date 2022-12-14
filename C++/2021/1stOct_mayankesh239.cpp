#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int Fibonacci(int n)
{
	if (n <= 1)
	{
		return n;
	}
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (Fibonacci(i) % 5 == 0 || prime(Fibonacci(i)))
		{
			cout << "0 ";
		}
		else
		{
			cout << Fibonacci(i) << " ";
		}
	}

	return 0;
}
