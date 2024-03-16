#include<iostream>
using namespace std;
int a = 5; // globális változó -minden függvény eléri

int FV(int b)
{
	cout << b << endl;
	cout << a << endl;
	{// Melyik helyes és mi a kiírás értéke?
		double b = 3.5;
		cout << b << endl;
		char X = 'A';
		cout << X + a << endl;
	}
	cout << X + a; // helyes? hibás?
	return a + 1;
}
int main()
{
	int a = 15;
	cout << FV(a);
	return 0;
}