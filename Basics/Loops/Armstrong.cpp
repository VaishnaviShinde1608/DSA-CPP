#include <iostream>
using namespace std;
int main(){
int n=371;
int num = n;
int cubeSum=0;

while(num > 0){
int lastDig = num % 10;
cubeSum += lastDig * lastDig * lastDig;
num /= 10;
}

if (cubeSum == n){
    cout<<n<<" is Armstrong Number";
}
else{
    cout<<n<<" is Not Armstrong Number";
}
    return 0;
}