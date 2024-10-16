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
#include <iomanip>
using namespace std;
double gbp, usd, inr;
int main() {
    int sk=10;
    while(true) {


        cout << "Pasirinkite jus dominanti veiksma:"<< endl;
        cout << "GBP, ivesk (1)" << endl;
        cout << "USD, ivesk (2)" << endl;
        cout << "INR, ivesk (3)" << endl;
        cout << "Baigti, ivesk(4)" << endl;
        cin >> sk;
        cout << fixed << setprecision(2);
        //GBP
        if(sk == 1) {
            sk=10;
            cout << "Jus pasirinkote veiksma su GBP" <<endl;
            cout << "Pirkti   ivesk (1)" << endl;
            cout << "Parduoti ivesk (2)" << endl;
            cout << "Bendras  ivesk (3)" << endl;
            cin >> sk;
            if (sk==1) {
                cout << "Kokia suma norite pirkti(GBP)?" << endl;
                cin >> gbp;
                cout << gbp;
                gbp = gbp / 0.8450;
                cout << " GBP, jums kainuos - " << gbp << "eur." << endl;

            }
            if (sk==2) {
                cout << "Kokia suma norite parduoti (GBP)" << endl;
                cin >> gbp;
                cout << "Uz " << gbp;
                gbp = gbp / 0.9060;
                cout << " jus gausite - "<< gbp << "eur." << endl;

            }
            if (sk==3) {
                sk=0;
                cout << "Konvertuoti: " << endl;
                cout << "eur -> GBP; iveks (1)" << endl;
                cout << "GBP -> eur; ivesk (2)" << endl;
                cin >> sk;
                if(sk==1) {
                    cout <<"Ivesktie suma (eur)" << endl;
                    cin >> gbp;
                    cout << gbp;
                    gbp = gbp * 0.8593;
                    cout << "eur = " << gbp << " GBP." << endl;

                }
                if(sk==2) {
                    cout <<"Ivesktie suma (GBP)" << endl;
                    cin >> gbp;
                    cout << gbp;
                    gbp = gbp / 0.8593;
                    cout << " GBP = " << gbp << "eur." << endl;

                }
            }
            //USD
        }
        if(sk == 2) {
            sk=10;
            cout << "Jus pasirinkote veiksma su USD" <<endl;
            cout << "Pirkti   ivesk (1)" << endl;
            cout << "Parduoti ivesk (2)" << endl;
            cout << "Bendras  ivesk (3)" << endl;
            cin >> sk;
            if (sk==1) {
                cout << "Kokia suma norite pirkti (USD)?" << endl;
                cin >> usd;
                cout << usd;
                usd = usd / 1.0547;
                cout << " USD, jums kainuos - " << usd << "eur." << endl;

            }
            if (sk==2) {
                cout << "Kokia suma norite parduoti (USD)" << endl;
                cin >> usd;
                cout << "Uz " << usd;
                usd = usd / 1.1309;
                cout << " USD jus gausite - "<< usd << "eur." << endl;

            }
            if (sk==3) {
                sk=10;
                cout << "Konvertuoti: " << endl;
                cout << "eur -> USD; iveks (1)" << endl;
                cout << "USD -> eur; ivesk (2)" << endl;
                cin >> sk;
                if(sk==1) {
                    cout <<"Ivesktie suma (eur)" << endl;
                    cin >> usd;
                    cout << usd;
                    usd = usd * 1.0713;
                    cout << "eur = " << usd << " USD." << endl;

                }
                if(sk==2) {
                    cout <<"Ivesktie suma (USD)" << endl;
                    cin >> usd;
                    cout << usd;
                    usd = usd / 1.0713;
                    cout << " USD = " << usd << "eur." << endl;

                }
            }
        }
        //INR
        if(sk == 3) {
            sk=0;
            cout << "Jus pasirinkote veiksma su INR" <<endl;
            cout << "Pirkti   ivesk (1)" << endl;
            cout << "Parduoti ivesk (2)" << endl;
            cout << "Bendras  ivesk (3)" << endl;
            cin >> sk;
            if (sk==1) {
                cout << "Kokia suma norite pirkti (INR)?" << endl;
                cin >> inr;
                cout << inr;
                inr = inr / 85.2614;
                cout << " INR, jums kainuos - " << inr << "eur." << endl;

            }
            if (sk==2) {
                cout << "Kokia suma norite parduoti (INR)" << endl;
                cin >> inr;
                cout << "Uz " << inr;
                inr = inr / 92.8334;
                cout << " INR jus gausite - "<< inr << "eur." << endl;

            }
            if (sk==3) {
                sk=10;
                cout << "Konvertuoti: " << endl;
                cout << "eur -> GBP; iveks (1)" << endl;
                cout << "GBP -> eur; ivesk (2)" << endl;
                cin >> sk;
                if(sk==1) {
                    cout <<"Ivesktie suma (eur)" << endl;
                    cin >> inr;
                    cout << inr;
                    inr = inr * 88.8260;
                    cout <<  "eur = " << inr << " INR." << endl;

                }
                if(sk==2) {
                    cout <<"Ivesktie suma (INR)" << endl;
                    cin >> inr;
                    cout << inr;
                    inr = inr / 88.8260;
                    cout << " INR = " << inr << "eur." << endl;

                }
            }
        }
        if(sk==4) {
            break;
        }
    }
    cout << "--------------------------------------"<<endl;
    cout <<"PROGRAMA BAIGTA" << endl;
}