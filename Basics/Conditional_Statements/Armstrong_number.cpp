#include<iostream>
using namespace std;
int main(){
int number;
cout<< "Enter any 3 digit number:";
cin>> number;

int num = number;

int dig1= num %10;
num = num/10;

int dig2 = num %10;
num = num/10;

int dig3 = num %10;
num = num/10;

int cubesum = (dig1*dig1*dig1) + (dig2*dig2*dig2) + (dig3*dig3*dig3);

if (cubesum == number){
    cout<<number<<" is Armstrong Number"<<endl; 
}else{
    cout<<number<<" is Not Armstrong Number"<<endl;
}

    return 0;
}