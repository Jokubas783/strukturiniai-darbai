#include <iostream>

#include <string>

using namespace std;

void vigenere();

void ascii();

int p=0;

char raid[26] = {

    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',

    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main() {
    while(true) {
        cout << "Pasirinkite sifravimo buda:" << endl;
        cout << "Vigenere algoritmas: [1] " << endl;
        cout << "ASCII koduote:       [2] " << endl;
        cout << "Baigti programa:     [3] " << endl;

        cin >> p;


        if (p==1){

            vigenere();


        }

        if (p==2) {

            ascii();


        }
        if(p==3) {
            cout << "programa baigta :(";
            return 0;

        }
    }
}

void vigenere(){

    int p1;

    string txt1, r, nr, nt;

    int i, j, n, a, b, c;

    string r2;



    cout << "Uzsifruoti teksta: [1]" << endl;

    cout << "Issifruoti teksta: [2]" << endl;



    cin >> p1;

    if (p1==1) {

        cout << "Iveskite texta:";

        cin >> txt1;

        cout << "Iveskite rakta:";

        cin >> r;



        for (i = 0; i < txt1.length(); ++i) {

            nr += r[i % r.length()];

        }

        for (i=0; i<txt1.length(); i++) {

            for(j=0; j<26; j++) {

                if(txt1[i]==raid[j]) {

                    a = j;

                }

                if(nr[i]==raid[j]) {

                    b = j;

                }

            }

            c = a + b;

            if(c>26) {

                c = c - 26;

            }

            //cout << c << endl;

            nt = nt + raid[c];



        }

        cout << nt << endl;


    }
    if(p1==2) {

        cout << "Iveskite teksta: ";

        cin >> txt1;

        cout << "Iveskite rakta: ";

        cin >> r;

        for (i = 0; i < txt1.length(); ++i) {

            nr += r[i % r.length()];

        }

        for(i=0; i<txt1.length(); i++) {

            for(j=0; j<26; j++){

                if(txt1[i]==raid[j]) {

                    a = j;

                }

                if(nr[i]==raid[j]) {

                    b = j;

                }

            }

            c = a - b;

            if(c<0) {

                c = c + 26;

            }

            nt = nt + raid[c];

        }

        cout << nt << endl;

    }



}

void ascii(){

    int p1;

    cout << "Uzsifruoti teksta: [1]" << endl;

    cout << "Issifruoti teksta: [2]" << endl;

    cin >> p1;

    if (p1==1) {

        // for(int i = 0; i< 256; i++) {

        //     cout << i << "-> " << static_cast<char>(i) << "  " << char(i) << endl;

        // } 33 - 126;; 93

        string txt;

        int ilg, r, i, sk;

        cout << "Iveskite teksta: " ;

        cin >> txt;

        cout << "Iveskite rakta: ";

        cin >> r;

        ilg = txt.length();

        for (i=0; i<ilg; i++) {

            //cout << txt[i] << " - " << int(txt[i]) << endl;

            sk = txt[i] + r;

            while(sk>126) {

                sk = sk - 93;

            }

            cout << char(sk);

        }

        cout << endl;



    }

    if(p1==2) {

        string txt;

        int r, ilg, i, sk;

        cout << "Iveskite teksta: " ;

        cin >> txt;

        cout << "Iveskite rakta: ";

        cin >> r;

        ilg = txt.length();

        for (i=0; i<ilg; i++) {

            sk = txt[i] - r;

            while (sk<33) {

                sk = sk + 93;

            }

            cout << char(sk);

        }

        cout << endl;
    }

}

