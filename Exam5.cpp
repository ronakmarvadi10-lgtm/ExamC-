#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
    virtual float calculateArea() = 0;
};

class Circle : public Shape
{
public:
    float r;

    Circle(float radius)
    {
        r = radius;
    }

    void draw()
    {
        cout << "Circle draw" << endl;
    }

    float calculateArea()
    {
        return 3.14 * r * r;
    }
};

class Rectangle : public Shape
{
public:
    float l, w;

    Rectangle(float len, float wid)
    {
        l = len;
        w = wid;
    }

    void draw()
    {
        cout << "Rectangle draw" << endl;
    }

    float calculateArea()
    {
        return l * w;
    }
};

int main()
{
    Shape *s[2];

    s[0] = new Circle(5);
    s[1] = new Rectangle(4, 6);

    for (int i = 0; i < 2; i++)
    {
        s[i]->draw();
        cout << "Area: " << s[i]->calculateArea() << endl;
    }
}