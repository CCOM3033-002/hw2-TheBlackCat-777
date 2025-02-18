/*
Asignación 2: Suma de Fracciones
Nombre: Raul S. Rivera Pizarro
Núm. Est: 801-24-2663
*/
#include<iostream>
using namespace std;

int main(){
  
  // Declaracion de variables
  double numerador_fraccion1;
  double denominador_fraccion1;
  double numerador_fraccion2;
  double denominador_fraccion2;
  double numerador_final;
  double denominador_final;

  //Desplegar el proposito del programa
  cout << "Este programa suma dos fracciones." << endl;

  //Entrar los numeros de las fracciones
  cout << "Entre el numerador de la 1ra fracción: ";
  cin >> numerador_fraccion1;
  cout << "Entre el denominador de la 1ra fracción: ";
  cin >> denominador_fraccion1;
  cout << "Entre el numerador de la 2da fracción: ";
  cin >> numerador_fraccion2;
  cout << "Entre el denominador de la 2da fracción: ";
  cin >> denominador_fraccion2;

  //Calcular resultado
  numerador_final = numerador_fraccion1 * denominador_fraccion2 + numerador_fraccion2 * denominador_fraccion1;
  denominador_final = denominador_fraccion1 * denominador_fraccion2;

  //Desplegar resultado
  cout << "La suma es " << numerador_final << "/" << denominador_final << endl;



  return 0;
}
