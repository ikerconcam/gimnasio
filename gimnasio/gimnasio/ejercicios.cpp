#include "ejercicios.h"

double calcularCalorias(string tipo, double altura, int edad, double peso, int tiempo, double velocidad, string musculo, string ejercicio_musculo, int series, int repeticiones, double peso_carga) {
    double calorias = 0;
    if (tipo == "cardio") {
        double MET = 10; // El MET, o Equivalente Metabólico de la Tarea, es una unidad que se utiliza para estimar la cantidad de energía que una persona gasta mientras realiza una actividad física
        calorias = tiempo * (MET * 3.5 * peso / 200);
    }
    else if (tipo == "pesas") {
        calorias = series * repeticiones * peso_carga * 0.01;
    }
    return calorias;
}
