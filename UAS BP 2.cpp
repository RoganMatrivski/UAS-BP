// UAS BP.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 20;
	int c = 10; int d = 5;

	if (a < 10 && a >= 5)
	{
		cout << "true";
	}

	if (b > 10 && b < 20)
	{
		cout << "true";
	}

	int hasil = c + d;

	cout << hasil;

	if (true || false)
	{
		cout << "true";
	}

	if (true && false)
	{
		cout << "true";
	}

	return 0;
}

