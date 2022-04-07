#include <iostream>
#include <cstdlib>
#include <limits>
#include <algorithm>
#include <vector>

#include "ordenacao.h"

#define MAX 20


// ********************************************************************
// ********************************************************************
// ********************************************************************
int main() {

std::vector<int> v;

   std::cout << "tamanho do vetor = " << v.size() << std::endl;

   srand( time(NULL) );

   for (unsigned int i=0 ; i < MAX ; i++) 
      v.push_back(rand() % 100);
     
   std::cout << "#################################################################" << std::endl;
   std::cout << "conteudo de v:" << std::endl;

   imprimeVetorIntervalo(v, 0, v.size());

   ordenacaoMerge(v);

   std::cout << "#################################################################" << std::endl;
   std::cout << "conteudo de v ordenado: \n [ ";

   imprimeVetorIntervalo(v, 0, v.size());
   	
   return 0;        
}