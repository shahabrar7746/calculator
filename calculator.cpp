#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    float a,b,sum,mult,div,sub;
    int ch;
    cout<<" Select any operation from the C++ Calculator"  
     "\n1 = Addition"  
     "\n2 = Subtraction"  
     "\n3 = Multiplication"  
     "\n4 = Division"  
     "\n5 = Square"  
     "\n6 = Square Root"  
     "\n7 = Exit"  
     "\n \n Make a choice: ";
    cin>>ch;
    
    switch(ch){
        case 1:
            cout<<" Enter two number:";
            cin>>a>>b;
            sum=a+b;
            cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum;
            break;

        case 2:
            cout<<" Enter two number:";
            cin>>a>>b;
            mult=a*b;
            cout<<"The product of "<<a<<" and "<<b<<" is "<<mult;
            break;
        
        case 3:
            cout<<" Enter two number:";
            cin>>a>>b;
            div=a/b;
            cout<<"The division of "<<a<<" and "<<b<<" is "<<div;
            break;
        
        case 4:
            cout<<" Enter two number:";
            cin>>a>>b;
            sub=a-b;
            cout<<"The difference of "<<a<<" and "<<b<<" is "<<sub;
            break;
        default: cout<<"Something is wrong";
        
    }
    return 0;
}