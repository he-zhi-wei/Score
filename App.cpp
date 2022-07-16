#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
#include"Score.cpp"


class App
{
public:
	vector<Judge*> v1;
	vector<Player*> v2;
public:
	void initialJudge(string name[],int size)
	{
		for (int i = 0; i < size; i++)
		{
			Judge *judge = new Judge;
			judge->name = name[0];
			v1.push_back(judge);
		}
	}

	void intialPlayer(string name[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			Player *player = new Player;
			player->name = name[i];
			player->score = getScore(player);
			v2.push_back(player);
		}
	}

	double getScore(Player *player)
	{
		deque<double> d1;
		for (int i = 0; i < v1.size(); i++)
		{
			d1.push_back(v1[i]->sendScore(player));
		}
		sort(d1.begin(),d1.end());
		d1.pop_back();
		d1.pop_front();
		
		double score = 0;
		for (int i = 0; i < d1.size(); i++)
		{
			score += d1[i];
		}
		score = score / d1.size();

		return score;
	}

	void printAll()
	{
		for (int i= 0; i < v2.size(); i++)
		{
			cout << "ÐÕÃû£º" << v2[i]->name << " ·ÖÊý£º" << v2[i]->score << endl;
		}
	}
};