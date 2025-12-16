#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
	std::cout << "Введите целое число:\n";
	int x{};
	std::cin >> x;
    for(int i = 1; i <= 10; i++)
	{
		std::cout << x << " x " << i << " = " << x * i << '\n';
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;

}
