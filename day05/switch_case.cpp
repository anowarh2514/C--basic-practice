#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a;
cout << "Enter number from 1 to 5 :";
cin >> a;
switch(a){
case 1:
    cout << "Blue";
    break;
    case 2:
    cout << "Green";
    break;
    case 3:
    cout << "Red";
    break;
    case 4:
    cout << "White";
    break;
    case 5:
    cout << "Yellow";
    break;

    default:
        cout << "wrong input";
}
getch();
}
