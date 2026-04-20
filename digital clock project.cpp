#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    //this code shows the current time in 24 system//
    // variables
int houres=0;int miniutes=0;int second=0; 
// The continuoty is the secret of success//
cout<<"Lets enter the current time :"<<endl;
cout<<"Please enter the time in Houres now : ";
cin>>houres;
cout<<endl;
cout<<"Please enter the time in Miniutes now : ";
cin>>miniutes;
cout<<endl;
cout<<"Please enter the time in Seconds now : ";
cin>>second;
cout<<endl;

while(true)
{
    system("cls");
if(second>59)
{
miniutes++;
second=0;
}
if(miniutes>59)
{
    houres++;
    miniutes=0;
}
if(houres>23)
{
    houres=0;
}
cout<<houres<<":"<<miniutes<<":"<<second<<endl;
second++;
Sleep(1000);
}
    return 0;
}