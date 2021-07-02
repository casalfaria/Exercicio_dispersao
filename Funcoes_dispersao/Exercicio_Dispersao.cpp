#include <iostream>
#include <vector>
#include "Funcoes.h"

//Exercicio Dispersao - Carlos Alberto Faria Ferreira

int main() {

    std::vector<double> data = { 5,6,7,8,11,2,5,30,3,4,9,5,11,5,6,11,17,18,1,15,10,4,19,11,11 };
   

    //Intervalo
    std::pair<double, double> I = interval(data);
    std::cout << "O conjunto de dados esta compreendido no intervalo [" << I.first<<","<<I.second<< "]"<<std::endl;


    //Variancia
    std::cout<<"A varianca do conjuntos de dados e " << variance(data) << std::endl;


    //Desvio padrao
    std::cout << "O desvio padrao conjuntos de dados e " << std_dev(data) << std::endl;

    return 0;


}

