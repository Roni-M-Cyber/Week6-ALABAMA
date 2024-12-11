#include "part1.h"
#include <iostream>

// because the num of chars is 12, but we have \0 at end, we need 13 chars and not 12
#define WORD_LENGTH 13

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;
}

void part1()
{
	char password[] = "secret";
	char src[] = "hello world!";
	char dest[WORD_LENGTH];

	string_copy(dest, WORD_LENGTH, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
