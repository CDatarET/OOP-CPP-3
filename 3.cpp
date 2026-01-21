#include <iostream>
using namespace std;

/*
  Authored by Chaitanya Datar
  1262242226
  8F
*/

class Rectangle{
    static int count;

    private:
        float length;
        float width;
        float area;
        float perimeter;
    
    public:
        Rectangle(float length, float width){
            cout << "Created Object, count = " << ++count << "\n";
            this->length = length;
            this->width = width;
        }

        void getArea();
        void getPerimeter();

        ~Rectangle(){
            cout << "Destroyed Object, count = " << --count << "\n";
        }
};
int Rectangle::count = 0;

void Rectangle::getArea(){
    area = length * width;
    cout << "Area is " << area << "\n";
}

void Rectangle::getPerimeter(){
    perimeter = 2 * length + 2 * width;
    cout << "Perimeter is " << perimeter << "\n";
}

class Circle{
    static int count;

    private:
        float radius;
        float area;
        float circumference;

    public:
        Circle(float radius){
            cout << "Created Object, count = " << ++count << "\n";
            this->radius = radius;
        }

        void getArea();
        void getCircumference();

        ~Circle(){
            cout << "Destroyed Object, count = " << --count << "\n";
        }
};
int Circle::count = 0;

void Circle::getArea(){
    area = 3.14 * radius * radius;
    cout << "Area is " << area << "\n";
}

void Circle::getCircumference(){
    circumference = 2 * 3.14 * radius;
    cout << "Perimeter is " << circumference << "\n";
}

int main(){
    cout << "Hello World\n";
    Rectangle r1(3.14, 2.72);
    Rectangle r2(2.2, 4.4);

    Circle c1(7);

    return(0);
}
