#include <iostream>
#include <random>
#include <ctime>
#include <cmath>
using namespace std;
void zaidimas();
void fizzbuzz();
int rsk, sp;
double n;
int main() {
    char balse[10]={'a','e','i','o','u','A','E','I','U','O'};
    char raid;
    int pas, i, a=0;
    int sk1, sk2, liek;

    srand(time(0));

    while(true) {
        cout << "1. Ar raide yra balse?           (Ivesk [1])" << endl;
        cout << "2. Didziausias bendras daliklis? (Iveks [2])" << endl;
        cout << "3. Atspek skaiciu!!              (Ivesk [3])" << endl;
        cout << "4. FizzBuzz 1 - n                (Ivesk [4])" << endl;
        cout << "5. Baigti programa?              (Ivesk [5])" << endl;

        cin >> pas;

        if(pas==1) {
            cout << "Iveskite raide:" << endl;
            cin >> raid;
            for(i=0; i<10; i++) {
                if(raid==balse[i]) {
                    cout << raid << ": YRA balse!" << endl;
                    cout << endl;
                    a=1;

                }
            }
            if (a==0) {
                cout << raid << ": NERA balse!" << endl;
                cout << endl;
            }

        }

        if (pas==2) {
            cout << "Ivesk pirma skaiciu:" << endl;
            cin >> sk1;
            cout << "Ivesk antra skaicu:" << endl;
            cin >> sk2;

            while(sk2!=0) {
                liek = sk1%sk2;
                sk1=sk2;
                sk2=liek;

            }
            cout << "Didziausias bendras daliklis yra: " << sk1 << endl;
            cout << endl;
        }

        if (pas==3) {
            zaidimas();
            cout << "TEISINGAI, skaicius buvo " << rsk << endl;
            cout << endl;
        }

        if (pas==4) {
            fizzbuzz();
            cout << endl;

        }

        if (pas==5) {
            cout << "Programa baigta";
            break;
        }
    }

}
void zaidimas() {
    rsk = rand()%100;
    cout << "Spek skaiciu: " << endl;
    cin >> sp;
    while(sp!=rsk) {
        if(sp>rsk) {
            cout << "Neatspejote, skaiciu yra mazesnis!" << endl;
        }
        else if(sp<rsk) {
            cout << "Neatspejote skaicius yra didesnis" << endl;
        }
        cout << "Bandyk vel: " << endl;
        cin >> sp;
    }
}
void fizzbuzz() {
    cout << "Iveskite naturaluji, sveikaji skaiciu n:" << endl;
    cin >> n;
    if(n>0||n==(floor(n))) {
        for (int i=1; i<n+1; i++) {
            if (i%3==0 && i%5==0) {
                cout << i << " FizzBuzz" << endl;
            }
            else if(i%3==0) {
                cout << i << " Fizz" <<endl;
            }
            else if(i%5==0) {
                cout << i << " Buzz" << endl;
            }
            else cout << i << endl;
        }
    }
}