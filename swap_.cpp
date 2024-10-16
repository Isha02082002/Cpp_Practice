//write a swap two no.btw each other ???
#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter the value a and b"<<endl;
    cin>>a;
        cin>>b;
    cout<<"before swapping a "<<a<<"b :"<<b<<endl;
//    using third variable
// temp=a;
// a=b;
// b=temp;
//      without  using third variable

     a=a+b;//13+12=25
     b=a-b;//25-12=13
     a=a-b;//25-13;
    cout<<"after  swapping a "<<a<<"b :"<<b;

}