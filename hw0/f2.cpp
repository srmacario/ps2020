#include<bits/stdc++.h>
 
using namespace std;

int M[2005][2005];

int main(){
 
    int a, i, j;
 
    cin >> a;
 
    for(i=0, j=0;j<=2*a-2, i<=2*a-2;j++){
 
        if(i<=a-1){
            if(i==0){
                M[i][j] = a;
                if(j!=2*a-2){
                    cout << M[i][j] << " ";
                }else{
                    cout << M[i][j] << endl;
                }
            }else if(j<=i-1){
                M[i][j] = a-j;
 
                cout << M[i][j] << " ";
            }else if(i<=j and j<=2*a-2-i){
                M[i][j] = a-i;
 
                cout << M[i][j] << " ";
            }else{
                M[i][j] = j-2;
                if(j!=2*a-2){
                    cout << M[i][j] << " ";
                }else{
                    cout << M[i][j] << endl;
                }
            }
        }else{
                if(i==2*a-2){
                    M[i][j] = a;
                    if(j!=2*a-2){
                        cout << M[i][j] << " ";
                    }else{
                        cout << M[i][j] << endl;
                    }
                }else if(j<=2*a-2-i){
                    M[i][j] = a-j;
 
                    cout << M[i][j] << " ";
                }else if(2*a-2-i<j and j<=i){
                    M[i][j] = i+2-a;
 
                    cout << M[i][j] << " ";
                }else{
                    M[i][j] = j+2-a;
                    if(j!=2*a-2){
                        cout << M[i][j] << " ";
                    }else{
                        cout << M[i][j] << endl;
                    }
                }
        }
 
        if(j==2*a-2){
            i++;
            j=0;
        }
   }
 
    return 0;
}