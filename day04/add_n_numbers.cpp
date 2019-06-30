#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n, value,sum = 0;
cout << "Enter the number of integers you want to add = ";
cin >> n;

cout << "Enter " << n << "  integers " << "\n";

for(int c = 1; c<= n; c++){
    cin >> value;
    sum = sum + value;
}
cout << "Sum of entered integers = " << sum << "\n";
getch();
}
