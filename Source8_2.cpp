#include <iostream>

namespace calculator
{
	namespace addition
	{
	
		int calc(int x, int y);

	}
	namespace subtraction
	{

		int calc(int x, int y);

	}
	namespace multiplication
	{

		int calc(int x, int y);

	}
	namespace division
	{

		int calc(int x, int y);

	}
}

int main()
{
	int x{ 6 }, y{ 9 };

	std::cout << "x = " << x << ", \t" << "y = " << y << std::endl;
	
	calculator::addition::calc(x, y);
	calculator::subtraction::calc(x, y);
	calculator::multiplication::calc(x, y);
	calculator::division::calc(x, y);

	return EXIT_SUCCESS;
}

int calculator::addition::calc(int x, int y)
{
	int result{ 0 };
	result = x + y;
	std::cout << "Addition: " << result << std::endl;
	return result;
}
int calculator::subtraction::calc(int x, int y)
{
	int result{ 0 };
	result = x - y;
	std::cout << "Subtraction: " << result << std::endl;
	return result;
}
int calculator::multiplication::calc(int x, int y)
{
	int result{ 0 };
	result = x * y;
	std::cout << "Multiplication: " << result << std::endl;
	return result;
}
int calculator::division::calc(int x, int y)
{
	int result{ 0 };
	result = x / y;
	std::cout << "Division: " << result << std::endl;
	return result;
}