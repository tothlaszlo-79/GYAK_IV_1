#include<iostream>
using namespace std;
int a = 5; // glob�lis v�ltoz� -minden f�ggv�ny el�ri

int FV(int b)
{
	cout << b << endl;
	cout << a << endl;
	{// Melyik helyes �s mi a ki�r�s �rt�ke?
		double b = 3.5;
		cout << b << endl;
		char X = 'A';
		cout << X + a << endl;
	}
	cout << X + a; // helyes? hib�s?
	return a + 1;
}
int main()
{
	int a = 15;
	cout << FV(a);
	return 0;
}