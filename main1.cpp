#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
	std::string question{ "Введите целое число или число '0', чтобы закончить:\n" };
	std::cout << question;
	int answer{};
	std::cin >> answer;
	int summa{};
	summa = answer;
	while (answer != 0)
	{
		std::cout << question;
		std::cin >> answer;
		summa += answer;
	}
	std::cout << "Сумма: " << summa << std::endl;

	return EXIT_SUCCESS;

}
