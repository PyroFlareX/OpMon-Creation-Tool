// Author: PyroFlareX
// Copyright 2019

#include <iostream>
#include <fstream>
#include <io.h>
#include <direct.h>
#include <string>
#include <ctime>

struct Stats
{
	int HP;
	int Atk;
	int AtkSpe;
	int Def;
	int DefSpe;
	int Speed;
};


void createOpMon(int captureRate = 120, int curve = 1000000, float weight = 5.0);

int main()
{
	if (_mkdir("../OpMonOut") != 0)
	{
		uint64_t time = std::time(nullptr);
		std::cout << "Creating Directories...\nInitializing...\nCOMPLETE!\n"; //For Funzies
		while ((time + 3) >= (std::time(nullptr)))
		{	}

		while (true) // Uses while loop so tool can be restarted
		{
			Stats OpMon;
			std::string name;
			///Starting the OpMon Creation
			std::cout << "\aHello There!, This is the OpMon creation tool by PyroFlareX\n";
			std::cout << "\tMake sure you received this executable from the proper sources :P!\n\n";

			std::cout << "Please Enter the OpMon's Name:   \n";
			std::cin >> name;


			std::cout << "\nPlease Enter the OpMon's HP\n";
			std::cin >> OpMon.HP;

			std::cout << "\nPlease Enter the OpMon's Attack\n";
			std::cin >> OpMon.Atk;

			std::cout << "\nPlease Enter the OpMon's Special Attack\n";
			std::cin >> OpMon.AtkSpe;

			std::cout << "\nPlease Enter the OpMon's Defense\n";
			std::cin >> OpMon.Def;

			std::cout << "\nPlease Enter the OpMon's Special Defence\n";
			std::cin >> OpMon.DefSpe;

			std::cout << "\nPlease Enter the OpMon's Speed\n";
			std::cin >> OpMon.Speed;

			//Asking if user wants to continue
			std::cout << "\n\nContinue? (Y/n)";
			std::string response;
			std::cin >> response;
			if (!(response == "Y" || response == "y"))
			{
				break;
			}
		}

	}
	else
	{
		std::cout << "Cannot create Directory\n";
	}

	return 0;
}

void createOpMon(int captureRate, int curve, float weight)
{

}
