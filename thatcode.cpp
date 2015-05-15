#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
void display(int n);
int main()
{
    int get;
    char y;
    do
    {
        cout << "Menu\n";
        cout << "1: Display good boys\n";
        cout << "2: Display bad boys\n";
        cout << "3: Display average boys\n";
        cout << "4: Quit program\n";
        cin >> get;
        cout << "\n";
        switch(get)
        {
        case 1:
            cout << "The good boys are:\n";
            display(1);
            break;
        case 2:
            cout << "The bad boys are:\n";
            display(2);
            break;
        case 3:
            cout << "The average boys are:\n";
            display(3);
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Wrong choice\n";
            break;
        }
        cout << "Do you want to see any other criteria?(Y/N)\n";
        cin >> y;
    }
    while(y=='Y' || y=='y');
    return 0;
}
void display(int n)
{
    char x;
    string name;
    ifstream read("C:/Documents and Settings/Administrator/My Documents/Data file Handling/sahil.txt");
    switch(n)
    {
    case 1:
        while(read >> name >> x)
        {
           if(x=='g')
           {
               cout << name << "\n";
           }
        }
        break;
    case 2:
        while(read >> name >> x)
        {
            if(x=='b')
            {
                cout << name << "\n";
            }
        }
        break;
    case 3:
        while(read >> name >> x)
        {
            if(x=='a')
            {
                cout << name << "\n";
            }
        }
        break;
    }
}
