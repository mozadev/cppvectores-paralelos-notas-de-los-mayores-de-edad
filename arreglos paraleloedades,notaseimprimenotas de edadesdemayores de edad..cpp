#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

using namespace std;
using namespace System;


/*Elaborar una programa en Lenguaje C que lea las Notas y las Edades de 10 estudiantes universitarios e 
imprima solo las Notas de aquellos que son mayores de edad.*/


void main()
{
	int *Vedades = new int[10];
	int *Vnotas = new int[10];
	//Llenar Arreglos Paralelos
	for (int i = 0; i <= 9; i++)
	{
		cout << "Ingrese Edad del alumno " << i + 1 << " : ";
		cin >> Vedades[i];
		cout << "Ingrese del alumno " << i + 1 << " : ";
		cin >> Vnotas[i];
	}
	//Mostrar Arreglos Paralelos notas
	for (int i = 0; i <= 9; i++)
		if(Vedades[i]>=18)
		cout<<"Edad y Nota "<< i + 1 << " son : " << Vedades[i] << " "<< Vnotas[i] << "\n";
	_getch();
}

