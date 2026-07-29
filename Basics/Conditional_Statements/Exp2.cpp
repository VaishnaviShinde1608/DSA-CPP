#include <iostream>
using namespace std;
int main(){
    int a=5;
    if(++a*5<=25){
        cout<<"Hello\n";
        cout<<"a="<<a<<endl;
    }else{
        cout<<"Bye\n";
        cout<<"a="<<a<<endl;
    }
    return 0;
}