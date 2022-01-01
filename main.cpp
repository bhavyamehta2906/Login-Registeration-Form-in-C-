#include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;

bool IsloggedIN(){
    string user,pass,u,p;
    cout<<"ENter username:";
    cin>>user;
    cout<<"Enter Password:";
    cin>>pass;
    
    ifstream read("E:" + user + ".txt");
    getline(read,u);
    getline(read,p);

    if(u==user && p==pass){
        return true;
    }else{
        return false;
    }
}

int main(){
    // BHAVYA MEHTA 
    int choice;
    cout<<"1. LogIn"<<endl;
    cout<<"2. Register"<<endl;
    cout<<"Your Choice (1 or 2) ?"<<endl;
    cin>>choice;
    if(choice==2){
        string user,pass;
        cout<<"Enter username:";
        cin>>user;
        cout<<"Enter password:";
        cin>>pass;

        ofstream file;
        file.open("E:" + user + ".txt");
        file<<user<<endl<<pass;
        file.close();

        main();
    }else if(choice==1){
        bool status=IsloggedIN();
        if(!status){
            cout<<"False Login"<<endl;
            system("PAUSE");
            return 0;
        }else{
            cout<<"Succesfully Login"<<endl;
            system("PAUSE");
            return 1;
        }
    }
}
