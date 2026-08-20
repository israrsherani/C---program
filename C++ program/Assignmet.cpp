#include <iostream>
using namespace std;
void patteren1(){
    for (int i = 1; i <= 5; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }
    
}

// VOID PATTEREN 2

void patteren2(){
    for (int i = 1; i <= 5; i++)
    {
        /* code */
        for (int j = 1; j <= 5 - i; j++)
        {
            /* code */
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }
}

//Void patteren 3

void patteren3 (){
    for (int i = 5; i >= 1; i--)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << "* ";
        }
        cout << endl;
    }
    
}

//void patteren 4

void patteren4(){
    for (int i = 5; i >= 1; i--)
    {
        /* code */
        for (int j = 1; j <= 5 - i; j++)
        {
            /* code */
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << "* ";
        }
        cout << endl;
    }
    
}

//Function 5 All patterens

void allpatterens(){
    patteren1();
    cout << endl;
    patteren2();
    cout << endl;
    patteren3();
    cout << endl;
    patteren4();
    cout << endl;
}

int main(){
    int choice;
    do
    {
        /* code */
        cout << "///////-------- patteren menu ---------////////";
        cout << "1: Left triangle: " << endl;
        cout << "2: Right triangle: " << endl;
        cout << "3: Inverted left triangle: " << endl;
        cout << "4: Inverted Right triangle: " << endl;
        cout << "5: All triangles: " << endl;
        cout << "6: EXIT " << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    if (choice == 1)
    {
        /* code */
        patteren1();
    }
    else if (choice == 2)
    {
        /* code */
        patteren2();
    }
    else if (choice == 3)
    {
        /* code */
        patteren3();
    }
    else if (choice == 4)
    {
        /* code */
        patteren4();
    }
    else if (choice == 5)
    {
        /* code */
        allpatterens();
    }
    else if (choice == 6)
    {
        /* code */
        cout << "Program ended!";
    }
    
    } while (choice != 6);
    
}