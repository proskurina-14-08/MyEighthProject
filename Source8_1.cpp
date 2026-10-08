#include <iostream>

void counting_function();

int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
    return EXIT_SUCCESS;
}

void counting_function()
{
    static int i{ 0 };
    std::cout << "counting_function() was called " << ++i << " times" << std::endl;
}