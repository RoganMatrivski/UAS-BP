// UAS BP.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

void cetak()
{
	cout << "Cetak sebuah tulisan";
}

int penjumlahan(int pertama, int kedua)
{
	return pertama + kedua;
}

int faktorial(int n)
{
	if (n > 1)
	{
		return n * faktorial(n - 1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int hasil = penjumlahan(5, 10); //Mengisi variabel hasil dengan angka 10
	
	int hasil_faktorial = faktorial(4); //mengisi variabel hasil_faktorial dengan angka 24

	cetak();

	return 0;
}
