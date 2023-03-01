#include<iostream>
using namespace std;

class Vehicle
{
	int speed;
public:
	virtual void move() = 0;	//ýňî ÷čńëî âčđňóŕëüíűé ěĺňîä, 
	//č áëŕăîäŕđ˙ ĺěó ęëŕńń 'Vehicle' ˙âë˙ĺňń˙ ŕáńňđŕęňíűě
};

class GroundVehicle :public Vehicle {};

class Bulldozer :public GroundVehicle
{
public:
	void move()
	{
		cout << "Ĺçäčň ăäĺ óăîäíî íŕ ăóńĺíč÷íîě őîäó" << endl;
	}
};
class Car :public GroundVehicle {};
class SportCar :public Car
{
public:
	void move()
	{
		cout << "Ĺçäčň íŕ âűńîęîé ńęîđîńňč ďî čäĺŕëüíîé äîđîăĺ" << endl;
	}
};
class Jeep :public Car
{
public:
	void move()
	{
		cout << "Ĺçäčň ăäĺ óăîäíî" << endl;
	}
};

void main()
{
	setlocale(LC_ALL, "");

	//Vehicle v;
	//GroundVehicle gv;
	Bulldozer bull;
	bull.move();

	SportCar bmw;
	bmw.move();

	Jeep jeep;
	jeep.move();
}