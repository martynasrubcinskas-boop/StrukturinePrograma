/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char valiuta;
    char veiksmas;
    double suma, rezultatas;

    // Įvedimas
    cout << "Pasirinkite valiutą (G - GBP, U - USD): ";
    cin >> valiuta;

    cout << "Pasirinkite veiksmą (P - Pirkti, D - Parduoti): ";
    cin >> veiksmas;

    cout << "Įveskite sumą EUR: ";
    cin >> suma;

    if (valiuta == 'G' || valiuta == 'g') {
        if (veiksmas == 'P' || veiksmas == 'p') {
            // EUR -> GBP (pirkimo kursas)
            rezultatas = suma / 0.8600;
            cout << "Gaunate " << rezultatas << " GBP" << endl;
        } else if (veiksmas == 'D' || veiksmas == 'd') {
            // GBP -> EUR (pardavimo kursas)
            rezultatas = suma * 0.9220;
            cout << "Gaunate " << rezultatas << " EUR" << endl;
        } else {
            cout << "Neteisingas veiksmas." << endl;
        }
    } else if (valiuta == 'U' || valiuta == 'u') {
        if (veiksmas == 'P' || veiksmas == 'p') {
            // EUR -> USD (pirkimo kursas)
            rezultatas = suma / 1.1460;
            cout << "Gaunate " << rezultatas << " USD" << endl;
        } else if (veiksmas == 'D' || veiksmas == 'd') {
            // USD -> EUR (pardavimo kursas)
            rezultatas = suma * 1.2340;
            cout << "Gaunate " << rezultatas << " EUR" << endl;
        } else {
            cout << "Neteisingas veiksmas." << endl;
        }
    } else {
        cout << "Neteisinga valiuta." << endl;
    }

    return 0;
}