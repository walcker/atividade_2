#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <new>
#include <random>
#include <vector>
#include <algorithm>

using namespace std;

int busca_binaria(int vetor[9], int valorProcurado, int *posicaoEncontrada){

    int esquerda = 0;       //Limite da esquerda
    int direita = 8;  //Limite da direita
    int meio = (esquerda + direita)/2;               //Meio onde fica o cursor

    while(vetor[meio] != valorProcurado){
        //Quando o valor do meio é encontrado
        if(valorProcurado == vetor[meio]){
            *posicaoEncontrada = meio;
            return meio;
        //Ajustando o nomo meio
        }else if(vetor[meio] < valorProcurado){
            meio = (meio + direita)/2;
        }else if(vetor[meio] > valorProcurado){
            meio = (meio + direita)/2;
        }else{
            return -1;
        }

    return 1;
    }
}


int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

  //Criando vetor
  int vetor[9] = {5, 7, 12, 14, 25, 30, 35, 37, 50};
  int aux, n;
  int valorProcurado, posicao, cont, posicaoEncontrada;

  //Busca sequencial crescente
  for(int i = 0; i < 9; i++){
    if(vetor[i] == 30){
      cout << "O número 30 pertence ao vetor na procura sequencial crescente";
    }
  }

  cout << endl;

  //Busca sequencial decrescente
  for(int i = 9; i > 0; i--){
    if(vetor[i] == 30){
      cout << "O número 30 pertence ao vetor na procura sequencial decrescente";
    }
  }

  cout << endl;

  //Busca binária
  valorProcurado = 30;
  if(busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1){
        cout << "O valor 30 foi encontrado na iteração: " << posicao << endl;
    }else{
        cout << "O valor não foi encontrado." << endl;
    }

    //Busca sequencial crescente
    aux = 0;
  for(int i = 0; i < 9; i++){
    if(vetor[i] == 13){
      cout << "O número 30 pertence ao vetor na procura sequencial crescente";
    }else{
      aux++;
    }
    if(aux == 9){
      cout << "O número 13 não foi encontrado." << endl;
    }
  }

  //Busca sequencial decrescente
  aux = 0;
  for(int i = 9; i > 0; i--){
    if(vetor[i] == 13){
      cout << "O número 30 pertence ao vetor na procura sequencial decrescente";
    }else{
      aux++;
    }
    if(aux == 9){
      cout << "O número 13 não foi encontrado." << endl;
    }
  }

  //Busca binária
  valorProcurado = 13;
  if(busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == -1){
        cout << "O valor 13 foi encontrado na iteração: " << posicao << endl;
    }else{
        cout << "O valor 13 não foi encontrado." << endl;
    }

    return 0;
}