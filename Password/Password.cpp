#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	/*
	* value string is 16 bytes(15 writeable, \0 at end), and 1 byte for bool, all toghether struct
	* is 17 bytes. if we write 16 chars, at write where \0 is supposed to be, it will push \0 one 
	* right, and that way the bool value will not be 1(true) and every value that is not 1 is true(\0 != 1)
	*/
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
