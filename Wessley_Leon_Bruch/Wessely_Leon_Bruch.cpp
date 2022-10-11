//Spezifikation: Datentyp Rationale Zahlen Zahl(Bruch)

#include <iostream>
//Bauplan(Klasse) für den Datentyp
class Bruch{
    //Attributes - private
private:
    int zaehler;
    int nenner;

    int rawZaehler;
    int rawNenner;
    //constructor - public
public:
    Bruch(){
        zaehler =0;
        nenner =0;
    }
    Bruch(int z, int n){
        zaehler = z;
        nenner = n;
    }
    //Getter-Methoden
    int GetZaehler(){
        std::cin >> rawZaehler;
        rawZaehler % 2 = zaehler;
        return zaehler;
    }
    int GetNenner(){
        std::cin >> rawNenner;
        rawNenner % 2 = nenner;
        return nenner;
    }
    //Setter-Methode
    void setBruch(int z, int n){
        zaehler = z;
        nenner = n;
    }
    //sonstige Methoden
    void printBruch(){
        std::cout << zaehler <<"|" << nenner;
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
    Bruch k2(3, 4);
    Bruch k3;
    Bruch k4;
    Bruch k5;
    Bruch k6;
    //check was im Hauptspeicher ist
    //cout <<"\nkl: " << k1.GetNenner << "|"<< k1.GetNenner;
    //cout <<"\nk2: " << k2.GetZaehler << "|"<< k2.GetNenner;

    k3 = k1 + k2;
    std::cout <<"\nk3: "; k3.printBruch();

    k4 = k2 - k1;
    std::cout <<"\nk4: "; k4.printBruch();

    k5 = k2 * k1;
    std::cout <<"\nk5: "; k5.printBruch();

    k6 = k2 / k1;
    std::cout <<"\nk6: "; k6.printBruch();
    return 0;
}