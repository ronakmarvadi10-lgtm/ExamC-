#include <iostream>
using namespace std;

class Vehicle
{
private:
    string model;
    float speed;

public:
    void setData(string m, float s)
    {
        model = m;
        speed = s;
    }

    string getModel()
    {
        return model;
    }

    float getSpeed()
    {
        return speed;
    }
};

class Car : public Vehicle
{
public:
    void calculateTime(float distance)
    {
        float time = distance / getSpeed();
        cout << "Car Time: " << time << " hours" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void calculateTime(float distance)
    {
        float time = distance / getSpeed();
        cout << "Bike Time: " << time << " hours" << endl;
    }
};

int main()
{
    Car c;
    Bike b;
    float distance;

    c.setData("Swift", 80);
    b.setData("Pulsar", 60);

    cout << "Enter Distance: ";
    cin >> distance;

    c.calculateTime(distance);
    b.calculateTime(distance);

}