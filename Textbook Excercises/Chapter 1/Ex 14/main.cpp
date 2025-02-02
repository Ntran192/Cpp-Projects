// Nathan Tran
// Ch 1 Ex 14 Solution
// Last Updated: 2/2/25

#include <iostream> /* cin, cout */

int main() 
{
	int numQuarters;
	int numDimes;
	int numNickels;
	int numPennies;
	int total = 0; // the total amount of pennies to match the change given

	/* Input */
	/*
		Prompt the user to input the amount of quarters, dimes, nickels,
		and pennies.
	*/
	std::cout << "How many quarters?: ";
	std::cin  >> numQuarters;

	std::cout << "How many dimes?: ";
	std::cin  >> numDimes;

	std::cout << "How many nickels?: ";
	std::cin  >> numNickels;

	std::cout << "How many pennies?: ";
	std::cin  >> numPennies;

	/* Calculate */
	/*
		Convert the quarters, dimes, nickels, and pennies into pennies
	*/
	total = (numQuarters * 25) + (numDimes * 10) + (numNickels * 5) + numPennies;

	/* Output */
	std::cout << "The change equals to " << total << " pennies.";

	return 0;
}