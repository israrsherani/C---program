#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    double height;
    char grade;
    cout << "enter your name:";
    cin >> name;
    cout <<"enter your age: ";
    cin >> age;
    cout << "enter your height:";
    cin >>height;
    cout <<"enter your grade:";
    cin >> grade;
    cout << "your name is:" << name <<endl;
    cout << "your age is:" << age << endl;
    cout <<"your height is:" << height << "cm" << endl;
    cout <<"your grade is:" << grade << endl;
    return 0;
}