#include <bits/stdc++.h>

using namespace std;
struct BankingAccount
{
    char AccountName[100];
    long long balance;
    long long deposite,withdraw;


};

int main()
{
    BankingAccount ac;
    int choice;
    long long amount;//float amount does not exist//

    cout<<"Please Enter your exact account name:";
    cin>>ac.AccountName;

     ac.balance=0;//initially//
     while(1)
     {
         cout<<"\n....Simple Banking system....\n";
         cout<<"1.Deposite amount\n";
         cout<<"2.Withdraw amount\n";
         cout<<"3.Check balance\n";
         cout<<"4.Exit\n";

         cout<<"Enter your choice:";
         cin>>choice;

         //execute the main system

         if(choice==1)
         {
             cout<<"Enter amount to deposite:";
             cin>> amount;
             ac.balance=ac.balance+amount;
             cout<<"Deposite successfully!\n";
         }
         else if(choice==2)
         {
             cout<<"Enter amount to withdraw:";
             cin>> amount;
             if(amount<=ac.balance){
             ac.balance=ac.balance-amount;
             cout<<"withdraw successfull!\n";
         }
         else{
             cout<<"Insufficient balance!\n";
         }
     }
     else if(choice==3)
     {
         cout<<"Account Holder:"<<ac.AccountName<<endl;
         cout<<"Current Balance:"<<ac.balance<<endl;
     }
     else if(choice==4)
     {
         cout<<"Thank you for using our system!"<<endl;
         break;
     }
     else{
        cout<<"Invalid choice! please press right keyword or try again";
     }

}
return 0;
}
