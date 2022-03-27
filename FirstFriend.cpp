#include "FirstFriend.h"
#include <iostream>
using namespace std;

void FirstFriend::ShowFriend(SecondFriend fr)
{
	cout << "\n SecondFriend:" << fr.i;
}
