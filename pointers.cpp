#include <iostream>
#include <array>
#include <vector>

using namespace std;

void Function(int*);
void AddresFunction(int&);
string Anagrama(string);

int main(){

    // & -> Direccion de memoria
    // * -> Puntero
    int *pointerInt, *aux;
    int value = 20, secondValue = 40;
    

    
    cout << value << endl;
    cout << secondValue << endl;
    
    cout << "Value of value: " << value << endl;
    cout << "Value of pointerInt: " << pointerInt << endl;
    cout << "Addres of Value: " << &value << endl;
    cout << "Addres of pointerInt: " << &pointerInt << endl;

    // Pass by reference
    Function(&value);
    AddresFunction(value);

    return 0;
}

void Function(int*pointer)
{
    cout << *pointer << endl;
}

void AddresFunction(int &pointer) // Pass by reference
{
    cout << pointer << endl;
}

string Anagrama(string Palabra)
{
    int longitud_de_la_cadena = Palabra.size();
    string cadena = "Hola";
    return cadena;
}