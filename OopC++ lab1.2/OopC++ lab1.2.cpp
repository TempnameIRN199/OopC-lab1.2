#include "Header.h"
int main()
{
	Point point;
	point.input();
	point.print();
	point.saveToFile("point.txt");
	Point point2;
	point2.loadFromFile("point.txt");
	point2.print();
	return 0;
}