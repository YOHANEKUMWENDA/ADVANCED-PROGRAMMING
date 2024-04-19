#include <iostream>
using namespace std;
int count= 5;

int* pcount=&count;
int main(){

cout<<"The value of count is :"<<count <<endl;
cout<<"The value of pcount is :"<<pcount <<endl;
cout<< "The value of *pcount is :"<<*pcount <<endl;



}