#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll fexp(int a, int b){
    ll ans = 1;
    while(b){
        if(b%2) ans*=a;
        a*=a;
        b/=2;
    }
    return ans;
}

int main(){
    ll b, e;
    cin >> b >> e;
    cout << fexp(b,e);
}