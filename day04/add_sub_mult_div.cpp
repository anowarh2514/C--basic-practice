#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int first,second,add,sub,multi;
float div;

cout << "Enter two integers = ";
cin >> first >> second;

add = first + second;
sub = first - second;
multi = first * second;
div = first /(float) second;

cout << "Sum = "<<add<<"\n";
cout << "Subtract = "<<sub<<"\n";
cout << "Multiply = "<<multi<<"\n";
cout << "Division = "<<div<<"\n";

getch();
}
