//find the nth term of an AP

#include<iostream>
using namespace std;

int nthTerm(int n){
    int ans = 3*n+7;
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<"nth term is "<<nthTerm(n);
}
