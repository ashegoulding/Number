/*
 * tester.cpp
 *
 *  Created on: 2014. 10. 20.
 *      Author: david
 */


#include <iostream>

#include "Number.h"

int main(const int argc, const char **arcs)
{
	ashe::Number<double> a = 223.0F / 71.0F;

	std::cout << a.toString() << std::endl;
	std::cout << ashe::Number<double>::toString(*a) << std::endl;

	return 0;
}
