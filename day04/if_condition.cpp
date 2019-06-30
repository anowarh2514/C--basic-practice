#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int a;
cout << "Enter the number = ";
cin >> a;
for(int i=0; i<a; i++){
if(a>5)
{
    cout << "If condition is satisfied";
    cout << "a is greater than 5 " <<endl;
    a--;
}
cout << "value of a is: " << a <<endl;
}
getch();
}
