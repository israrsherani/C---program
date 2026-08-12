#include<iostream>
using namespace std;
int main (){
    int age;
    int marks;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your marks: ";
    cin >> marks;
    if (age >=18 && marks >=80)
    {
        cout << "you are eligible for scholarship" << endl;
    }
}