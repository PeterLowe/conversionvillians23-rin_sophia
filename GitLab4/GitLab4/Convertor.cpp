// Rin Larkin
// Sophia Stanley

#include <iostream>

char printMenu(); // function declaration

int main()
{	
	//Declare Variables
	char userChoice = ' ';

	userChoice = printMenu(); // function call

	return 0;
}

char printMenu() // Written by Rin and Sophia
{
	// Declare Variables
	char choice = ' ';

	// User Input
	std::cout << "Enter an Upper Case Letter to Convert from Left to Right, and Lower Case to Convert from Right to Left" << std::endl;
	
	std::cout << "[A] Degrees <---> Radians [a]" << std::endl;
	std::cout << "[B] Centimetres <---> Feet & Inches [b]" << std::endl;
	std::cout << "[C] Litres <---> Gallons [c]" << std::endl;
	std::cout << "[D] Mpg		<--->	L/100km		[d]" << std::endl;
	std::cout << "[E] Kilograms	<--->	Stone & Pounds	[e]" << std::endl;
	std::cout << "[F] Celsius	<--->	Fahrenheit	[f]" << std::endl;
	std::cout << "[Q] Exit		[...]	Exit		[q]" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> choice;
	return choice;
}