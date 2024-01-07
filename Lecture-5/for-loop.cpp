// print the natural number from 0 to n

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"printing count from 1 to n"<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<endl;
    }

    // we also write like that
    // int i=1;
    // for(;;){
    //     if (i<=n){
    //         cout<<i<<endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++; 
    // }
}