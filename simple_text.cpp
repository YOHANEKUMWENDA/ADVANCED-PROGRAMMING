#include <iostream>
#include <fstream>
using namespace std;
int main(){
ofstream myfile;
myfile.open("simplefile.txt", ios::out | ios::app);
if(!myfile.is_open())
cout<<"The file failed to open !!" <<endl;
myfile<<"Write to the file...!!\n";

}