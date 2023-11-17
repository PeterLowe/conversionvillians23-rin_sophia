// Rin Larkin
// Sophia Stanley

#include <iostream>

char printMenu(); // function declaration
void degreesToRadians();

int main()
{	
	//Declare Variables
	char userChoice = ' ';

	userChoice = printMenu(); // function call

	if (userChoice == 'A')
	{
		degreesToRadians();
	}

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

void degreesToRadians()
{
	// Declare Variables
	float degrees = 0;
	float radians = 0;

	std::cout << "Input Value in Degrees" << std::endl;
	std::cin >> degrees;

	radians = degrees * (3.14 / 180); // formula to convert degrees to radians (multiply by pi over 180)

	std::cout << degrees << " Degrees = " << radians << " Radians" << std::endl;
}