#include<iostream>
using namespace std;

void fiboSeries(int n){
    int sum =0 , t1=0 , t2=1;
    for(int i=0;i<=n;i++){
        sum=t1+t2;
        t1=t2;
        t2=sum;
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    //function body
    fiboSeries(n);
}
