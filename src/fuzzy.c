#include <stdio.h>
#include <math.h>

float triangulo(float a, float b, float c, float x) {

    if (x <= a || x >= c) {
        return 0.0;

    } else if (x == b) {
        return 1.0;

    } else if (x < b) {
        return (x - a) / (b - a);

    } else {
        return (c - x) / (c - b);
    }
}

float trapezio(float a, float b, float x){
    if (x >= b) {
        return 0.0;
    } else if (x <= a) {
        return 1.0;
    } else {
        return (b - x)/(b - a);
    }
}

float trapezio_invertido(float a, float b, float x){
    if (x <= a) {
        return 0.0;
    } else if (x >= b) {
        return 1.0;
    } else {
        return (x - a)/(b - a);
    }
}

float minimo(float a, float b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

float maximo(float a, float b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

float saida_lento(float a, float b, float v) {
    return trapezio(a, b, v);
}

float saida_normal(float a, float b, float c, float v) {
    return triangulo(a, b, c, v);
}

float saida_rapido(float a, float b, float v) {
    return trapezio_invertido(a, b, v);
}

float saida_parado(float a, float v) {
    return trapezio(0, a, v);
}

float saida(int conjunto, float a, float b, float c, float v){
    if (conjunto == 0) {
        return saida_lento(a, b, v);

    } else if (conjunto == 1) {
        return saida_normal(a, b, c, v);

    } else if (conjunto == 2) {
        return saida_rapido(a, b, v);
        
    } else {
        return saida_parado(a, v);
    }
}

float fuzzy(float a, float b, float c, float v_1, float v_2, float d) {
    float lento_1 = trapezio(a, b, v_1);
    float normal_1 = triangulo(a, b, c, v_1);
    float rapido_1 = trapezio_invertido(b, c, v_1);
    float lento_2 = trapezio(a, b, v_2);
    float normal_2 = triangulo(a, b, c, v_2);
    float rapido_2 = trapezio_invertido(b, c, v_2);
    float perto = trapezio(d, e, d);
    float medio = triangulo(d, e, f, d);
    float longe = trapezio_invertido(e, f, d);
}