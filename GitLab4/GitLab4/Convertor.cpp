// Rin Larkin
// Sophia Stanley

#include <iostream>

// Function Declarations
char printMenu(); 
void degreesToRadians();
void centimetresToFeetAndInches();
void litresToGallons();
void stoneLbsToKilograms();
void fahrenheitToCelsius();

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
		centimetresToFeetAndInches();
	}

	if (userChoice == 'C')
	{
		litresToGallons();
	}

	if (userChoice == 'e')
	{
		stoneLbsToKilograms();

	}
	if (userChoice == 'f')
	{
		fahrenheitToCelsius();
	}

	return 0;
}

char printMenu() // Written by Rin (A - F) and Sophia (a - f)
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
 
void centimetresToFeetAndInches() // Written by Rin
{
	// Declare Variables
	float centimetres = 0;
	float inches = 0;
	int feet = 0;

	std::cout << "Input Value in Centimetres" << std::endl;
	std::cin >> centimetres;

	inches = centimetres * 0.3937; // formula to convert centimetres to inches
	feet = inches / 12; // formula to convert inches to feet

	std::cout << centimetres << " cm = " << feet << " feet and " << inches << " inches" << std::endl;
}

void litresToGallons() // Written by Rin
{
	// Declare Variables
	float litres = 0;
	float gallons = 0;

	std::cout << "Input Value in Litres" << std::endl;
	std::cin >> litres;

	gallons = litres * 0.21997; // formula to convert litres to imperial gallons

	std::cout << litres << " litres = " << gallons << " imperial gallons" << std::endl;
}

void stoneLbsToKilograms() // written by Sophia
{
	float stone = 0; // the number of stone that the user will input
	float pounds = 0; // the number of pounds that the user will input 
	float totalPounds = 0; // pounds after adding the stone to pounds
	const float KG_CALC = 0.453; // for calculating lbs to kg
	float kg = 0; // the kilograms that will be calculated

	std::cout << "Enter the weight in stone: ";
	std::cin >> stone;
	std::cout << "Enter the pounds: ";
	std::cin >> pounds;

	totalPounds = (stone * 14) + pounds;
	kg = totalPounds * KG_CALC;

	std::cout << stone << " stone and " << pounds << " lbs is " << kg << " Kilograms." << std::endl;
}

void fahrenheitToCelsius() // written by Sophia
{
	float fahrenheit = 0; // the fahrenheit value that the user will input
	float celsius = 0; // the celsius temperature that will be calculated

	std::cout << "Enter the temperature in Fahrenheit: ";
	std::cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 5.0 / 9;

	std::cout << fahrenheit << " degrees fahrenheit is " << celsius << " degrees celsius." << std::endl;
}
