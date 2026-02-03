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
        Rectangle(){
            cout << "Created Object using default constructor, count = " << ++count << endl;
        }

        Rectangle(float length, float width){
            cout << "Created Object, count = " << ++count << "\n";
            this->length = length;
            this->width = width;
        }

        Rectangle(const Rectangle &r){
            cout << "Created Object using copy constructor, count = " << ++count << "\n";
            length = r.length;
            width = r.width;
            area = r.area;
            perimeter = r.perimeter;
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
    cout << "Area is " << area << "\n\n";
}

void Rectangle::getPerimeter(){
    perimeter = 2 * length + 2 * width;
    cout << "Perimeter is " << perimeter << "\n\n";
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
    cout << "\nArea is " << area << "\n";
}

void Circle::getCircumference(){
    circumference = 2 * 3.14 * radius;
    cout << "Circumference is " << circumference << "\n";
}

int main(){
    cout << "Hello World\n";

    cout << "Enter length and width: ";
    float w, l;
    cin >> w >> l;

    cout << "Enter radius: ";
    float r;
    cin >> r;

    Rectangle r1(w, l);
    Rectangle r2;
    Rectangle r3(r1);
    r1.getArea();
    r3.getPerimeter();

    Circle c(r);
    c.getArea();
    c.getCircumference();

    return(0);
}
