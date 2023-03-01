#include<iostream>
using namespace std;

enum Color 
{
	console_blue = 0x99,
	console_green = 0xAA,
	console_red=0xCC,
	console_default = 0x07
};
class Shape//абстрактный базовый класс
{
	Color color;
	
public:
	Shape(Color color) :color(color) {};
	virtual ~Shape() {}
	virtual double get_area()const = 0;
	virtual double get_perimetr()const = 0;
	virtual void draw()const = 0; 
};

class Triangle :public Shape
{
	int perimetr;
	
public:
	const int get_perimetr()
	{
		return perimetr;
	}


};
class Square
{
	int perimetr;
public:
	const int get_perimetr()
	{
		return perimetr;
	}

};
class Rectangle
{
	int perimetr;
public:
	const int get_perimetr()
	{
		return perimetr;
	}

};

void main()
{
	setlocale(LC_ALL, "");


}