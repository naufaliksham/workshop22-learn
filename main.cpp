#include "lib-nim.cpp"

int main() {
    system("cls");
    int numA,numB;

    cout << "numA = ";
    cin >> numA;
    cout << "numB = ";
    cin >> numB;
    cout << "Hasil = " << kalkulator(numA,numB);

    return 0;
}