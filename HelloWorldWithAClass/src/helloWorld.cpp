
#include <iostream>
#include <string>
#include "something.h"

int main() 
{
    std::cout << "Hello, main!" << std::endl;
    
    something somting;
	somting.hello_world();
	std::string test;
	std::cin >> test;
    return 0;
}