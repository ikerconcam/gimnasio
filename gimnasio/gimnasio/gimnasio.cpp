#include <iostream>
#include "ejercicios.h"
using namespace std;

int main() {
    string tipo;
    double altura;
    int edad;
    double peso;
    int tiempo;
    double velocidad;
    string musculo;
    string ejercicio_musculo;
    int series;
    int repeticiones;
    double peso_carga;

    cout << "Cuanto mides? (en cm): ";
    cin >> altura;
    cout << "Que edad tienes? (en años): ";
    cin >> edad;
    cout << "Cuanto pesas? (en kg): ";
    cin >> peso;
    cout << "Que tipo de ejercicio realizaras? (cardio/pesas): ";
    cin >> tipo;

    if (tipo == "cardio") {
        cout << "Cuantos minutos estaras corriendo?: ";
        cin >> tiempo;
        cout << "A que ritmo correras? (km/h): ";
        cin >> velocidad;
        series = 0;
        repeticiones = 0;
        musculo = "";
        ejercicio_musculo = "";
        peso_carga = 0;
    }
    else if (tipo == "pesas") {
        tiempo = 0;
        velocidad = 0;
        cout << "Que musculo entrenaras? (biceps/triceps/pecho/espalda/pierna/abdominal): ";
        cin >> musculo;
        int opcion;
        if (musculo == "biceps") {
            cout << "1. Curl con mancuerna\n";
            cout << "2. Curl con barra\n";
            cout << "3. Curl de concentracion\n";
        }
        else if (musculo == "triceps") {
            cout << "1. Extension de triceps con mancuerna\n";
            cout << "2. Press frances\n";
            cout << "3. Extension de triceps en polea alta\n";
        }
        else if (musculo == "pecho") {
            cout << "1. Press de banca\n";
            cout << "2. Press de banca inclinado\n";
            cout << "3. Aperturas con mancuernas\n";
        }
        else if (musculo == "espalda") {
            cout << "1. Peso muerto\n";
            cout << "2. Remo con barra\n";
            cout << "3. Dominadas\n";
        }
        else if (musculo == "pierna") {
            cout << "1. Sentadillas\n";
            cout << "2. Prensa de piernas\n";
            cout << "3. Curl de piernas\n";
        }
        else if (musculo == "abdominal") {
            cout << "1. Crunch abdominal\n";
            cout << "2. Plancha\n";
            cout << "3. Elevacion de piernas\n";
        }
        cout << "Que ejercicio haras de este musulo? (numero del ejercicio): ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            if (musculo == "biceps") ejercicio_musculo = "Curl con mancuerna";
            else if (musculo == "triceps") ejercicio_musculo = "Extension de triceps con mancuerna";
            else if (musculo == "pecho") ejercicio_musculo = "Press de banca";
            else if (musculo == "espalda") ejercicio_musculo = "Peso muerto";
            else if (musculo == "pierna") ejercicio_musculo = "Sentadillas";
            else if (musculo == "abdominal") ejercicio_musculo = "Crunch abdominal";
            break;
        case 2:
            if (musculo == "biceps") ejercicio_musculo = "Curl con barra";
            else if (musculo == "triceps") ejercicio_musculo = "Press frances";
            else if (musculo == "pecho") ejercicio_musculo = "Press de banca inclinado";
            else if (musculo == "espalda") ejercicio_musculo = "Remo con barra";
            else if (musculo == "pierna") ejercicio_musculo = "Prensa de piernas";
            else if (musculo == "abdominal") ejercicio_musculo = "Plancha";
            break;
        case 3:
            if (musculo == "biceps") ejercicio_musculo = "Curl de concentracion";
            else if (musculo == "triceps") ejercicio_musculo = "Extension de triceps en polea alta";
            else if (musculo == "pecho") ejercicio_musculo = "Aperturas con mancuernas";
            else if (musculo == "espalda") ejercicio_musculo = "Dominadas";
            else if (musculo == "pierna") ejercicio_musculo = "Curl de piernas";
            else if (musculo == "abdominal") ejercicio_musculo = "Elevacion de piernas";
            break;
        }
        cout << "Cuantas series haras?: ";
        cin >> series;
        cout << "Cuantas repeticiones por serie haras?: ";
        cin >> repeticiones;
        cout << "Cuanto peso levantaras? (en kg): ";
        cin >> peso_carga;
    }

    cout << "Las calorias quemadas son: " << calcularCalorias(tipo, altura, edad, peso, tiempo, velocidad, musculo, ejercicio_musculo, series, repeticiones, peso_carga) << endl;

    return 0;
}
