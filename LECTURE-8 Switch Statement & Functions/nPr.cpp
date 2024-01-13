#include<iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int nPr(int n,int r){
    return fact(n)/fact(n-r);
}

int main() {
    int n,r;
    cin >> n>>r;
    cout<<"answer is : "<<nPr(n,r)<<endl;;
    
}