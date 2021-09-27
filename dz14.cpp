
#include <iostream>
#include <string>
int main()
{
	std::cout << "What is your name? \n";
	std::string name;
	std::cin >> name;


	std::cout << "Are you a programmer? Yes or no. \n";
	std::string yesorno;
	std::cin >> yesorno;

	std::cout << "Good luck, you are not a programmer Ha-ha-ha \n";
	
	
	std::cout << name << " " << yesorno << "\n";

	std::cin;
	return 0;
}