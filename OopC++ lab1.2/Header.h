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
// ����������� ����� �����. ����� ��������� ���������� x, y, z � ���������� ������. ����������� ������� ������ ��� ����� ������, ������ ������, ����������� �������� ��� ������� � ����������, ����������� ���������� � ���� � �������� ������ � �����
class Point
{
private:
	double x, y, z;
public:
	Point(); // ����������� �� ���������
	Point(double x, double y, double z); // ����������� � �����������
	Point(const Point& point); // ����������� �����������
	~Point(); // ����������
	void setX(double x); // ��������
	void setY(double y); 
	void setZ(double z);
	double getX() const; // const - ����� ������ ���� �������� ������
	double getY() const;
	double getZ() const;
	void print() const; // ����� ������
	void input(); // ���� ������ � ����������
	void saveToFile(const char* fileName) const; // ���������� � ����
	void loadFromFile(const char* fileName); // �������� �� �����
};