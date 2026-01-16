#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_ITEMS = 20;
const double TAX = 0.21;

struct menuItemType {
    string menuItem;
    double menuPrice;
};

int getData(menuItemType menu[]);
void showMenu(menuItemType menu[], int n);
void printCheck(menuItemType menu[], int n, int qty[]);

int main() {
    menuItemType menu[MAX_ITEMS];
    int qty[MAX_ITEMS] = {0};

    int count = getData(menu);

    if (count == 0) {
        cout << "Klaida: menu.txt nerastas\n";
        return 1;
    }

    showMenu(menu, count);

    cout << "\nIveskite kiek (0 jeigu neperkate):\n";
    for (int i = 0; i < count; i++) {
        cout << menu[i].menuItem << ": ";
        cin >> qty[i];
    }

    printCheck(menu, count, qty);
    return 0;
}

int getData(menuItemType menu[]) {
    ifstream file("menu.txt");
    if (!file) return 0;

    int i = 0;
    string line;

    while (getline(file, line) && i < MAX_ITEMS) {
        size_t pos = line.find_last_of(';');
        if (pos == string::npos) continue;

        menu[i].menuItem = line.substr(0, pos);
        menu[i].menuPrice = stod(line.substr(pos + 1));
        i++;
    }

    file.close();
    return i;
}

void showMenu(menuItemType menu[], int n) {
    cout << "\nSveiki atvyke i Prancuziska Restorana\n\n";
    cout << fixed << setprecision(2);

    for (int i = 0; i < n; i++) {
        cout << setw(2) << i + 1 << ". "
             << setw(20) << left << menu[i].menuItem
             << menu[i].menuPrice << " EUR\n";
    }
}

void printCheck(menuItemType menu[], int n, int qty[]) {
    ofstream receipt("receipt.txt");
    double sum = 0.0;

    cout << "\n--- Saskaita ---\n";
    receipt << "--- Saskaita ---\n";

    for (int i = 0; i < n; i++) {
        if (qty[i] > 0) {
            double price = qty[i] * menu[i].menuPrice;
            sum += price;

            cout << qty[i] << " x "
                 << setw(20) << left << menu[i].menuItem
                 << price << " EUR\n";

            receipt << qty[i] << " x "
                    << setw(20) << left << menu[i].menuItem
                    << price << " EUR\n";
        }
    }

    double tax = sum * TAX;
    double total = sum + tax;

    cout << "\nPVM (21%): " << tax << " EUR\n";
    cout << "Suma: " << total << " EUR\n";

    receipt << "\nPVM (21%): " << tax << " EUR\n";
    receipt << "Suma: " << total << " EUR\n";

    receipt.close();
}
