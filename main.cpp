//   SHIT WE'RE INCLUDING
#include <iostream>
#include <string>
#include <list>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>












// MAIN FUNCTION LMAO :3



int main() {

#ifdef _WIN32
#define OS "win";

	std::string OS;

	if (OS = "win") {
		std::cout << "Running on Windows";
		

	};
	else {
		std::cout << "Running on Linux/Other";
		clrscr();


	}



		



#endif // _WIN32;



	
	
	std::cout <<
		   "       ,-------.    , ------.    _____    .-------.  .--.  .--.   .--.   .--------.   .------.\n"
		<< "       |  .---./    |  .--. |   /     \\   |  .--. |  |  '--'  |   |  |   '--.  .--'   |  [=] |\n"
		<< "       |  | .--.    |  '--' |  |  .-.  |  |  '--' |  |  .--.  |   |  |      |  |      |   ___'\n"
		<< "       |  |_|  |    | |---| \\  |  | |  |  |  _____|  |  |  |  |   |  |      |  |      |  |___.\n"
		<< "       |_______|    |_|   |_|  |__| |__|  |__|       |__|  |__|   |__|      |__|      |______|\n"
		<< "\n"
		<< "Lightweight barebones text editor !!!\n";


	std::cout << "Enter the directory of the file you want to edit\n";
	std::string usrin;
	std::cin >> usrin;
	std::ofstream TFile;
	TFile.open(usrin);
	std::system("cls");




	











	


	return 0;

}
