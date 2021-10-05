#include <iostream>

using namespace std;

int main(){
    int N, count, sum;
    float rata;
    cout << "Masukkan angka 00 untuk melihat hasil " << endl;
    sum =0; count =0;
    cin >> N;
    while (N != 00) {
        count++;
        sum+=N;
        cin >> N;
    }
    if (count>0){
        rata = (float)sum/(float)count;
        cout << "Rata-rata = " << rata << endl;
        }
        return 0;

}
