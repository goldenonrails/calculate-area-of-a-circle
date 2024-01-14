#include <iostream>

using namespace std;

class Circle {

	float r;
	float pi = 3.14;
	float c;

public:

	float area()
	{
		cin >> r;
		c = (r * r) * pi;
		return c;
	}

};

int main()
{
	Circle calc;

	cout << calc.area();

	return 0;
}