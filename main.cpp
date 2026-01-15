#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

void bilietai() {

    double kaina;
    double parduota_bilietu;
    double isparduota = 0;
    double bendra_suma = 0;

    ifstream tickets;
    tickets.open("Tickets.txt");

    string bilietai;
    getline(tickets, bilietai);

    for (int i = 1; i <= 4; i++) {
        tickets >> kaina >> parduota_bilietu;
        bendra_suma += kaina * parduota_bilietu;
        isparduota += parduota_bilietu;
    }
    tickets.close();

    while (true) {
        char pasirink;
        cout << "A. Apskaiciuoti bendra parduotu bilietu skaiciu" << endl;
        cout << "B. Apskaiciuoti bendra pardavimu suma" << endl;
        cout << "C - Iseiti is programos" << endl;
        cin >> pasirink;
        if (pasirink == 'A') {
            cout << "Bendras Parduotu Bilietu skaicius: " << isparduota << endl;
        }  else if (pasirink == 'B') {
            cout<<fixed<<setprecision(2)<<"Bendra pardavimu suma: "<< bendra_suma <<" EUR "<<endl;
        } else if (pasirink == 'C') {
            break;
        }
    }
}

void atlyginimai() {
    int kiek = 3;
    string pavarde[kiek], vardas[kiek];
    double atlyginimas[kiek], padidejimo_procentas[kiek];

    ifstream salary("Salary.txt");
    if (!salary) {
        cout << "Nepavyko atidaryti failo!" << endl;
        return;
    }

    string atlygis;
    getline(salary, atlygis);

    int s = 0;
    while (s < kiek) {
        salary >> pavarde[s] >> vardas[s] >> atlyginimas[s] >> padidejimo_procentas[s];
        s++;
    }
    salary.close();

    char pasirink2;
    cout << "D - atnaujinti darbuotojam atlyginimus" << endl;
    cin >> pasirink2;

    if (pasirink2 == 'D') {
        cout <<"Pavarde  Vardas  Esamas atlyginimas (USD) Naujas atlyginimas (USD)" << endl;
        s = 0;
        while (s < kiek) {
            double naujas_atlyginimas = atlyginimas[s] + atlyginimas[s] * padidejimo_procentas[s] / 100;
            cout <<pavarde[s]<<"\t "<<vardas[s]<<"\t "
            <<atlyginimas[s]<< "\t\t  " <<naujas_atlyginimas<<endl;
            s++;
        }
    }
}


int main() {
    string pasirinkimas;
    cout << "Pirmas - Norite apskaiciuoti koncerto bilietu pardavimo suma" << endl;
    cout << "Antras - Norite atnaujinti darbuotoju atlyginimus pagal padidejimo procenta" << endl;
    cin >> pasirinkimas;
    if (pasirinkimas == "Pirmas") {
        cout << "Koncerto bilietu kainos ir parduoti bilietai: " << endl;
        bilietai();
    } else if (pasirinkimas == "Antras") {
        cout << "Darbuotoju esami atlyginimai ir atnaujinti atlyginimai" << endl;
        atlyginimai();
    }
    return 0;
}