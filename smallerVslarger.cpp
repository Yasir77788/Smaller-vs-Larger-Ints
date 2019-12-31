// Finding largest and smaller integer with comparison
// Using the idea that smaller/larger is 0, and vice versa.
#include <iostream>

int main()
{
	long a{};
	long b{};

	std::cout << "Enter a non negative integer: ";
	std::cin >> a;
	std::cout << "Enter another non negative  integer: ";
	std::cin >> b;

	// Arithmetic expressions for each of the larger
	// and the smaller of the two integers
	const long larger{ (a * (a / b) + b * (b / a)) / (a / b + b / a) };
	const long smaller{ (b * (a / b) + a * (b / a)) / (a / b + b / a) };

	std::cout << "The larger integer is " << larger << ".\n"
		<< "The smaller integer is " << smaller << '.' << std::endl;

	std::cin.get();
	return 0;
}