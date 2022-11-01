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
// реализовать класс Точка. Нужно сохранять координаты x, y, z в переменных класса. Реализовать функции класса для ввода данных, вывода данных, реализовать аксесоры для доступа к переменным, реалиховать сохранение в файл и загрузку данных с файла
class Point
{
private:
	double x, y, z;
public:
	Point(); // конструктор по умолчанию
	Point(double x, double y, double z); // конструктор с параметрами
	Point(const Point& point); // конструктор копирования
	~Point(); // деструктор
	void setX(double x); // аксесоры
	void setY(double y); 
	void setZ(double z);
	double getX() const; // const - чтобы нельзя было изменять данные
	double getY() const;
	double getZ() const;
	void print() const; // вывод данных
	void input(); // ввод данных с клавиатуры
	void saveToFile(const char* fileName) const; // сохранение в файл
	void loadFromFile(const char* fileName); // загрузка из файла
};