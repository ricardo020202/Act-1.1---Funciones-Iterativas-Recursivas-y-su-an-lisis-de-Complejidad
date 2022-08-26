// =================================================================
//
// File: activity.h
// Author: Jos� Ricardo Rosales Casta�eda - A01709449
// Date: 24/0/2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calula la sumatoria de 1 hasta un valor n, 
// utilizando un metodo iterativo.
//
// @param n	El valor maximo o limite de la sumatoria.
// @return	Resultado de la sumatoria.
// @Complexity	O(n)
// @Justification	Es un ciclo en el cual a la variable de control
//					se le suma un valor constante
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int suma = 0;
	for(int i = 0; i <= n; i++){
		suma += i;
	}
	return suma;
}

// =================================================================
// sumaRecursiva. Calula la sumatoria de 1 hasta un valor n, 
// utilizando un metodo recursivo.
//
// @param n	El valor maximo o limite de la sumatoria.
// @return	Resultado de la sumatoria.
// @Complexity	O(n)
// @Justification	Una funcion recursiva en la cual solo se llama
//					una vez a la misma función
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	if( n <= 0 ) {
        return 0;
    }
    return n + sumaRecursiva(n-1);
}

// =================================================================
// sumaDirecta. Calula la sumatoria de 1 hasta un valor n, 
// utilizando un metodo directo.
//
// @param n	El valor maximo o limite de la sumatoria.
// @return	Resultado de la sumatoria.
// @Complexity	O(1)
// @Justification	No imorta el tamaño de la entrada, los pasos 
//					siempre van a ser los mismos.
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	int suma = n*(n+1)/2;
	return suma;
}

#endif /* ACTIVITY_H */
