#include <iostream>
#include <cmath>
#include "vector_3d.h"

vector3D vector3D::plus(const vector3D &op2) const
{
	vector3D temp;

	temp.x = x + op2.x;
	temp.y = y + op2.y;
	temp.z = z + op2.z;

	return temp;
}

vector3D vector3D::minus(const vector3D &op2) const
{
	vector3D temp;

	temp.x = x - op2.x;
	temp.y = y - op2.y;
	temp.z = z - op2.z;

	return temp;
}

vector3D vector3D::vector_mult(const vector3D &op2) const
{
	vector3D temp;

	temp.x = (y * op2.z - op2.y * z);
	temp.y = -(x * op2.z - op2.x * z);
	temp.z = (x * op2.y - op2.x * y);

	return temp;
}

double vector3D::scalar_mult(const vector3D &op2) const
{
	return x * op2.x + y * op2.y + z * op2.z;
}

double vector3D::angle(const vector3D &op2) const
{
	if (this->eq(op2))
		return 0.0;
	return acos((this->scalar_mult(op2)) / (this->length() * op2.length())) * 180.0 / 3.14159265;
}

double vector3D::length() const
{
	return sqrt(x * x + y * y + z * z);
}

vector3D vector3D::mult(const double &op2) const
{
	vector3D temp;

	temp.x = x * op2;
	temp.y = y * op2;
	temp.z = z * op2;

	return temp;
}

bool vector3D::eq(const vector3D &op2) const
{
	return (x == op2.x) && (y == op2.y) && (z == op2.z);
}

bool vector3D::ne(const vector3D &op2) const
{
	return !(this->eq(op2));
}

bool vector3D::lt(const vector3D &op2) const
{
	return this->length() < op2.length();
}

bool vector3D::gt(const vector3D &op2) const
{
	return this->length() > op2.length();
}

bool vector3D::le(const vector3D &op2) const
{
	return this->length() <= op2.length();
}

bool vector3D::ge(const vector3D &op2) const
{
	return this->length() >= op2.length();
}
 
void vector3D::read(std::istream &in)
{
	in >> x >> y >> z;
}

void vector3D::write(std::ostream &out)
{
	out << x << " " << y << " " << z << "\n";
}