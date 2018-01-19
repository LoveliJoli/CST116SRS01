// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	std::cout << "Size of (false) == " << sizeof(false) <<'\n';
	std::cout << "Size of (true) == " << sizeof(true) << '\n';
	std::cout << "Size of (0) == " << sizeof(0) << '\n';
	std::cout << "Size of (1) == " << sizeof(1) << '\n';
	std::cout << "Size of (0xffff) == " << sizeof(0xffff) << '\n';
	std::cout << "Size of (0UL) == " << sizeof(0UL) << '\n';
	std::cout << "Size of (\'\\0\') == " << sizeof('\0') << '\n';
	std::cout << "Size of (\'\\377\') == " << sizeof('\377') << '\n';
	std::cout << "Size of (0.0) == " << sizeof(0.0) << '\n';
	std::cout << "Size of (0.f) == " << sizeof(0.f) << '\n';
	std::cout << "Size of (\"Annie\"\"\"\\\"Lennox\"\\n\") == " << sizeof("Annie" " " "\"Lennox\"\n") << std::endl;
		
	return 0;
}

