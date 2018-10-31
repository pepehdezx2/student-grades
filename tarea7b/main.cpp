//
//  main.cpp
//  tarea7b
//  A01381334
//  Created by Jose Antonio on 30/10/17.
//  Copyright © 2017 Jose Antonio. All rights reserved.
//  casos de prueba
// 3 preguntas respuestas a b c alumnos por revisar 2 respuestas alumno 1 a c c debe mostrar 2 1 respuestas alumno 2 a b c debe mostrar 3 0


#include <iostream>
#include <string>
using namespace std;
void datos(char resp[], int n, int &k, char respAl[], int alumnos){
    for (int t=0; t<n; t++){ // ciclo que repite de 1 hasta el numero de respuestas
        if (resp[t]==respAl[t]){ // uncion que compara si es correcta la respuesta
            k++;
        }
    }
}
int main() {
    // declaracion de variables
    int n, alumnos, k, mal;
    char resp[20], respAl[20];
    cin >> n;
    for (int i=0; i<n; i++){ // ciclo que recibe respuestas correctas
        cin >> resp[i];
    }
    cin >> alumnos; // consigue numero de alumnos a revisar
    for (int c=0; c<alumnos; c++){ // ciclo para cada alumno
        for (int i=0; i<n; i++){ // ciclo que recibe respuestas de los alumnos
             k=0;
            cin >> respAl[i];
            // llama a la funcion
            datos(resp, n, k, respAl, alumnos);;
        }
        mal=n-k; // calcula errores
        cout << k << " " << mal <<endl; // muestra aciertos y errores
    }
    return 0;
}
