#include <iostream>

using namespace std;
//first function for bmm
int bmm(int x,int y){
while(y!=0){

    int temp=y;
    y=x%y;
    x=temp;
}
return x;}
//second function for kmm
int kmm(int x , int y){
int result;
result =(x*y)/bmm(x,y);

return result;

}





int main(){
int a;
int b;

cin >>a>>b;
int res=  kmm(a,b);
cout<<res<< endl;
return 0;

}
