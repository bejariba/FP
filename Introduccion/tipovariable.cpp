// enteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
#include <string>
using namespace std;

int main() {
    // Manejo de punto decimal y separador de miles
    locale loc("");
    cout.imbue(loc);
    //declarar e imprimir
    //una variable string
    string texto0 = "Hola Mundo";
    cout << texto0 << endl; 

    //union de dos variables 
    // tipo string
    string tipoa = "Hello ";
    string tipob = "World!";
    string saludo = tipoa + tipob;
    cout << saludo << endl;
    //introducir un valor en una 
    //variable tipo string
    //e imprimirlo
    string nombre;
    cout << "Dame tu nombre: ";
    cin >> nombre;
    cout << "Hola " << nombre << endl;
    // introducir una linea
    cin.ignore();
    string nombreCompleto;
    cout << "Dame tu nombre completo ";
    getline(cin, nombreCompleto);
    cout << "Tu nombre Completo "
        << nombreCompleto << endl;
    // acceso a un caracter especifico
    cout << nombre[0] << endl;
    return 0;
}


