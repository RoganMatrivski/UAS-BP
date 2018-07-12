// UAS BP.cpp : Defines the entry point for the console application.
//

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ifstream input;
	input.open("test.txt");

	string line;
	if (input.is_open())
	{
		while (getline(input, line))
		{
			cout << line << '\n';
		}
		input.close();
	}

	ofstream output;
	output.open("test2.txt");

	if (output.is_open())
	{
		output << "Test" << endl;
		output.close();
	}

	return 0;
}

