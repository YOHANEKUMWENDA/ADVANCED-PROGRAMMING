#include <iostream>
using namespace std;
int count = 5;
int read = 6;
int* py=&read;
int* px=py;

int* p1, p2;


int main(){
cout<<"The value of count is: "<< count << endl;
cout<<"The value of px is: "<<px << endl;
cout<<"The value of py is: "<<py << endl;
cout<<"The value of *px is: "<<*px <<endl;
cout<<"The value of *py is: "<<*py <<endl;
cout<<"The value of p1 is : "<<p1 <<endl;
cout<<"The value of p2 is : "<<p2 <<endl;
cout<<"THe value of *p1 is :"<<*p1 <<endl;



}