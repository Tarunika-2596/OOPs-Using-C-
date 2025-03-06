#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the sides";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b>c && b+a>c && a+c>b){
        cout<<"Valid Triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
}