#include <iostream>
#include <Windows.h>

using namespace std;

class Figure
{
    string name;
    int side;

public:

    Figure(string name = "Фигура", int side = 0)
    {
        this->name = name;
        this->side = side;
    }

    void Information()
    {
        cout << "Число сторон у \"" << name << "\": " << side << endl;
    }
};

class Triangle : public Figure
{
public:
    Triangle() :Figure("Треугольник", 3)
    {

    }
};

class RRectangle : public Figure
{
public:
    RRectangle() :Figure("Прямоугльник", 4)
    {

    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure;
    Triangle triangle;
    RRectangle rectangle;

    figure.Information();
    triangle.Information();
    rectangle.Information();
}