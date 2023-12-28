/* Aufgabenblatt1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms. */
#include <iostream>
#include <stdexcept>


double oberflaeche(float l, float b, float t);
double volumen(float l, float b, float t);
void aufgabe_1();
void aufgabe_2();
void aufgabe_3();
void aufgabe_4();
void aufgabe_5();

int main()
{
    aufgabe_1();
    aufgabe_2();
    aufgabe_3();
    aufgabe_4();
    aufgabe_5();
}

double oberflaeche(float length, float width, float depth)
{
    return (2 * length * width) + (2 * length * depth) + (2 * depth * width);
}

double volumen (float length, float width, float depth)
{
    return (length * width * depth);
}

void aufgabe_1()
{
    float length = 0.0;
    float width = 0.0;
    float depth = 0.0;

    /* Receives the length of the square */
    std::cout << "Laenge des Quadrates: ";
    std::cin >> length;

    if (!length > 0)
    {
        std::cerr << "Falscher Wert!" << std::endl;
        return;
    }
        
    /* Receives the width of the square */
    std::cout << "Breite der Quadrates: ";
    std::cin >> width;

    if (!width > 0)
    {
        std::cerr << "Falscher Wert!" << std::endl;
        return;
    }
        
    /* Receives the depth of the square */
    std::cout << "Tiefe der Quadrates: ";
    std::cin >> depth;

    if (!depth > 0)
    {
        std::cerr << "Falscher Wert!" << std::endl;
        return;
    }
    
    /* Calculates the surface of the square */
    double surface = oberflaeche(length, width, depth);
    
    /* Calculates the volume of the square */
    double volume = volumen(length, width, depth);

    std::cout << "Die Oberflaeche des Quadrates betraegt Quadratmeter: " << surface << " und das Volumen ist Qubicmeter: " << volume << std::endl;
}

void aufgabe_2()
{
    float celsius = 0.0;
    float fahren = 0.0;

    /* Receive Fahren */
    std::cout << "Grad Fahrenheit eingeben: ";
    std::cin >> fahren;

    /* Calculate celsius */
    celsius = (fahren - 32) * (5.0 / 9.0); 
    std::cout << celsius << " Celsius" << std::endl;
}

void aufgabe_3()
{
    float res1 = 0.0;
    float res2 = 0.0;
    float sol1 = 0.0;
    float sol2 = 0.0;

    /* Receive resistances */
    std::cout << "Widerstandswert 1 eingeben: ";
    std::cin >> res1;
    std::cout << "Widerstandswert 2 eingeben: ";
    std::cin >> res2;

    /* Checks if the input is numeric */
    if (!(isdigit(res1) && isdigit(res2)))
        std::cerr << "Keine Zahl" << std::endl;

    /* Calculate total resistance (row) */
    sol1 = res1 + res2;
    std::cout << "Gesamtwiderstand in Reihe ist: " << sol1 << std::endl;

    /* Calculate total resistance (parallel) */
    sol2 = 1 / res1 + 1 / res2;
    std::cout << "Gesamtwiderstand Parallel ist: " << sol2 << std::endl;
}

void aufgabe_4()
{
    char inp_character = 0;
 
    /* Receive char */
    std::cout << "Zeichen welches in ASCII-Code konvertiert werden soll: ";
    
    if (std::cin >> inp_character)
        std::cout << "Das ist es in ASCII-Code: " << unsigned(inp_character) << std::endl;
    else
        std::cerr << "Falsche Eingabe: " << inp_character << std::endl; 
}

void aufgabe_5()
{
    static char vocals[] = { 'a', 'e', 'i', 'o', 'u' };
    char inp_character = 0; 
    bool temp = false;

    /* Receive char */
    std::cout << "Geben sie denn Buchstaben ein welcher ueberprueft werden soll: ";    
    std::cin >> inp_character;

    /* Check  */
    if (!isdigit(inp_character))
    {
        /* Check if its a vocal */
        for (char c : vocals)
            temp = temp || inp_character == c || inp_character == toupper(c);
        if (temp)
            std::cout << "Ist ein Vokal: " << inp_character << std::endl;
        else
            std::cout << "Ist ein Umlaut: " << inp_character << std::endl;
    }
    else 
        std::cerr << "Falsch Eingabe" << std::endl;
}
