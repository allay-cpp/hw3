#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
	std::cout << "Введите целое число:\n";
	int integer{};
	std::cin >> integer;
	int summa{ 0 };
	while (integer > 0)
	{
		summa += integer % 10;
		integer /= 10;
	}
	std::cout << "Сумма цифр: " << summa << std::endl;

	return EXIT_SUCCESS;
}