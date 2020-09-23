#include <iostream>
#include <iomanip>
using namespace std;

void DisplayMenu();
float Area(float);
float Area(float, float);
float Area(double, double);

int main (){

    int choice;
    bool Flag = true;
    float result, radius, length, width, based, high;

    do {
        DisplayMenu();
        cin >> choice;

        if (choice == 1) {
            cout << "\nEnter radius : ";
            cin >> radius;
            cout << "Area of Circle = " << fixed;
            cout << setprecision(2) << Area(radius) << endl;
        } else if (choice == 2) {
            cout << "\nEnter length and width : ";
            cin >> length >> width;
            cout << "Area of length and width = " << fixed;
            cout << setprecision(2) << Area(length, width) << endl;
        } else if (choice == 3) {
            cout << "\nEnter based and high : ";
            cin >> based >> high;
            cout << "Area of based and high = " << fixed;
            cout << setprecision(2) << Area(based, high) << endl;
        } else if (choice == 4) Flag = false;
        else cout << "\nYou choose out of range is\nnot process.\n";


    } while(Flag);

    cout << "\n . . . Exit Program . . . \n";

    return 0;
}

void DisplayMenu() {
    cout << endl;
    cout << " Program Calculate Area " << endl;
    cout << "  1. Clrcle" << endl;
    cout << "  2. Rectangle" << endl;
    cout << "  3. Triangle" << endl;
    cout << "  4. Exit" << endl;
    cout << "Enter your choose number : ";
}

float Area(float radius) {
    return 3.14F * radius * radius;
}

float Area(float length, float width) {
    return length *  width;
}

float Area(double based, double high) {
    return 0.5 * based * high;
}