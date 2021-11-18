// implementar las funciones de libprueba.h aca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int saludar(char *name){

  // char saludo[100]= "Hola, ";
  // strcat(saludo, name);
  printf("Hola, %s\n", name);
  // return;
}

int potencia_de_dos(int n){
  int resultado = 1;
  for (size_t i = 0; i < n; i++) {
    resultado*= 2;
  }
  return resultado;
}

void print_array(int a[], int size){

}

void suma_vectorial(int u[], int v[], int result[], int n) {}


// realiza un cifrado por desplazamiento usando el entero key
// como cantidad de letras a desplazar
void cifrar(char word[], int key) {}
