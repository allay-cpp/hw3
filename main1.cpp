#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
	std::string question{ "¬ведите целое число или число '0', чтобы закончить:\n" };
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
	std::cout << "—умма: " << summa << std::endl;

	return EXIT_SUCCESS;
}