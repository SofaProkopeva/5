#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	b = a / 100;
	c = a % 100;
	a = c * 10 + b;
	cout << a;
}


