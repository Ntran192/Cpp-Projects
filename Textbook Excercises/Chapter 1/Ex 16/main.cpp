// Nathan Tran
// Ch 1 Ex 16 Solution
// Last Updated: 2/2/25

#include <iostream> /* cin, cout */
#include <iomanip>  /* fixed, setprecision() */

int main()
{
	float listPrice;   // The list price of the car
	float dealerCost;  // The dealer cost of the car
	float leastAmount; // The lowest priace the dealer is willing to sell the car

	/* Input */
	std::cout << "What is the list price of the car?: $";
	std::cin >> listPrice;

	/* Calculate */
	/*
		Calculate the dealer price as 85% of the list price and
		find the lowest amount the dealer will sell for
	*/
	dealerCost = listPrice * 0.85;
	leastAmount = dealerCost + 500;

	/* Output */
	/*
		Display the lowest price with 2 decimal points
	*/
	std::cout << "The lowest price the dealer will sell the car is $" << std::fixed << std::setprecision(2) << leastAmount;

	return 0;
}