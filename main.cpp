#include <iostream>
using namespace std;

int product(int num1, int num2){
    return num1*num2;
}

int main() {
    int num1, num2;
    cin>>num1>>num2;
    cout<<product(num1, num2)<<endl;
    return 0;
}
