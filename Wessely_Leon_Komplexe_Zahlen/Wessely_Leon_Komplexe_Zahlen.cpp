#include <iostream>
#include <cmath>

void ausgabe(double real, double imag);

void addition(double R1, double R2, double I1, double I2);

void subtraktion(double R1, double R2, double I1, double I2);

void multiplikation(double R1, double R2, double I1, double I2);

void division(double R1, double R2, double I1, double I2);

int main()
{

    bool an = 1;
    int entscheidung;
    double R1, R2, I1, I2;

    while (an)
    {
        std::cout << "\nAuswahl eingeben\n\n";
        std::cout << "1.Komplexe Zahl eingeben\n";
        std::cout << "2.Komplexe Zahl ausgeben\n";
        std::cout << "3.Addieren\n";
        std::cout << "4.Subtrahieren\n";
        std::cout << "5.Multiplizieren\n";
        std::cout << "6.Division\n";
        std::cout << "7.Exit\n";
        std::cin >> entscheidung;
        std::cout << "\n";

        switch (entscheidung)
        {

        case 1:
            std::cout << "Erste reale Zahl eingeben : ";
            std::cin >> R1;
            std::cout << "Erste imaginäre Zahl eingeben : ";
            std::cin >> I1;
            std::cout << "Zweite reale zahl eingeben : ";
            std::cin >> R2;
            std::cout << "Zweite imaginäre zahl eingeben : ";
            std::cin >> I2;
            break;
        case 2:
            std::cout << '(' << R1 << ((I1 > 0) ? "+" : "") << I1 << "i)"
                      << ",\t" << '(' << R2 << ((I2 > 0) ? "+" : "") << I2 << "i)\n";
            break;

        case 3:
            std::cout << "Die Addition der Komplexen Zahl : ";
            addition(R1, R2, I1, I2);
            break;
        case 4:
            std::cout << "Die Subtraktion der Komplexen Zahl : ";
            subtraktion(R1, R2, I1, I2);
            break;
        case 5:
            std::cout << "Die Multiplikation der Komplexen Zahl : ";
            multiplikation(R1, R2, I1, I2);
            break;
        case 6:
            std::cout << "Die Division der Komplexen Zahl : ";
            division(R1, R2, I1, I2);
            break;
        case 7:
            an = 0;
            break;
        default:
            std::cout << "Gültige Zahlen eingeben!!";
            break;
        }
    }

    return 0;
}

void division(double R1, double R2, double I1, double I2)
{
    double real, imag, normaler_denominator;
    normaler_denominator = pow(R2, 2) + pow(I2, 2);
    real = (R1 * R2) + (I1 * I2);
    imag = (I1 * R2) - (R1 * I2);
    ausgabe((real / normaler_denominator), (imag / normaler_denominator));
}

void multiplikation(double R1, double R2, double I1, double I2)
{
    double real, imag;
    real = (R1 * R2) - (I1 * I2);
    imag = R1 * I2 + R2 * I1;
    ausgabe(real, imag);
}

void subtraktion(double R1, double R2, double I1, double I2)
{

    R1 -= R2;
    I1 -= I2;
    ausgabe(R1, I1);
}

void addition(double R1, double R2, double I1, double I2)
{

    R1 += R2;
    I1 += I2;
    ausgabe(R1, I1);
}

void ausgabe(double real, double imag)
{
    std::cout << "Aktueller Wert: " << real << " + " << imag << "i" << std::endl;
}