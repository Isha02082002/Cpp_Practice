/*note--->
typecasting--- to convert one data type to another ,either by programmer itselg or by compiler...
explicit-->programmer or user;
implicit--->compiler(itself) and automatic;
AScII-->American standard code for information interchange...it is a standard code or universal code that follows all language*/

#include<iostream>
using namespace  std;
int main()
{
    int a=10;
    int b=3;
    cout<<(float)a/b<<endl;//explicit
    cout<<a/7.0<<endl;
    cout<<'a'+1<<endl;  //implicit
    cout<<a%b<<endl;//remainder -->1   

    cout<<b%a<<endl;//if numrator is less than our ans is numerator--->3
}



