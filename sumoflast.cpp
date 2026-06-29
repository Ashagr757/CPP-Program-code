#include<iostream>
#include<cmath>
using namespace std;

int sumoflastdigit(int N,int M){
    int lastdig1, lastdig2;
    int sum=0;
    lastdig1 = N%10;
    lastdig2 = M%10;

    cout<<lastdig1<<lastdig2<<endl;
    sum = lastdig1+lastdig2;
    cout<<sum<<endl;


}
int main(){
    int N,M;
    cin>>N>>M;
    cout<<M<<N<<endl;
    return sumoflastdigit(N,M);
}
