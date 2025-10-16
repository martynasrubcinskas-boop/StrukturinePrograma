#include <iostream>
using namespace std;

int main()  {
    char valiuta;
    char veiksmas;
    double suma, rezultatas;

    // Įvedimas
    cout << "Pasirinkite valiuta (G - GBP, U - USD, I - INR): ";
    cin >> valiuta;

    cout << "Pasirinkite veiksma (P - Pirkti, D - Parduoti): ";
    cin >> veiksmas;

    cout << "Iveskite suma EUR: " << endl;
    cin >> suma;

    double GBP_Pirkti = 0.8600;
    double GBP_Parduoti = 0.9220;
    double USD_Pirkti = 1.1460;
    double USD_Parduoti = 1.2340;
    double INR_Pirkti = 101.3862;
    double INR_Parduoti = 107.8546;


    if (valiuta == 'G' || valiuta == 'g') {
       if (veiksmas == 'P' || veiksmas == 'p') {
        // EUR -> GBP (pirkimo kursas)
        rezultatas = suma * GBP_Pirkti;
        cout << "Gaunate " << rezultatas << " GBP" << endl;
  } else if (veiksmas == 'D' || veiksmas == 'd') {
        // EUR -> GBP (pardavimo kursas)
        rezultatas = suma / GBP_Parduoti;
        cout << "Gaunate " << rezultatas << " EUR" << endl;
    } else {
        cout << "Neteisingas veiksmas." << endl;
    }
  } else if (valiuta == 'U' || valiuta == 'u') {
    if (veiksmas == 'P' || veiksmas == 'p') {
        // EUR -> USD (pirkimo kursas)
        rezultatas = suma * USD_Pirkti ;
        cout << "Gaunate " << rezultatas << " USD" << endl;
  } else if (veiksmas == 'D' || veiksmas == 'd') {
        // EUR -> USD (pardavimo kursas)
        rezultatas = suma / USD_Parduoti;
        cout << "Gaunate " << rezultatas << " USD" << endl;
    } else {
        cout << "Neteisingas veiksmas." << endl;
    }
  }
    else if (valiuta == 'I' || valiuta == 'i') {
    if (veiksmas == 'P' || veiksmas == 'p') {
        // EUR -> INR (pirkimo kursas)
        rezultatas = suma * INR_Pirkti;
        cout << "Gaunate " << rezultatas << " INR" << endl;
    } else if (veiksmas == 'D' || veiksmas == 'd') {
        // EUR -> INR (pardavimo kursas)
        rezultatas = suma / INR_Parduoti;
        cout << "Gaunate " << rezultatas << " INR" << endl;
    } else {
        cout << "Neteisingas veiksmas." << endl;
    }
  }
      else {
       cout << "Neteisinga valiuta." << endl;
  }


      for (int i = 1; i <= 3; i++) {
        string valiuta;
        double kiekis = 0.0;

        // Priskiriame kursą ir valiutos pavadinimą pagal ciklo numerį
        if (i == 1) {
            cout << "Valiutos palyginimas su euru (1 EUR = X valiutos):\n";
            valiuta = "GBP";
            kiekis = 0.8729;
        }
        else if (i == 2) {
            cout << "Valiutos palyginimas su euru (1 EUR = X valiutos):\n";
            valiuta = "USD";
            kiekis = 1.1793;
        }
        else if (i == 3) {
            cout << "Valiutos palyginimas su euru (1 EUR = X valiutos):\n";
            valiuta = "INR";
            kiekis = 104.6918;
        }

        cout << "1 EUR = " << kiekis << " " << valiuta << endl;
    }


}
