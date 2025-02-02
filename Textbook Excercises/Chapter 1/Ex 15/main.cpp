// Nathan Tran
// Ch 1 Ex 15 Solution
// Last updated: 2/2/25

#include <iostream> /* cin, cout */
#include <iomanip>  /* setprecision() */
#include <cmath>    /* pow() */

int main()
{
	float inches; // The pizzas radius in inches
	float price;  // The pizzas price
	float pricePerSqInch; // The price per square inch of the pizza

	/* Input */
	std::cout << "What is the radius of the pizza? (Inches): ";
	std::cin >> inches;

	std::cout << "What is the price of the pizza?: $";
	std::cin >> price;

	/* Calculate */
	pricePerSqInch = (3.141592 * pow(inches, 2)) * price;

	/* Output */
	std::cout << "Price per Square Inch of the Pizza is: $" << std::setprecision(2) << pricePerSqInch;

	return 0;
}