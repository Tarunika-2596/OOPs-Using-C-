#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a value:";
    int a;
    cin>>a;
    cout<<"Enter b value:";
    int b;
    cin>>b;
    int op;
    cout<<"enter operation to be done:";
    cin>>op;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Exit"<<endl;
    switch(op){
        case 1:
        cout<<"Addition:"<<a+b;
        break;
        case 2:
        cout<<"Subtraction:"<<a-b;
        break;
        case 3:
        cout<<"Multiplication:"<<a*b;
        break;
        case 4:
        cout<<"Division:",a/b;
        break;
        case 5:
        break;
        default:
        cout<<"Invalid operation";

    }
    return 0;
}