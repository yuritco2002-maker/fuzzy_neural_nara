#indef FUZZY_H
#define FUZZY_H

float triangulo(float a, float b, float c, float x);
float trapezio(float a, float b, float x);
float trapezio_invertido(float a, float b, float x);
float minimo(float a, float b);
float maximo(float a, float b);
float saida_lento(float a, float b, float v);
float saida_normal(float a, float b, float c, float v);
float saida_rapido(float a, float b, float v);
float saida(int conjunto, float a, float b, float c, float v);
float fuzzy(float v_1, float v_2, float d);