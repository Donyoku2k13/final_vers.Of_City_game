#pragma once
#include "city_logic.h"
#include <iostream>
using namespace std;
class CitiesGameinterface:public CitiesLogic
{
	int amountOfPlayers;
	int end = 0;
	
public:
	CitiesGameinterface(int amountOfPlayers, int end,string fileDir):CitiesLogic(fileDir)
	{
		this->amountOfPlayers = amountOfPlayers;
		this->end = end;
	}
	void game(size_t players)
	{
		string city;
		amountOfPlayers = players;
		while (end == 0)
		{
			for (size_t i = 0; i < amountOfPlayers; i++)
			{
				cout << "Player number " << i << " please write city name" << endl;
				cin>> city;
				switch (check(city))
				{
				case 0:
					cout << "this city is not exist" << endl;
					i--;
				case 1:
					cout << "success" << endl;
					break;
				case 2:
					cout << "this city was used" << endl;
					i--;
				case 3:
					cout << "the first letter does not fit" << endl;
					i--;
					break;
				default:
					break;
				}
			}
		}
	}
};
