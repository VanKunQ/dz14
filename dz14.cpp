
#include <iostream>
#include <string>
#include <iomanip>
int main()
{
	
	std::cout << "What is your name? ";
	std::string name;
    std::cin >> name;
	std::getline(std::cin, name);
	


	std::cout << "Are you a programmer? Yes or no. ";
	std::string YesorNo;
	std::cin >> YesorNo;
	std::getline(std::cin, YesorNo);

	std::cout << "Good luck, you are not a programmer Ha-ha-ha ";
	
	
	std::cout << name << " " << YesorNo << "\n";

	std::string first = "name";
	std::cout << first.length() << "\n";
	std::cout << first.front() << "\n";
	std::cout << first.back() << "\n";


	std::cin;
	return 0;
}