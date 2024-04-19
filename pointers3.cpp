#include <iostream>
using namespace std;
int main(){
double x = 3.5;
double* p1 = &x;
double y = 4.5;
double* p2 = &y;
cout << *p1 + *p2 << endl;

}