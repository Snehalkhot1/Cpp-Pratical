#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
        cout << "Constructor called: Rectangle created." << endl;
    }

    double area() {
        return length * breadth;
    }

    double perimeter() {
        return 2 * (length + breadth);
    }

    ~Rectangle() {
        cout << "Destructor called: Rectangle destroyed." << endl;
    }
};

int main() {
    // Create an object of Rectangle
    Rectangle rect(10.5, 5.5);

    // Call member functions
    cout << "Area of rectangle: " << rect.area() << endl;
    cout << "Perimeter of rectangle: " << rect.perimeter() << endl;

    // Destructor will be called automatically when object goes out of scope
    return 0;
}