#include <iostream>

using namespace std;
double addition(double a, double b)
{
    return a + b;
}
double soustraction(double a, double b)
{
    return a - b;
}
double multiplication(double a, double b)
{
    return a * b;
}
double division(double a, double b)
{

    if(b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "Erreur : division par zero impossible !" << endl;
        return 0;
    }
}
int main()
{
    int choix;
    double nombre1, nombre2, resultat;
    char continuer;
    do
    {

    cout << "===== CALCULATRICE C++ =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Soustraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Choisissez une operation : ";
    cin >> choix;

    cout << "Entrez le premier nombre : ";
    cin >> nombre1;

    cout << "Entrez le deuxieme nombre : ";
    cin >> nombre2;

    switch(choix)
    {
        case 1:
            resultat = addition(nombre1, nombre2);
            cout << "Resultat = " << resultat << endl;
            break;

        case 2:
            resultat = soustraction(nombre1, nombre2);
            cout << "Resultat = " << resultat << endl;
            break;

        case 3:
            resultat = multiplication(nombre1, nombre2);
            cout << "Resultat = " << resultat << endl;
            break;

        case 4:
            if(nombre2 != 0)
            {
                resultat = division(nombre1, nombre2);
                cout << "Resultat = " << resultat << endl;
            }
            else
            {
                cout << "Erreur : division par zero impossible !" << endl;
            }
            break;

        default:
            cout << "Choix invalide !" << endl;
    }

    cout << "Voulez-vous effectuer une autre operation ? (o/n) : ";
    cin >> continuer;
} while(continuer == 'o' || continuer == 'O');

    return 0;
}