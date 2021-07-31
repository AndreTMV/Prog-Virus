#include <iostream>
using namespace std;
//Prototype functions
void Imprime_Numeros(int variable);

//Body functions
void imprime_numero()
{
   auto variable = 0;
   cout << "Dame algo a imprimir" << endl;
   cin >>  variable;
   cout << variable << endl;
   system("pause");
}

//int main()
//{
//
//   imprime_numero();
//}
//
//Always after the main, makes the program more efficient -- prototype style functions -- they're not always called unlike the body functions that always uses a space in memory
void Imprime_Numeros()
{
   auto variable = 0;
   cout << "Dame algo a imprimir" << endl;
   cin >>  variable;
   cout << variable << endl;
   system("pause");
}
