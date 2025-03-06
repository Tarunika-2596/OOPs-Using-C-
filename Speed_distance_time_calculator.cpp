#include<iostream>
using namespace std;
int main(){
    int speed=0,distance=0,time=0;
    cout<<"------------if input is not known enter 0-------------"<<endl;
    cout<<"Enter the speed:";
    cin>>speed;
    cout<<"Enter the distance:";
    cin>>distance;
    cout<<"Enter the time:";
    cin>>time;
    if(speed!=0 && distance!=0){
        cout<<"Time:"<<distance/speed;
    }
    else if(speed!=0 && time!=0){
        cout<<"Distance:"<<speed*time;
    }
    else if(distance!=0 && time!=0){
        cout<<"Speed:"<<distance/time;
    }
    else{
        cout<<"Invalid input";
    }
    return 0;
}