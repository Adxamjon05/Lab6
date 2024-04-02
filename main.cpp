#include <iostream>
using namespace std;

int product(int num11, int num12){
    return num11*num12;
}

float acc(int v1, int v2, int t){
    return (v2-v1)/t;
}

int main() {
    cout<<"Problem 1\n";
    int num11, num12;
    cin>>num11>>num12;
    cout<<product(num11, num12)<<endl;

    cout<<"Problem 2\n";
    int v1, v2, t;
    cin>>v1>>v2>>t;
    cout<<acc(v1,v2,t)<<endl;

    
    return 0;
}
