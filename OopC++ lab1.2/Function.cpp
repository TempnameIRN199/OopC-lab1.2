#include "Header.h"
Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}
Point::Point(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Point::Point(const Point& point)
{
	x = point.x;
	y = point.y;
	z = point.z;
}
Point::~Point()
{
}
void Point::setX(double x)
{
	this->x = x;
}
void Point::setY(double y)
{
	this->y = y;
}
void Point::setZ(double z)
{
	this->z = z;
}
double Point::getX() const
{
	return x;
}
double Point::getY() const
{
	return y;
}
double Point::getZ() const
{
	return z;
}
void Point::print() const
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
}
void Point::input()
{
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "z = ";
	cin >> z;
}
void Point::saveToFile(const char* fileName) const
{
	ofstream fout(fileName); // �������� ����� �� ������
	fout << x << endl; // ������ � ����
	fout << y << endl;
	fout << z << endl;
	fout.close(); // �������� �����
}
void Point::loadFromFile(const char* fileName)
{
	ifstream fin(fileName); // �������� ����� �� ������
	fin >> x; // ��������� �� ����� � ���������� x
	fin >> y;
	fin >> z;
	fin.close(); // �������� �����
}