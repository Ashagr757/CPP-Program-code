#include<iostream>
using namespace std;
int main(){
    int r1, r2, c1,c2;
    cin>>r1>>c1;
    cin>>r2>>c2;
    if(c1!= r2){
        cout<<"multiplication is not possible"<<endl;
        return 0;
    }
    int A[10][10] ,B[10][10] , C[10][10];
    cout<<"enter the element of the matrix"<<endl;
    for(int i = 0;i<r1;i++){
        for(int j = 0;j<=c1;j++){
            cin>>A[i][j];
            cout<<A[i][j]<<endl;
        }
        
      
    }
    cout<<"enter the element of the second matrix"<<endl;
     for(int i =0;i<r2;i++){
            for(int j =0;j<=c2;j++){
                cin>>B[i][j];
                cout<<B[i][j]<<endl;
            }
        }
    
    for(int i =0;i<r1;i++){
        for(int j=0;j<c2;j++){
           C[i][j] =0;
        }
    }

    for(int i = 0;i<r1;i++){
        for(int j =0;j<c2;j++){
            for(int k =0;k<c1;k++){
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
        }

    }

    // displaying the result of these matrix multiplication
    cout<<"resultant matrix is "<<endl;
    for(int i =0;i<r1;i++){
        for(int j =0;j<c2;j++){
            cout<<C[i][j]<<endl;
        }
    }
    return 0;

}