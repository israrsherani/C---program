#include<iostream>
using namespace std;
int main (){
    string name;
    int age;
    int mark1;
    int mark2;
    int mark3;
    int total;
    double average;
    cout << "enter your name:";
    cin >> name;
    cout << "enter your age:";
    cin >> age;
    cout <<"enter your mark 1:";
    cin >> mark1;
    cout <<"enter mark 2:";
    cin >> mark2;
    cout <<"enter mark 3:";
    cin >> mark3;
    total = mark1 + mark2 + mark3;
    average = total / 3.0;
    cout << "your name is:" << name << endl;
    cout << "yourage is:" << age << endl;
    cout <<"your total marks are:" << total << endl;
    cout <<"your average marks are:" << average << endl;
    return 0;

}
