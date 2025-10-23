#include <iostream>
using namespace std;

int main() {

     string masyvas[6];

     for (int i = 0; i < 6; i++) {
         cout << "Mokiniu vardai: " << endl;
         cin >> masyvas[i];
     }

    int pazymiai;
    string mokiniai;
    int masyvas2[10];

    cout << "Kiek Mokiniu: " << endl;
    cin >> mokiniai;
    cout << "Kiek Pazymiu: " << endl;
    cin >> pazymiai;

    pazymiai;
    for (int j = 0; j < pazymiai; j++) {
        cout << "Pazymis: "<< endl;
        cin >> masyvas2[pazymiai-1];
    }

    int e;
    cout << "Mokinio pazymis: " << endl;
    cin >> e;

        for (int j = 0; j < pazymiai; j++) {
            if (masyvas2[j] == e) {
                cout << " Pazymys: " << j+1 << endl;
            }
        }

        for (int i = 0; i < 6; i++) {
            if (masyvas[6] == e) {}
            cout << "Mokinys: " << i+1 << endl;
        }
    }
