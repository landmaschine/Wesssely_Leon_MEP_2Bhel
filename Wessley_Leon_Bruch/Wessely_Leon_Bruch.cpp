//Spezifikation: Datentyp Rationale Zahlen Zahl(Bruch)

#include <iostream>
using namespace std;
//Bauplan(Klasse) für den Datentyp
class Bruch{
    //Attributes - private
private:
    int zaehler;
    int nenner;
    //constructor - public
public:
    Bruch(){
        zaehler =0;
        nenner =0;
    }
    Bruch(int z, int n){
        zaehler =z;
        nenner =n;
    }
    //Getter-Methoden
    int GetZaehler(){
        return zaehler;
    }
    int GetNenner(){
        return nenner;
    }
    //Setter-Methode
    void setBruch(int z, int n){
        zaehler = z;
        nenner = n;
    }
    //sonstige Methoden
    void printBruch(){
        cout << zaehler <<"|" << nenner;
    }

    Bruch addBruch(Bruch b)
    {
        return Bruch(zaehler*b.GetNenner()+nenner*b.GetZaehler(),nenner*b.GetNenner());
    }

    Bruch operator+(Bruch y) {
        return Bruch(zaehler*y.GetNenner()+nenner*y.GetZaehler(),nenner*y.GetNenner());
    }

    Bruch operator-(Bruch z) {
        return Bruch(zaehler*z.GetNenner()-nenner*z.GetZaehler(),nenner*z.GetNenner());
    }

    Bruch operator*(Bruch z) {
        return Bruch(zaehler*z.GetNenner()*nenner*z.GetZaehler(),nenner*z.GetNenner());
    }

    Bruch operator/(Bruch z) {
        return Bruch(zaehler*z.GetNenner()/nenner*z.GetZaehler(),nenner*z.GetNenner());
    }
    
};

int main() {
    //Erzeugen eines Objektes vom neuen Datentyp
    Bruch k1(4, 4);
    Bruch k2(3, 3);
    Bruch k3;
    Bruch k4;
    Bruch k5;
    Bruch k6;
    //check was im Hauptspeicher ist
    //cout <<"\nkl: " << k1.GetNenner << "|"<< k1.GetNenner;
    //cout <<"\nk2: " << k2.GetZaehler << "|"<< k2.GetNenner;

    k3 = k1 + k2;
    cout <<"\nk3: "; k3.printBruch();

    k4 = k2 - k1;
    cout <<"\nk4: "; k4.printBruch();

    k5 = k2 * k1;
    cout <<"\nk5: "; k5.printBruch();

    k6 = k2 / k1;
    cout <<"\nk6: "; k6.printBruch();
    return 0;
}