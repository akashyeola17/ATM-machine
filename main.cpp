#include<iostream>
using namespace std;
int main()
{
    char selection{};
    long long int balance{};
    do{
            cout<<"\n----------Please select from the following menu---------------"<<endl;
            cout<<"1.Cash deposit"<<endl;
            cout<<"2.Cash Withdrawl "<<endl;
            cout<<"3.Balance enquiry "<<endl;
            cout<<"4.quit "<<endl;
            cout<<"\nPlease Enter your option: "<<endl;
            cin>>selection;

            if(selection == '1'){
                 long long  int cash_deposit{};
                cout<<"Enter amount to be credited: "<<endl;
                cin>>cash_deposit;
                cout<<cash_deposit<<" Deposited "<<endl;
                balance += cash_deposit;
                cout<<"\navailable balance is: "<<balance<<endl;
            }else if(selection == '2'){
               long long int cash_withdrawl{};
                cout<<"Enter amount to be debited: "<<endl;
                cin>> cash_withdrawl;
                if(balance < cash_withdrawl){
                    cout<<"\n!!!!!Insufficient balance!!!!! "<<endl;
                }else{
                    cout<<cash_withdrawl<<" debited "<<endl;
                    balance -= cash_withdrawl;
                    cout<<"Available balance is: "<< balance<<endl;
                }
            }else if(selection == '3'){
                cout<<"The Current balance is: "<<balance<<endl;
            }else if(selection == '4'){
                cout<<"We hope you like our service --- Visit again "<<"Thank you!!! "<<endl;

            }else{
                cout<<"Please select proper option"<<endl;
            }

    }while(selection !='4' && selection != '4' );


}
