// UAS BP.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

int main()
{
	int i = 0;

	while (i < 10)
	{
		cout << i;
		i++;
	}

	do
	{
		cout << i;
		i++;
	} while (i < 10);

	for (int j = 0; j < 10; j++)
	{
		cout << j + 1;
	}
	return 0;
}

