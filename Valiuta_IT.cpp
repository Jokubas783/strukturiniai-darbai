        //GBP_Bendras = 0.8593;
        //GBP_Pirkti = 0.8450;
        //GBP_Parduoti = 0.9060;
        //USD_Bendras = 1.0713;
        //USD_Pirkti = 1.0547;
        //USD_Parduoti = 1.1309;
        //INR_Bendras = 88.8260;
        //INR_Pirkti = 85.2614;
        //INR_Parduoti = 92.8334;
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>
using namespace std;

void rod1()
{

    cout << "=====================\n";
    cout << "|  ('Pirkti')   [1] |\n";
    cout << "=====================\n";
    cout << endl;
    cout << "=====================\n";
    cout << "|  ('Parduoti') [2] |\n";
    cout << "=====================\n";
    cout << endl;
    cout << "=====================\n";
    cout << "|  ('Bendras')  [3] |\n";
    cout << "=====================\n";

}
void rod2()
{
    cout << "=====================\n";
    cout << "|    ('GBP') [1]    |\n";
    cout << "=====================\n";
    cout << endl;
    cout << "=====================\n";
    cout << "|    ('USD') [2]    |\n";
    cout << "=====================\n";
    cout << endl;
    cout << "=====================\n";
    cout << "|    ('INR') [3]    |\n";
    cout << "=====================\n";
    cout << endl;
    cout << "Pasirinkite dominanti valiutos kursa...\n";


}
int main() {
    char key;
    double suma;

    rod2();
    while (true) {

        key = _getch();
        if (key == '1')
        {
             system("CLS");
             rod1();
             cout << endl;
             cout << "Pasirinkite tolimesni veiksma su GBP...";
             key =_getch();
             if(key == '3')
             {
                 system("CLS");
                 cout <<" 1 EUR = 0.85 GBP..." << endl;
             }
             if(key == '1')
             {
                 system("CLS");
                 cout << "Iveskite perkama suma (GBP)..." <<endl;
                 cin >> suma;
                 system("CLS");
                 suma = suma/0.9060;
                 cout << fixed << setprecision(2);
                 cout << "Kaina " << suma << " EUR" << endl;
             }
             if(key == '2')
             {
                 system("CLS");
                 cout << "Iveskite parduodama suma (GBP)..." <<endl;
                 cin >> suma;
                 system("CLS");
                 suma = suma*0.8593;
                 cout << fixed << setprecision(2);
                 cout << "Gausite " << suma << " EUR" << endl;
             }
             return 0;
        }

        if (key == '2')
        {
            system("CLS");
            rod1();
            cout << endl;
            cout << "Pasirinkite tolimesni veiksma su USD...";
             key =_getch();
             if(key == '3')
             {
                 system("CLS");
                 cout <<" 1 EUR = 1.07 USD..." << endl;
             }
             if(key == '1')
             {
                 system("CLS");
                 cout << "Iveskite perkama suma (USD)..." <<endl;
                 cin >> suma;
                 system("CLS");
                 suma = suma/1.0547;
                 cout << fixed << setprecision(2);
                 cout << "Kaina " << suma << " EUR" << endl;
             }
             if(key == '2')
             {
                 system("CLS");
                 cout << "Iveskite parduodama suma (USD)..." <<endl;
                 cin >> suma;
                 system("CLS");
                 suma = suma*1.1309;
                 cout << fixed << setprecision(2);
                 cout << "Gausite " << suma << " EUR" << endl;
             }
             return 0;
        }
        if(key == '3')
        {
            system("CLS");
            rod1();
            cout << endl;
            cout << "Pasirinkite tolimesni veiksma su INR...";
             key =_getch();
             if(key == '3')
             {
                 system("CLS");
                 cout <<" 1 EUR = 88.82 INR..." << endl;
             }
             if(key == '1')
             {
                 system("CLS");
                 cout << "Iveskite perkama suma (INR)..." <<endl;
                 cin >> suma;
                 system("CLS");
                 suma = suma/85.2614;
                 cout << fixed << setprecision(2);
                 cout << "Kaina " << suma << " EUR" << endl;
             }
             if(key == '2')
             {
                 system("CLS");
                 cout << "Iveskite parduodama suma (INR)..." <<endl;
                 cin >> suma;
                 system("CLS");
                 suma = suma/92.8334;
                 cout << fixed << setprecision(2);
                 cout << "Gausite " << suma << " EUR" << endl;
             }
             return 0;
        }
    }
    return 0;
}
