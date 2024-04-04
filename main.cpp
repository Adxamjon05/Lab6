#include <iostream>
#include <cmath>
#include <random>
#include <iomanip>
#include <string>
#include <ctime>
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

int cubeOfDigits(int number12){
    int sum12=0;
    while (number12>0){
        sum12+=pow(number12%10, 3);
        number12=int(number12/10);
    }
    return sum12;
}
void isArmstrong(int sum12, int number12){
    if (sum12==number12){
        cout<<"The number is Armstrong"<<endl;
    } else{
        cout<<"Not an Armstrong number"<<endl;
    }
}

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years14){
    return investmentAmount*pow(1+monthlyInterestRate/100, years14*12);
}

void printASCII(char ch1, char ch2, int numberPerLine){
    int start15=int(ch1);
    int final15=int(ch2);
    int counter=1;
    while (start15<=final15){
        if (counter%numberPerLine==0){
            cout<<char(start15)<<endl;
        } else{
            cout<<char(start15)<<' ';
        }
        start15++;
        counter++;
    }
}


void printMatrix(int n16){
    int ch16=n16;
    for (int c16=0; c16<n16; c16++){
        for (int c162=0; c162<ch16; c162++){
            cout<<rand()%1000<<" ";
        }
        cout<<endl;
    }
}


bool isPalindrome(int n17){
    int rev=0;
    int ori=n17;
    while (n17>0){
        rev=rev*10+(n17%10);
        n17=int(n17/10);
    }
    return ori==rev;
}


double pi=3.1415;
double e=2.7182;

double seriesA(int n){
    double sum=0;
    int i=1;
    while (i<=n){
        sum=sum+pi*pow(2, (-1)*i);
        i+=1;
    }
    return sum;
}

double seriesB(int n){
    double pro=1;
    int i=1;
    while (i<=n){
        pro*=(pi/2)*pow(i, e);
        i++;
    }
    return pro;
}

double seriesC(int n){
    double sum=0;
    int i=1;
    while (i<=n){
        sum+=(pow(-2,i))/(2*pi+i);
        i++;
    }
    return sum;
}

double seriesD(int n){
    double sum=0;
    int i=1;
    while (i<=n){
        sum+=2*i*pi/(pow(e, i));
        i++;
    }
    return sqrt(sum);
}


void displaySordetedNumber(double a, double b, double c){
    if (a>b and a>c){
        if (b>c){
            cout<<c<<" "<<b<<" "<<a<<endl;
        } else{
            cout<<b<<" "<<c<<" "<<a<<endl;
        }
    } else if (b>c){
        if (a>c){
            cout<<c<<" "<<a<<" "<<b<<endl;
        } else{
            cout<<a<<" "<<c<<" "<<b<<endl;
        }
    } else{
        if (a>b){
            cout<<b<<" "<<a<<" "<<c<<endl;
        } else{
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
}


string convertMillis(long millis){
    int seconds, minutes, hours;
    hours=millis/3600000;
    if (hours>=1){
        millis=millis%3600000;
    }
    minutes=millis/60000;
    if (minutes>=1){
        millis=millis%60000;
    }
    seconds=millis/1000;
    string hour= to_string(hours);
    string minute= to_string(minutes);
    string second= to_string(seconds);

    return hour+":"+minute+":"+second;
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


    cout<<"Problem 12\n";
    int number12;
    cin>>number12;
    isArmstrong(cubeOfDigits(number12), number12);

    cout<<"Problem 14\n";
     double investmentAmount, monthlyInterestRate;
     cin>>investmentAmount>>monthlyInterestRate;
     for (int c14=1; c14<31; c14++){
         cout<<"The future value for year "<<c14<<" is: "<<futureInvestmentValue(investmentAmount, monthlyInterestRate, c14)<<endl;
     }

    cout<<"Problem 15\n";
    printASCII('a', 'm', 6);


    cout<<"Problem 16\n";
    int n16;
    cin>>n16;
    printMatrix(n16);

    cout<<"Problem 17\n";
    int c17=0;
    int n17=2;
    while (c17<50){
        if (isPalindrome(n17) and n17%2==0){
            if ((c17+1)%5==0){
                cout<<setw(5)<<n17<<endl;
            } else{
                cout<<setw(5)<<n17<<" ";
            }
            c17++;
        }
        n17++;
    }


    cout<<"Problem 19\n";
    double a19, b19, c19;
    cin>>a19>>b19>>c19;
    displaySordetedNumber(a19, b19, c19);


    cout<<"Problem 20\n";
    long millis=0;
    cin>>millis;
    cout<<convertMillis(millis)<<endl;

    cout<<"Problem 21\n";
    int ctime=time(0);
    int days=ctime/86400;
    int year21=1970;
    while (days>365){
        if (days-365>0){
            year21+=1;
        }
        if (year21%4==1){
            days-=1;
        };
        days-=365;
    }

    string month21="January";
    if (days-31>0){
        month21="February";
        days=days-31;
        if (days-28>0){
            month21="March";
            days-=28;
            if (days-31>0){
                month21="April";
                days-=31;
                if (days-30>0){
                    month21="May";
                    days-=30;
                    if(days-31>0){
                        month21="June";
                        days-=31;
                        if (days-30>0){
                            month21="July";
                            days-=30;
                            if (days-31>0){
                                month21="August";
                                days-=31;
                                if (days-31>0){
                                    month21="September";
                                    days-=31;
                                    if(days-30>0){
                                        month21="October";
                                        days-=30;
                                        if(days-31){
                                            month21="November";
                                            days-=31;
                                            if(days-30>0){
                                                month21="December";
                                                days-=30;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    int seconds21=ctime%86400;
    int hours21=seconds21/3600;
    seconds21=seconds21%3600;
    int minutes21=seconds21/60;
    seconds21=seconds21%60;
    cout<<"Current date and time is "<<month21<<" "<<days<<", "<<year21<<" "<<hours21+5<<":"<<minutes21<<":"<<seconds21<<endl;


    


    


    


    
    

    

    

    


    

    

    








    return 0;
}
