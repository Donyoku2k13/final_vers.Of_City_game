#include <string>
#include <iostream>
#include <fstream>
#include <Windows.h>
#include"city_interface.h"
#include "city_logic.h"
using namespace std;



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	CitiesGameinterface j(2,0,"city.csv");
	j.game(2);
	CitiesLogic c("city.csv");
	
	system("pause");
}