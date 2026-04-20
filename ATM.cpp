#include<iostream>
using namespace std;

double balance=1000;
int deposit=0;
int withdrow=0;
int passward=1234;
int choice=0;
// Show is a function to display the menu
void Show()
{
cout<<"**** Menu ****"<<endl;
cout<<"choose whwat do you want to do :"<<endl;
cout<<" 1: Balance "<<endl;;
cout<<" 2: Withddraw "<<endl;;
cout<<" 3: Deposit "<<endl;;
cout<<" 4: Exit "<<endl;
}
void Process()
{
    cout<<"Please enter your password : "<<endl;
 
 cin>>passward;
 if(passward==1234) {cout<<"OK !"<<endl;}
 else 
 {
    
 while(passward!=1234)   
    {cout<<"YOUR PASSWORD IS WRONG, PLEASE TRY AGAIN : "<<endl;
    cin>>passward;}
    cout<<"OK!"<<endl;
}
 
do{
cout<<"Choose the number of process you want to do :"<<endl;
cin>>choice;

if(choice==1){cout<<"Your balance is :"<<balance<<endl;}
else if(choice==2) {cout<<"Your balance is :"<<balance<<endl;cout<<"write a number which you want take :"<<endl;
int t;
cin>>t;
if(t<=balance)
{balance-=t;
cout<<"Now , your balance is : "<<balance<<endl;}
else {while (t>balance){ cout<<"Your balance is not enough "<<endl;cin>>t;}
balance-=t;
cout<<"Now, your balance is : "<<balance<<endl;}
}
else if(choice==3)
{
    cout<<"Enter the number which you want to depposit :"<<endl;
    int add;
    cin>>add;
    balance+=add;
    cout<<"Now, your balance is : "<<balance<<endl;
}
else if(choice==4)
{
    cout<<"We hope a good day for you !"<<endl;
}
}while(choice<4);
}
int main()
{
Show();
Process();
    return 0;
}