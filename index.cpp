#include <iostream>

using namespace std;

int main() {
    int Hargatoko = 150000;
    double Diskontoko = 12.5;

    int Diskon = Hargatoko * (Diskontoko / 100);
    int Hargatotal = Hargatoko - Diskon;

    cout << "Harga  : " << Hargatoko << " Ribu" << endl;
    cout << "Diskon : " << Diskontoko << endl;
    cout << "Besarnya diskon dari harga : " << Diskon << endl;
    cout << "Harga setelah diskon : " << Hargatotal << " ribu" << endl;

    return 0;
}