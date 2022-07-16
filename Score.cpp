#pragma
#include<iostream>
using namespace std;
#include<string>
#include<time.h>


class Player 
{
public:
	string name;

	double score;
};

class Judge
{
public:
	string name;

public:
	int sendScore(Player *p)
	{
		return rand() % 41 + 60;
	}

};