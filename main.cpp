#include <iostream>
#include <cmath>
#include "vector_3d.h"

int main()
{
	vector3D v1, v2;

	v1.read(std::cin);
	std::cout << "v1:\n";
	v1.write(std::cout);
	v2.read(std::cin);
	std::cout << "v2:\n";
	v2.write(std::cout);

	std::cout << "v1 + v2:\n";
	v1.plus(v2).write(std::cout);

	std::cout << "v1 - v2:\n";
	v1.minus(v2).write(std::cout);

	std::cout << "[v1, v2]:\n";
	v1.vector_mult(v2).write(std::cout);

	std::cout << "(v1, v2):\n" << v1.scalar_mult(v2) << "\n";

	std::cout << "angle between v1 and v2:\n" << v1.angle(v2) << "\n";

	std::cout << "|v1|:\n" << v1.length() << "\n";
	std::cout << "|v2|:\n" << v2.length() << "\n";

	double num;
	std::cin >> num;
	std::cout << "v1 * " << num << ":\n";
	v1.mult(num).write(std::cout);
	std::cout << "v2 * " << num << ":\n";
	v2.mult(num).write(std::cout);

	std::cout << "v1 == v2 ? ";
	if (v1.eq(v2))
	{
		std::cout << "YES\n";
	}
	else 
	{
		std::cout << "NO\n";
	}

	std::cout << "v1 != v2 ? ";
	if (v1.ne(v2))
	{
		std::cout << "YES\n";
	}
	else 
	{
		std::cout << "NO\n";
	}

	std::cout << "|v1| < |v2| ? ";
	if (v1.lt(v2))
	{
		std::cout << "YES\n";
	}
	else 
	{
		std::cout << "NO\n";
	}

	std::cout << "|v1| > |v2| ? ";
	if (v1.gt(v2))
	{
		std::cout << "YES\n";
	}
	else 
	{
		std::cout << "NO\n";
	}

	std::cout << "|v1| <= |v2| ? ";
	if (v1.le(v2))
	{
		std::cout << "YES\n";
	}
	else 
	{
		std::cout << "NO\n";
	}

	std::cout << "|v1| >= |v2| ? ";
	if (v1.ge(v2))
	{
		std::cout << "YES\n";
	}
	else 
	{
		std::cout << "NO\n";
	}

	return 0;
}