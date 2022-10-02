//Program Login sederhana
#include <iostream>
using namespace std;
   
     int main(){
     
        int password=123;
     
        cout<<"Masukkan passowrd :" ;
        cin>>password;
     
        if(password == 123){
            cout<<"-------------------------------"<<endl;
            cout<<"=  Selamat Datang di Dunia Tipu-Tipu  ="<<endl;
            cout<<"-------------------------------"<<endl;
         
         
         }else{
         
            cout<<"----------------------------------"<<endl;
            cout<<"= Mohon maaf password anda salah ="<<endl;
            cout<<"----------------------------------"<<endl;
         }
     }