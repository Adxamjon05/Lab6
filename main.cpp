#include <iostream>
#include <math.h>
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

int gcd(int num71, int num72){
    int div=1;
    if (num71>num72){
        div=num72;
    } else{
        div=num71;
    }
    while (div>1 and not (num71%div==0 and num72%div==0)){
        div--;

    };
    return div;
}

int max(int num81, int num82, int num83){
    if (num81>num82 and num81>num83){
        return num81;
    } else if(num82>num83){
        return num82;
    } else{
        return num83;
    };
}

int min(int num81, int num82, int num83){
    if (num81<num82 and num81<num83){
        return num81;
    } else if(num82<num83){
        return num82;
    } else{
        return num83;
    };
}

float sum(float num91, float num92){
    return num91+num92;
}
float subtract(float num91, int num92){
    return num91-num92;
}
float product(float num91, float num92){
    return num91*num92;
}
float division(float num91, float num92){
    return num91/num92;
};

int getTriangularNumber(int n){
    return (n*(n+1))/2;
}


void displayEven(int num111){
    int numn=0;
    while (num111>0){
        numn=numn*10+num111%10;
        num111=int(num111/10);
    }
    while (numn>0){
        if ((numn%10)%2==0 and numn>10){
            cout<<numn%10<<" ";
        } else if( (numn%10)%2==0){
            cout<<numn%10<<endl;
        }
        numn=int(numn/10);
    }
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

    cout<<"Problem 7\n";
    int num71, num72;
    cin>>num71>>num72;
    cout<<gcd(num71, num72)<<endl;

    cout<<"Problem 8\n";
    int num81, num82, num83;
    cin>>num81>>num82>>num83;
    cout<<"Maximum: "<<max(num81, num82, num83)<<endl;
    cout<<"Minimum: "<<min(num81, num82, num83)<<endl;

    cout<<"Problem 9\n";
    float num91, num92;
    cin>>num91>>num92;
    cout<<"Sum is: "<<sum(num91, num92)<<endl;
    cout<<"Subtract is: "<<subtract(num91, num92)<<endl;
    cout<<"Product is: "<<product(num91, num92)<<endl;
    cout<<"Division is: "<<division(num91, num92)<<endl;

    cout<<"Problem 10\n";
    int n=1;
    for (int counter=1; counter<=75; counter++){
        n=getTriangularNumber(counter);
        if (counter%5==0){
            cout<<n<<endl;
        } else{
            cout<<n<<" ";
        }
    }

    cout<<"Problem 11\n";
    int num111;
    cin>>num111;
    displayEven(num111);


    

    

    








    return 0;
}
