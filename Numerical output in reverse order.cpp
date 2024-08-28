#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;	//Konstantevariablengröße Deklarieren.
    int numbers[SIZE];		//Die Bariablengröße in einem Array abspeichern.
    
    cout<<"Sie koennen mir Zehn Zahlen geben, welche ich Ihnen in umgekehrter Reihenfolge wieder ausgebe. \n";
    cout<<"\n";
    cout << "Geben Sie nun Ihre 10 Zahlen ein:\n";		//Eingabeaufforderung für Zehn Zahlen von dem Benutzer.
    cout<<"\n";

    for (int i = 0; i < SIZE; i++)		//Ausgabe, die wievielte Zahl der Benutzer gerade eingibt.
    {
        cout << "Zahl " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Eingegebene Zahlen in umgekehrter Reihenfolge:\n";		//Ausgbe, wie die Zahlen in umgekehrter Reihenfolge lauten

    for (int i = SIZE - 1; i >= 0; i--)		//For Schleife für die Ausgabe der zuvor eingegebenen Zahlen
    {
        cout << numbers[i] << " ";
    }


    return 0;
}

