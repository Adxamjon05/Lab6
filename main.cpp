#include <iostream>
using namespace std;

int product(int num11, int num12){
    return num11*num12;
}

int main() {
    cout<<"Problem 1\n";
    int num11, num12;
    cin>>num11>>num12;
    cout<<product(num11, num12)<<endl;
    return 0;
}
