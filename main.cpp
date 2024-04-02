#include <iostream>
using namespace std;

int product(int num11, int num12){
    return num11*num12;
}

float acc(int v1, int v2, int t){
    return (v2-v1)/t;
}

void fun(float radius){
    cout<<"The circumference is "<<2*3.1416*radius<<endl;
    cout<<"The area is "<< 3.1416*pow(radius, 2);

}

void fun4(float a4, float b4){
    cout<<"The perimeter is "<<2*(a4+b4)<<endl;
    cout<<"The area is "<< a4*b4;

}

void swap(int& num51, int& num52){
    num51=num51+num52;
    num52=num51-num52;
    num51=num51-num52;

}

int Factorial(int num61){
    int tot=1;
    while (num61>1){
        tot*=num61;
        num61--;
    }
    return tot;
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

    cout<<"Problem 3\n";
    float radius;
    cin>>radius;
    fun(radius);

    cout<<"Problem 4\n";
    float a4,b4;
    cin>>a4>>b4;
    fun4(a4, b4);

    cout<<"Problem 5\n";
    int num51, num52;
    cin>>num51>>num52;
    swap(num51, num52);

    cout<<"Problem 6\n";
    string num61;
    cin>>num61;
    int num62;
    if (num61==""){
        cout<<Factorial(1)<<endl;

    } else{
        num62=stoi(num61);
        cout<<Factorial(num62)<<endl;
    }

    

    

    

    
    return 0;
}
