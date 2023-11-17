// Rin Larkin
// Sophia Stanley

#include <iostream>

// Function Declarations
char printMenu(); 
void degreesToRadians();
void centimetresToInches();
void fahrenheitToCelsius(); // fahrenheit to celsius function declaration

int main()
{	
	//Declare Variables
	char userChoice = ' ';
	userChoice = printMenu(); // function call

	if (userChoice == 'A')
	{
		degreesToRadians();
	}

	if (userChoice == 'B')
	{
		centimetresToInches();
	}

	if (userChoice == 'f')
	{
		fahrenheitToCelsius();
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

void degreesToRadians() // Written by Rin
{
	// Declare Variables
	float degrees = 0;
	float radians = 0;

	std::cout << "Input Value in Degrees" << std::endl;
	std::cin >> degrees;

	radians = degrees * (3.14 / 180); // formula to convert degrees to radians (multiply by pi over 180)

	std::cout << degrees << " Degrees = " << radians << " Radians" << std::endl;
}
 
void centimetresToInches() // Written by Rin
{
	//Declare Variables
	float centimetres = 0;
	float inches = 0;

	std::cout << "Input Value in Centimetres" << std::endl;
	std::cin >> centimetres;

	inches = centimetres * 0.3937; // formula to convert centimetres to inches

	std::cout << centimetres << " cm = " << inches << " inches" << std::endl;
}

void fahrenheitToCelsius()
{
	float fahrenheit = 0; // the fahrenheit value that the user will input
	float celsius = 0; // the celsius temperature that will be calculated

	std::cout << "Enter the temperature in Fahrenheit: ";
	std::cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 5.0 / 9;

	std::cout << fahrenheit << " degrees fahrenheit is " << celsius << " degrees celsius." << std::endl;
}
