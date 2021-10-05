#include <iostream>

using namespace std;

int main(){

    int i,N,batas=10,jumlah;

    cout<<"Masukkan Bilangan yang akan dikalikan : ";

    cin>>N;

    cout<<"Hasil Perkalian :"<<endl;

    for(i=1;i<=batas;i++)

    {
    jumlah=i*N;

    cout<<i<<"*"<<N<<"="<<jumlah<<endl;

    }

 return 0;

}
