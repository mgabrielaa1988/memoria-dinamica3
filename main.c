#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//declarar puntero a la estructura
//reservar espacio en memoria para el puntero

typedef struct{
    int legajo;
    char nombre[50];
    int nota;
}eRecursante;

void mostrarRecursante (eRecursante*);

eRecursante* newRecursante();//constructor por defecto

void nuevoRecursante(eRecursante*,int,char[],int);

int main()
{
    eRecursante* alumno;

    alumno = newRecursante();

    alumno = malloc(sizeof(eRecursante));

    if (alumno != NULL)
    {
        alumno->legajo = 101;
        strcpy(alumno->nombre,"Juan");
        alumno->nota = 7;

        mostrarRecursante(alumno);
    }
    else
    {
        printf("No hay espacio en memoria");
    }

    return 0;
}

void mostrarRecursante (eRecursante* r)
{
    printf("%d--%s--%d", r->legajo,r->nombre,r->nota);
}

eRecursante* newRecursante()
{
    eRecursante* alumno;
    alumno = (eRecursante*) malloc(sizeof(eRecursante));
    return alumno;
}

void nuevoRecursante(eRecursante* alumno,int legajo,char nombre[],int nota)
{
        alumno->legajo = legajo;
        strcpy(alumno->nombre,nombre);
        alumno->nota = nota;
}
