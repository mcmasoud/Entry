#include <iostream>

using namespace std;

int main()
{float a,b,res;
int choose;
cout <<"1.sum\n";
cout <<"2.menha\n";
cout <<"3.zarb\n";
cout <<"4.divisoin\n";
cout <<"5.exit\n";
cout <<"what is your request?";
cin >>choose;
while (choose==5){
cout<<"goodbye."<< endl;
break;}
cin >>a>>b;
while (choose==1){
 res=a+b;
cout<<res<< endl;
break;}
while (choose==2){
res=a-b;
cout<<res<< endl;
break;}
while (choose==3){
res=a*b;
cout<<res<< endl;
break;}
while (choose==4){
res=a/b;
if (b=0){
    cout <<"error";}
    else{
cout<<res<< endl;}
break;}



    return 0;}
