#include <iostream>
#include "MyStr.h"

int main()
{

	MyStr a{"Hello"};
	cout << "\na = " << a;
	char str2[]{ " World" };
	MyStr b{ str2 };
	
	cout << "\nb = " << b;
	a = a + b;
	cout << "\na = " << a;
	a = a + b;
	cout << "\na = " << a;
	a = a + 7;
	a = a + 7.75;
	cout << "\na = " << a;
}
