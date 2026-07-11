#include<iostream>
using namespace std;
int main(){
    int a=8,b=9;
    cout<<"these are the following types of operators\n";
    //arithmetic operators:-
    cout<<"the value of a+b is:"<<a+b<<endl;
    cout<<"the value of a-b is:"<<a-b<<endl;

    //assignment operators:-
    // int a=3,b=4;
    //char f ='f';

    // comparerison operators:-
    cout<<"the value of a == b is:"<<(a==b)<<endl;
    cout<<"the value of a <= b is:"<<(a<=b);
 
    //logical operators:-
    cout<<"the value of this logical or operator ((a==b) or (a=>b)) is:"<<((a==b) or (a<=b));





    return 0;
}