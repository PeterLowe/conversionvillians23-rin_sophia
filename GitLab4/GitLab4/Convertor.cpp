// Rin Larkin
// Sophia Stanley

#include <iostream>

int main()
{
	return 0;
}

char printMenu() // written by Sophia
{
	char choice = ' '; // the user's choice
	std::cout << "Please enter an uppercase letter to convert from left to right\nand lowercase to convert from right to left\n\n" << std::endl;

	std::cout << "[D] Mpg		<--->	L/100km		[d]" << std::endl;
	std::cout << "[E] Kilograms	<--->	Stone & Pounds	[e]" << std::endl;
	std::cout << "[F] Celsius	<--->	Fahrenheit	[f]" << std::endl;
	std::cout << "[Q] Exit		[...]	Exit		[q]" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> choice;
	return choice;
}