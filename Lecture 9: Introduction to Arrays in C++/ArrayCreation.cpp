#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    //print the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}

int main(){
    //declare an array
    int number[15];
    //access the number
    cout<<"value at 3 index:"<<number[3]<<endl;

    //initialise an array
    int second[3]={5,7,11};
    //access an element
    cout<<"value at 2 index:"<<second[2]<<endl;

    int n=15;
    int third[15]={2,7};
    printArray(third,15);

    int m=10;
    int fourth[10]={0};
    printArray(fourth,10);
   

    //initializing all location with 1
    // int fourth[10]={1};// not possible

    // size of array means memory occupancy of array
    int thirdSize=sizeof(third)/sizeof(int);
    cout<<"size of third is "<<thirdSize<<endl;

    int fourthSize=sizeof(fourth)/sizeof(int);
    cout<<"size of fourth is "<<fourthSize<<endl;

    // character array
    char ch[5]={'a','b','c','d','e'};
    cout<<ch[3]<<endl;

    return 0;
}