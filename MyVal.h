#pragma once
class MyVal
{
	
public:
	const int val;
	static int s_val;
	int& l_val; 
	
	MyVal(int v, int& l) : val{ v }, l_val{l} {}
	
	
	static void SetVal(int v)
	{
		s_val = v;
	}
};

