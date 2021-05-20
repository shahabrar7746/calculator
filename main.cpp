
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    float a,b,result;//RESULT CAN BE USED INSTEAD OF THREE INT VARIBALES
    char ch;
    cout<<" Select any operation from the C++ Calculator"  
     "\n+ = Addition"  //INSTEAD OF INT VALUES FOR SWITCH STATEMENTS WE CAN USE CHARACTER AS A CASE
     "\n- = Subtraction"  
     "\n* = Multiplication"  
     "\n/ = Division"  
     
     "\n \n Make a choice: ";
    cin>>ch;
    
    switch(ch){
        case '+':
            cout<<" Enter two number:";
            cin>>a>>b;
            result=a+b;
            cout<<"The sum of "<<a<<" and "<<b<<" is "<<result;
            break;

        case '*':
            cout<<" Enter two number:";
            cin>>a>>b;
            result=a*b;
            cout<<"The product of "<<a<<" and "<<b<<" is "<<result;
            break;
        
        case '/':
            cout<<" Enter two number:";
            cin>>a>>b;
            result=a/b;
            cout<<"The division of "<<a<<" and "<<b<<" is "<<result;
            break;
        
        case '-':
            cout<<" Enter two number:";
            cin>>a>>b;
            result=a-b;
            cout<<"The difference of "<<a<<" and "<<b<<" is "<<result;
            break;
        default: cout<<"Something is wrong";
        
    }
    return 0;
}
