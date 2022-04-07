#include <vector>
#include <cstdlib>
#include <iostream>

#include "ordenacao.h"


/* *********************************************** */
/* *********************************************** */
void imprimeVetorIntervalo(std::vector<int> v, int i , int f) {

	std::cout << "-----------------------------------------------------------------" << std::endl ;
	std::cout << "[ " << i << " , " << f << " ] " << std::endl;

	std::cout << "[ ";

	for (int k = 0 ; k < i ; k++) 
		std::cout << " . ";

	for (int k = i ; k <= f ; k++) 
		std::cout << " " << v[k] << " ,";

	for (int k =  f+1; k < v.size() ; k++) 
		std::cout << " . ";

	std::cout << " ]" << std::endl;
}

/* *********************************************** */
/* *********************************************** */
void ordenacaoMerge(std::vector<int> v) {

	mergeSort(v, 0, v.size()-1);
		
}

/* *********************************************** */
/* *********************************************** */
void mergeSort(std::vector<int> v, int i, int f) {

	imprimeVetorIntervalo(v, i, f);

	if (i == f)
		return;

	int metade = (i + f) / 2;

	mergeSort(v, i, metade);
	mergeSort(v, metade+1, f);

	merge(v, i, metade, f);	
}


/* *********************************************** */
/* *********************************************** */
void merge(std::vector<int> v, int i, int m, int f) {

}


/* *********************************************** */
/* *********************************************** */
void ordenacaoQuick (std::vector<int> v) {


}

/* *********************************************** */
/* *********************************************** */
void quickSort(std::vector<int> v, int i, int f) {


}

/* *********************************************** */
/* *********************************************** */
int pivot(std::vector<int> v, int i, int f) {

	return 0;

}

