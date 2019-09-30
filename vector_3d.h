#ifndef VECTOR_3D
#define VECTOR_3D 1

class vector3D
{
	int x, y, z;
public:
	vector3D() : x(0), y(0), z(0) {};
	vector3D(int i, int j, int k) : x(i), y(j), z(k) {};
	vector3D plus(const vector3D &op2) const;
	vector3D minus(const vector3D &op2) const;
	vector3D vector_mult(const vector3D &op2) const;
	double scalar_mult(const vector3D &op2) const;
	double angle(const vector3D &op2) const;
	double length() const;
	vector3D mult(const double &op2) const;
	bool eq(const vector3D &op2) const;
	bool ne(const vector3D &op2) const;
	bool lt(const vector3D &op2) const;
	bool gt(const vector3D &op2) const;
	bool le(const vector3D &op2) const;
	bool ge(const vector3D &op2) const;
	void read(std::istream &in);
	void write(std::ostream &out);
};

#endif //VECTOR_3D