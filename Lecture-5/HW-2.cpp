#include <iostream>
using namespace std;
int main(){
    int a;
    int b=2;
    if(a-- >0 && ++b >2){
        cout<<"Stage1- Inside If ";
    }
    else{
        cout<<"Stage2- Inside else ";
    }
    cout <<a << " " << b << endl;
}