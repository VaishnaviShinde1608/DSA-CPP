#include <iostream>
using namespace std;

int main() {
int number;
cout<< "Enter any number:";
cin>> number;

if (number>0){
    cout<<"Number is Positive"<<endl;
}
else if (number < 0){
    cout<<"Number is Negative"<<endl;
}
else{
    cout<<"Number is Zero"<<endl;
}
    return 0;
}