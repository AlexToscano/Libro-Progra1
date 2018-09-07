#include <iostream>
//(int &x,int &y)parametros por referencia
using namespace std;

int main()
{
	int x = 2;
	int y = 8;
	
	cout << suma(x, y) << endl;
	cout << x << endl;
	cin.get();
	return 0;
}

int suma(int x, int y)
{
	x += y;

	return x;
}