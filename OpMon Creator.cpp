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
	std::string HP;
	std::string Atk;
	std::string AtkSpe;
	std::string Def;
	std::string DefSpe;
	std::string Speed;
};


void createOpMon(std::string name, Stats opmon, int captureRate, int curve, float weight = 5.0);

int main()
{
	_mkdir("../OpMonOut");

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

			try {
				//Passing Struct of OpMon stats, etc. // Creating OpMon!!!!
				//captureRate = 120		curve = 1000000		weight = 5.0
				createOpMon(name, OpMon, 120, 1000000, 6.8);
			}
			catch (...)
			{
				std::cerr << "Error Creating OpMon; sorry 'bout dat\n";
			}

			//Asking if user wants to continue
			std::cout << "\n\nContinue? (Y/n)";
			std::string response;
			std::cin >> response;
			if (!(response == "Y" || response == "y"))
			{
				break;
			}
		}
	return 0;
}

void createOpMon(std::string name, Stats opmon, int captureRate, int curve, float weight)
{
	std::ofstream out;
	out.open("../OpMonOut/opmon" + name + ".opmn");
	out << "{\n\t\"HP\":" + opmon.HP;
	out << ",\n\t\"atk\":" + opmon.Atk;
	out << ",\n\t\"atkSpe\":" + opmon.AtkSpe;
	out << ",\n\t\"captureRate\":" + captureRate;
	out << ",\n\t\"curve\":" + curve;
	out << ",\n\t\"def\":" + opmon.Def;
	out << ",\n\t\"defSpe\":" + opmon.DefSpe;
	out.close();
}
