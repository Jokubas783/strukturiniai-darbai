//Kiaušinien?                           1.45€
//Kiaulienos šonin? su keptu kiaušiniu  2.45€
//Keksiukas su vyšnia                   0.99€
//Pranc?ziškas skrebutis                1.99€
//Vaisi? salotos                        2.49€
//Pusry?i? dribsniai                    0.69€
//Kava                                  0.50€
//Arbata                                0.75€

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
using namespace std;

void menuData();
void getData();
void printMenu();
void basket();
void printCheck();

struct MenuItemType {
	string menuItem;
	double menuPrice;
};
MenuItemType menuList[100];
int kiek[100];
double suma;
double kr;
int main() {

	int t;
	menuData();
	while (true) {
		
		
		basket();
		cout << endl;
		printMenu();
		getData();
		cout << "---------------------- KREPSELIS ---------------------" << endl;
		basket();
		cout << "------------------------------------------------------" << endl;
		cout << " -Testi:   <ENTER> " << endl;
		cout << " -Cekis:   <SPACE> " << endl;
		char key = _getch();

		if (key == 32) {

			printCheck();
			return 0;
		}
		system("cls");
			
	}
		
	
}

void menuData(){

	menuList[0].menuItem = "Kiausiniene";
	menuList[1].menuItem = "Kiaulienos sonine su keptu kiauisiniu";
	menuList[2].menuItem = "Keksiukas su vysnia";
	menuList[3].menuItem = "Prancuziskas skrebutis";
	menuList[4].menuItem = "Vaisiu salotos";
	menuList[5].menuItem = "Pusryciu dribsniai";
	menuList[6].menuItem = "Kava";
	menuList[7].menuItem = "Arbata";
	menuList[0].menuPrice = 1.45;
	menuList[1].menuPrice = 2.45;
	menuList[2].menuPrice = 0.99;
	menuList[3].menuPrice = 1.99;
	menuList[4].menuPrice = 2.49;
	menuList[5].menuPrice = 0.69;
	menuList[6].menuPrice = 0.50;
	menuList[7].menuPrice = 0.75;
	char a = ' ';
	for (int i = 0; i < 8; i++) {
		if (menuList[i].menuItem.length() < 40) {
			while (menuList[i].menuItem.length() < 40) {
				menuList[i].menuItem = menuList[i].menuItem + a;
			}
		}
		//cout << menuList[i].menuItem << menuList[i].menuPrice << endl;

	}
}
void printMenu() {
	
	cout << "===================== MENIU ========================" << endl;
	cout << endl;
	for (int i = 0; i < 8; i++) {
		cout << " <" << i+1 << "> " << menuList[i].menuItem;
		cout << fixed << setprecision(2);
		cout <<"$ " << menuList[i].menuPrice << endl;
	}
	cout << endl;
	cout << "====================================================" << endl;
}
void getData() {
	int prod;
	cout << endl;
	cout << " >> Pasirinkite/Pasalinkite produkta: ";
	cin >> prod;
	cout << endl;
	system("cls");
	switch (prod) {
	case 1:
		cout << " Pasrinikote - Kiausiniene " << endl;
		cout << "  >> Kiekis ($1.45): ";
		cin >> kiek[0];
		break;
	case 2:
		cout << " Pasrinkote - Kiauleinos sonine su keptu kiausiniu " << endl;
		cout << "  >> Kiekis ($2.45): ";
		cin >> kiek[1];
		break;
	case 3:
		cout << " Pasirinkote - Keksiukas su vysnia " << endl;
		cout << "  >> Kiekis ($0.99): ";
		cin >> kiek[2];
		break;
	case 4:
		cout << " Pasirinkote - Prancuziskas skrebutis " << endl;
		cout << "  >> Kiekis ($1.99): ";
		cin >> kiek[3];
		break;
	case 5:
		cout << " Pasirinkote - Vaisiu salotos " << endl;
		cout << "  >> Kiekis ($2.49): ";
		cin >> kiek[4];
		break;
	case 6:
		cout << " Pasirinkote - Pusryciu dribsniai " << endl;
		cout << "  >> Kiekis ($0.69): ";
		cin >> kiek[5];
		break;
	case 7:
		cout << " Pasirinkote - Kava " << endl;
		cout << "  >> Kiekis ($0.50): ";
		cin >> kiek[6];
		break;
	case 8:
		cout << " Pasrinkote - Arbata " << endl;
		cout << "  >> Kiekis ($0.75): ";
		cin >> kiek[7];
		break;
	}
	system("cls");
}
void basket() {
	
	suma = 0;
	for (int i = 0; i < 8; i++) {
		if (kiek[i] > 0) {
			cout << "  -" << menuList[i].menuItem << kiek[i] << "x ";
			cout << "$" << menuList[i].menuPrice * kiek[i] << endl;
		}
		kr = menuList[i].menuPrice * kiek[i];
		suma = suma + kr;
	}
	char a = ' ';
	if (suma > 0) {
		cout << endl;
		if (suma < 10) {
			for (int i = 0; i < 40; i++) {
			cout << a;
			}
		}
		
		if (suma > 9) {
			for (int i = 0; i < 39; i++) {
				cout << a;
			}
		}
		if (suma > 99) {
			for (int i = 0; i < 38; i++) {
				cout << a;
			}
		}
		cout << "suma: $" << suma << endl;
	}
	
}
void printCheck(){
	system("cls");
	cout << endl;
	if (suma > 0) {
		cout << "=======RESTORANAS===" << endl;
		cout << "===ACIU=============" << endl;
		cout << endl;
		cout << " CEKIS ATSPAUSINTAS " << endl;
		cout << "==============IKI===" << endl;
		ofstream prnt("Ataskaita.txt");
		suma = 0;
		prnt << "==================================== RESTORANAS ===========" << endl;
		prnt << endl;
		for (int i = 0; i < 8; i++) {
			if (kiek[i] > 0) {
				prnt << "  -" << menuList[i].menuItem << kiek[i] << "x ";
				prnt << "$" << menuList[i].menuPrice * kiek[i] << endl;
			}
			kr = menuList[i].menuPrice * kiek[i];
			suma = suma + kr;
		}
		char a = ' ';
		if (suma > 0) {
			prnt << endl;
			if (suma < 10) {
				for (int i = 0; i < 40; i++) {
					prnt << a;
				}
			}

			if (suma > 9) {
				for (int i = 0; i < 39; i++) {
					prnt << a;
				}
			}
			if (suma > 99) {
				for (int i = 0; i < 38; i++) {
					prnt << a;
				}
			}
			prnt << "suma: $" << suma << endl;
			prnt << fixed << setprecision(2) << endl;
			prnt << "  -Galutine suma (su PVM): $ " << suma * 1.21 << endl;
			prnt << endl;
			prnt << "===== ACIU, KAD APSILANKETE ==============================" << endl;

		}
		for (int i = 0; i < 10; i++) {
			cout << endl;
		}

	}
	else cout << " -Cekis nebus atspausdintas, produktu suma = $0.";
	
}