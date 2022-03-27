#pragma once
#include <iostream>
using namespace std;

class MyStr
{
	int len;
	char* str;
public:
	MyStr(): len{0}, str{nullptr}{}
	explicit MyStr(const char* n) :MyStr()
	{
		if (n != nullptr)
		{
			len = strlen(n);
			str = new char[len + 1];
			strcpy_s(str, len + 1, n);
		}
	}

	MyStr(const MyStr& c):MyStr(c.str)
	{
	}

	MyStr operator=(MyStr n)
	{
		if (str != nullptr)
		{
			delete[]str;
			str = nullptr;
			len = 0;
		}
		if (n.str != nullptr)
		{
			len = n.len;
			str = new char[len + 1];
			strcpy_s(str, len + 1, n.str);
		}
		return *this;
	}
	
	MyStr operator+(MyStr b)
	{
		MyStr c;
		c.len = len + b.len;
		c.str = new char[c.len + 1];
		c.str[0] = '\0';
		if (str != nullptr)
		{
			strcat_s(c.str, c.len + 1, str);
		}
		if (b.str != nullptr)
		{
			strcat_s(c.str, c.len + 1, b.str);
		}
		return c;
	}

	MyStr operator+(int a)
	{
		char m[129];
		snprintf(m, 129, "% i", a);
		MyStr c;
		c.len = len + strlen(m);
		c.str = new char[c.len + 1];
		c.str[0] = '\0';
		if (str != nullptr)
		{
			strcat_s(c.str, c.len + 1, str);
		}
		strcat_s(c.str, c.len + 1, m);
		return c;
	}

	MyStr operator+(double a)
	{
		char m[129];
		snprintf(m, 129, "% f", a);
		MyStr c;
		c.len = len + strlen(m);
		c.str = new char[c.len + 1];
		c.str[0] = '\0';
		if (str != nullptr)
		{
			strcat_s(c.str, c.len + 1, str);
		}
		strcat_s(c.str, c.len + 1, m);
		return c;
	}

	operator char* () const
	{
		if (str == nullptr)
			return (char*)"Empty";
		else
		{
			return str;
		}
	}

	operator int()
	{
		if (str == nullptr)
		{
			return 0;
		}
		else
		{
			return atoi(str);
		}
	}

	friend ostream& operator<<(ostream& s, MyStr a)
	{
		if (a.len == 0)
		{
			s << "Empty";
		}
		else
		{
			s << a.str;
		}
		return s;
	}

	~MyStr()
	{
		if (str != nullptr)
		{
			delete[]str;
		}
	}

};

