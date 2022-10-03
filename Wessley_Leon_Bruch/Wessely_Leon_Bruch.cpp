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
};

int main() {
    //Erzeugen eines Objektes vom neuen Datentyp
    Bruch k1;
    Bruch k2(5, 3);
    //check was im Hauptspeicher ist
    //cout <<"\nkl: " << k1.GetNenner << "|"<< k1.GetNenner;
    //cout <<"\nk2: " << k2.GetZaehler << "|"<< k2.GetNenner;
    cout <<"\nk1: "; k1.printBruch();
    cout <<"\nk2: "; k2.printBruch();
    k1.setBruch(-3, 5); //Kl verändern
    cout <<"\nk1: "; k1.printBruch();

    k1 = k1.addBruch(k2);
    cout <<"\nk1: "; k1.printBruch();
    k1 = k2.addBruch(k1);
    cout <<"\nk1: "; k1.printBruch();
    return 0;
}