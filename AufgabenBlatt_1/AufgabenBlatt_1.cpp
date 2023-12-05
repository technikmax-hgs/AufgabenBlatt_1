// Aufgabenblatt1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

double oberflaeche(float l, float b, float t);
double volumen(float l, float b, float t);
//void aufgabe_1();
//void aufgabe_2();
void aufgabe_3();
//void aufgabe_4();

int main()
{
    //aufgabe_1();
    //aufgabe_2();
   aufgabe_3();
    //aufgabe_4();
}

// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.

                     /*void aufgabe_1()
                            {
                                    float l, b, t;

                                    std::cout << "Laenge der Quadrates: ";

                                             if (std::cin >> l && l < 0)
                                                      {

                                                       }
                                             else
                                                      {
                                                    std::cout << "Falscher wert";
                                                       }

                                     std::cout << "Breite der Quadrates: ";

                                       if (std::cin >> b && l < 0)
                {

                 }
             else
                 {
                    std::cout << "Falscher wert";
                 }
        std::cout << "Tiefe der Quadrates: ";
             if (std::cin >> t && l < 0)
                    {

                     }
             else
                        {
                 std::cout << "Falscher wert";
                        }








    double e_Ober = oberflaeche(l, b, t);
    double e_Vol = volumen(l, b, t);


    std::cout << "die Oberflaeche des Quadrates betraegt Quadratmeter " << e_Ober << " und das Volumen ist Qubicmeter " << e_Vol <<std::endl ;


}

            double oberflaeche(float l, float b, float t)
{

    return (2 * l * b) + (2 * l * t) + (2 * t * b);

   }
            double volumen (float l, float b, float t)
{


    return (l * b * t);
}
*/

/*void aufgabe_2()
  {
    float ergb;
    float endergb;
    float temperatur;
    std::cout << "Grad Fahrfahrenheit eingeben";
    if (std::cin >> temperatur)
    {
        ergb = temperatur - 32;
        endergb = ergb * 5 / 9;

        std::cout << "das ist das ergbnis in Grad Ceslsius " << endergb;

    }


 }*/


 void aufgabe_3()
 {
     float W1;
     float W2;
     float e1;
     float e2;

     std::cout << "Widerstandswert 1 eingeben";

     std::cin >> W1;


     std::cout << "Widerstandswert 2 eingeben";

     std::cin >> W2;

     e1 = W1 + W2;
     std::cout << " Gesamtwiderstand in Reihe ist " << e1;

     e2 = 1 / W1 + 1 / W2;
     std::cout << " Gesamtweiderstand Paralle ist " << e2;



 }



/*void aufgabe_4()
{

    char wort;
    unsigned antwort;

    std::cout << "Zeichen welches in ASCII-Code konvertiert werden soll";

    std::cin >> wort;

    unsigned antwort = char(wort);

    std::cout << " Das ist es in ASCII-Code " << antwort;

}
*/