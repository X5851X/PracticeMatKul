/*Program Mencari bilangan tertentu di dalam 
array mencari jumlah data yang ditemukan dan di elemen 
mana saja bilangan itu ditemukan*/
#include <iostream>
using namespace std;

int main() {
    int x[10] = {45,34,23,34,32,12,65,76,34,23};
    int i, bil, jumlah;
    bool ketemu=false;
    jumlah = 0;
    
    cout<<"Bilangan yang akan dicari : ";cin>>bil;
    
    for(i=0;i<10;i++){
        if (x[i]==bil){
            ketemu=true;
            cout<<"Bilangan ditemukan di elemen : "<<i<<endl;
            jumlah++;
        }
    }
    if (ketemu){
        cout<<"Jumlah data : "<<jumlah;
    }
    else
    {
        cout<<"Bilangan tersebut tidak ditemukan";
    }
}
