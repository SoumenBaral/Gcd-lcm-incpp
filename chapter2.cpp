#include<iostream>
using namespace std;

class findGL{
    int a,b,x,y,r,gcd,lcm ;

public:
    void input();
    void work();
    void output();

};
 void findGL::input()
 {
     cout<<" Enter two value: ";
     cin>>x>>y;
 }
 //4 8
 void findGL::work()
 {
     a=x;
     b=y;
     while(a%b!=0){
        r=a%b;
        a=b;
        b=r;
     }
     gcd =b;
     lcm = (x*y)/gcd;

 }
 void findGL::output()
 {
     cout<<"GCD of "<<x <<" and "<<y <<" is = "<<gcd<<endl;
     cout<<"LCM of "<<x <<" and "<<y <<" is = "<<lcm;
 }
 int main(){
 findGL d;
 d.input();
 d.work();
 d.output();
 return 0;
 }
