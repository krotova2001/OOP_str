#pragma once
class SecondFriend;
class FirstFriend
{
public:
	void ShowFriend(SecondFriend fr);

};

class SecondFriend
{
	friend class FirstFriend;
	int i = 2;
public:

	//friend void FirstFriend::ShowFriend(SecondFriend fr);
};

