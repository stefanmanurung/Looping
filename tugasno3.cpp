#include <iostream>

using namespace std;

int main(){
    int i, angka, jumlah, max, min;
        cout << "Mencari Nilai max dan min" << endl;
        cout << "Masukkan jumlah angka: " << endl;
        cin >> jumlah;
        for (i = 1; i <= jumlah; i++){
        cout << "Masukkan Angka : " << endl;
        cin >> angka;
        if ( i ==1 ) {
             min = angka;
             max = angka;
            }
            else if ( min > angka ) {
               min = angka;
            }
            else if ( max < angka) {
               max = angka;
            }
           else {}
            }
       cout << "Nilai minimal   : " <<  min << endl;
       cout << "Nilai maksimal  : " <<  max << endl;

}
