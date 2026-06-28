#include<iostream>
#include<cmath>
using namespace std;
int getSecondlastdigit(int n){
if(abs(n)<10)return 0;
return (abs(n)/10)%10;
}




int main(){
    int n;
    cin>>n;
    cout<<"secon last digit"<<getSecondlastdigit(n)<<endl;
    return 0;
}