#include <bits/stdc++.h>
using namespace std;

class Circulo
{
private:
    float radio;

public:
    int X;
    int Y;

    Circulo();
    Circulo(int x2, int y2);
    Circulo(int x2, int y2, float r);

    float getRadio();
    void setRadio(float r);
    float getArea();
    void intersects(Circulo circulo);
};

Circulo::Circulo()
{
    radio = 0.0;
    X = 0;
    Y = 0;
};

Circulo::Circulo(int x2, int y2)
{
    radio = 0.0,
    X = x2,
    Y = y2;
}

Circulo::Circulo(int x2, int y2, float r)
{
    if (r >= 0)
    {
        radio = r;
    }
    else
    {
        radio = 0;
    }
    X = x2,
    Y = y2;
}

float Circulo::getRadio()
{
    return radio;
}

void Circulo::setRadio(float r)
{
    if (r >= 0)
    {
        radio = r;
    }
    else
    {
        radio = 0;
    }
}

float Circulo::getArea()
{
    return 3.14 * pow(radio, 2);
}

void Circulo::intersects(Circulo circulo)
{
    float dist;
    dist = sqrt(pow((X - circulo.X), 2) + pow((Y - circulo.Y), 2));
    if (dist < (radio + circulo.radio))
    {
        cout << "Los circulos intersectan" << endl;
    }
    else
    {
        cout << "Los circulos no intersectan" << endl;
    }
}

int main()
{
    Circulo c1, c2(3, 9), c3(4, 5, 4);

    c1.setRadio(5);
    c1.X = 5;
    c1.Y = 3;
    c2.setRadio(5);

    cout << "Area circulo 1: " << c1.getArea() << endl;
    cout << "Area circulo 2: " << c2.getArea() << endl;
    cout << "Area circulo 3: " << c3.getArea() << endl;

    c1.intersects(c2);
    c1.intersects(c3);
    c2.intersects(c3);
    return 0;
}