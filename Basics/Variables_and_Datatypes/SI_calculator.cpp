#include <iostream>
using namespace std;
int main (){
int principal;
int rate;
int time;

cout<<"Enter the principal amount: ";
cin>>principal;

cout<<"Enter the rate of interest: ";       
cin>>rate;

cout<<"Enter the time: ";
cin>>time;

int SI=(principal*rate*time)/100;

cout<<"Simple Interest is: "<<SI<<endl;
    return 0;
}