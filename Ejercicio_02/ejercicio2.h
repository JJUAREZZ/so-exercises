#ifndef EJERCICIO2_H_
#define EJERCICIO2_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef FILE* archivo;

typedef enum{
	read,
	write,
	append
}modo_de_apertura;

// Lista

typedef struct elemento_lista{
	char* cadena;
	struct elemento_lista* siguiente;
}lista;


//funciones

ARCHIVO* abrir(char* nombre_archivo, modo_de_apertura modo);
void cerrar(ARCHIVO* puntero);
char* leer_linea(ARCHIVO* puntero, int numero_de_linea);
void operar(void(*puntero_a_funcion)(char*),ARCHIVO* puntero); //toma una funcion void que necesita un char* como parametro
void operar_lista(void(*puntero_a_funcion)(char*),ARCHIVO* puntero,lista* puntero_de_lista); //igual que el anterior, pero toma una lista de strings

#endif