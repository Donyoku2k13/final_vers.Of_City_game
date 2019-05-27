#pragma once
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class CitiesLogic {

	vector<string>cities;
	vector<string>usedCities;

public:
	//1-norm,2- already used, 3-letters !=, 0-town not found
	
	int check(const string& city) {

		int c = 0;
		for (size_t i = 0; i < cities.size(); i++)
		{
			if (city == cities[i])
			{
				for (size_t i = 0; i < usedCities.size(); i++)
				{
					if (city == usedCities[i])
						c = 2;
				}
				if (usedCities.size() > 0)
				{
					if (city[0] + 32 != usedCities[usedCities.size() - 1][usedCities[(usedCities.size() - 1)].length() - 1])
					{
						c = 3;
					}
					//*(usedCities)
					usedCities.push_back(city);
					c = 1;
				}
			}

		}
		c = 0;
		return c;
	}
	CitiesLogic(string fileDir) {
		ifstream file;// ("city.csv");
		file.open("city.csv");

		while (!file.eof()) {
			string str;
			//file>>str;// before spacebar;
			getline(file, str);//before end of string

			if (str.rfind(';') == string::npos)
				cities.push_back(str.substr(str.rfind(';') + 1));


		}
		file.close();
	}
};

