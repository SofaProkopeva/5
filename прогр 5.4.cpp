#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	b = a / 10;
	c = a % 10;
	a = 10 * c + b;
	cout << a;
}

