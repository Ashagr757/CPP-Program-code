// return the last digit of a number 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int ld;
    cin>>n;
    if(n<=0){
        cout<<"0"<<endl;
    }
    else{
        ld = n%10;
        cout<<ld<<endl;
    }
    return 0;

}