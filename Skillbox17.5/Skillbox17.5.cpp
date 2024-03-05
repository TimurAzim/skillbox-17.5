#include <iostream>
#include <cmath>

class Vector
{
public:
	Vector()
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	void Show()
	{
		std::cout << '\n' << x << ' ' << y << ' ' << z;
	}
	double length() const {
		return std::sqrt(x * x + y * y + z * z);
	}
private:
	double x = 1;
	double y = 2;
	double z = 4;
};

int main()
{
	Vector v; 
	v.Show();
	std::cout << "\n Length of the vector: " << v.length() << std::endl;
}