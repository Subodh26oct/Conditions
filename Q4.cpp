#include<iostream>
using namespace std;
int main(){
    int r,h;
    cout<<"Enter the height of cylinder :";
    cin>>h;
    cout<<"Enter the radius of cylinder :";
    cin>>r;
    float vol;
    vol= 3.14*r*r*h;
    cout<<"Volume of the cylinder is :"<<vol;
}