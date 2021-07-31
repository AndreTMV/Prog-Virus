//#include <iostream>
//using namespace std;
//
//int main(){
//   int filas = 0, columnas = 0, numero_de_matrices = 0, numero_de_matrices_reales = 0;
//   cout << "Numero de filas:" << endl;
//   cin >> filas;
//   cout << "Numero de columnas:" << endl;
//   cin >> columnas;
//   cout << "Por el momento este programa solo puede sumar dos matrices, porfavor no ingreses mas." << endl;
//   cout << "Numero de matrices:" << endl;
//   cin >> numero_de_matrices;
//
//   int matriz[filas][columnas][numero_de_matrices], matriz_sumadas[filas][columnas][1];
//   for(int i = 0; i < numero_de_matrices; i++) 
//   {
//      cout << "Ingresando valores de la matriz " << i + 1 << endl;
//      for(int j = 0; j < filas; j++)
//      {
//         for(int z = 0; z < columnas; z++){
//            cin >> matriz[j][z][i];
//         }
//      }
//   }
//   for(int i = 0; i == 0;  i++)
//   {
//      for(int j = 0; j < filas; j++)
//      {
//         for(int z = 0; z < columnas; z++)
//         {
//            matriz_sumadas[j][z][0] = matriz[j][z][i] + matriz[j][z][i+1];
//         }
//      }
//   }
//   for(int i = 0; i == 0; i++)
//   {
//      for(int j = 0;j < filas; j++)
//      {
//         for(int z = 0; z < columnas; z++)
//         {
//            cout << matriz_sumadas[j][z][i] << " ";
//         }
//         cout << endl;
//      }
//   }
//   /*char asciiTable[127];
//   for (int i = 0; i < 127; i++)
//   {
//      asciiTable[i] = i;
//      cout << asciiTable[i] << endl;
//   }*/
//   return 0;
//}
