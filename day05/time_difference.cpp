#include<iostream>
#include<ctime>
using namespace std;
int main(){
int a,s;
time_t t1,t2;
time(&t1);
cout << "Enter any integer :";
cin >> a;
cout <<"\n";
time(&t2);
s = (int) difftime(t2,t1);
cout << "Difference time "<< s << " seconds " << endl;
}
