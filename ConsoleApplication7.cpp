#include <iostream>
#include "MyStr.h"
#include "MyVal.h"

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
	
	MyStr cc;
	cc = cc + 7;
	int c = (int)cc;
	cout << "\nc = " << c;


	int l = 10;
	int l2 = 12;
	//статические пересенные
	MyVal d{ 4, l };
	MyVal d2{ 3, l2 };
	cout << "\nd.val = " << d.val;
	cout << "\nd2.val = " << d2.val;
	//доступ к статическим переменным без создания объекта
	MyVal::s_val = 10;
	cout << "\nd2.s_val = " << d2.s_val;

	MyVal d3{ 3, l2 };
	//
	cout << "\n\nLinks";
	cout << "\nd1.l_val = " << d.l_val;
	cout << "\nd2.l_val = " << d2.l_val;
	cout << "\nd3.l_val = " << d3.l_val;

	//узкакание статичской переменной статическим методом без создания объекта
	MyVal::SetVal(90);
}
