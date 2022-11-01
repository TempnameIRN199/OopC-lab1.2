#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include <string.h>
#include <ctype.h>
#include <fstream>
using namespace std;

class Point
{
private:
	double x, y, z;
public:
	Point(); // êîíñòðóêòîð ïî óìîë÷àíèþ
	Point(double x, double y, double z); // êîíñòðóêòîð ñ ïàðàìåòðàìè
	Point(const Point& point); // êîíñòðóêòîð êîïèðîâàíèÿ
	~Point(); // äåñòðóêòîð
	void setX(double x); // àêñåñîðû
	void setY(double y); 
	void setZ(double z);
	double getX() const; // const - ÷òîáû íåëüçÿ áûëî èçìåíÿòü äàííûå
	double getY() const;
	double getZ() const;
	void print() const; // âûâîä äàííûõ
	void input(); // ââîä äàííûõ ñ êëàâèàòóðû
	void saveToFile(const char* fileName) const; // ñîõðàíåíèå â ôàéë
	void loadFromFile(const char* fileName); // çàãðóçêà èç ôàéëà
};
