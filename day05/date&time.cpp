#include<iostream>
#include<ctime>

using namespace std;
int main(){
time_t s = time(0);
char* j = ctime(&s);

cout << "Date and Time is : " << j << endl;
}
