#pragma once
#include<vector>


//Media
double mean(const std::vector<double>& data) {


	double soma = 0;
	int n = data.size();

	for (int i = 0; i < n; i++) {
		soma = soma + data[i];
	}

	return soma / data.size();
}


//Intervalo
std::pair<double, double> interval(const std::vector<double>& data) {
	double min = data[0];
	double max = 0;

	std::pair<double, double> Intervalo;

	for (int i = 0; i < data.size(); i++) {
		if (data[i] < min) {
			min = data[i];
		}

		if (data[i] > max) {
			max = data[i];
		}
	}

	Intervalo.first = min;
	Intervalo.second = max;


	return Intervalo;


}





//Variancia
double variance(const std::vector<double>& data) {
	double media = mean(data);
	double var =0, aux;

	for (int i = 0; i < data.size(); i++) {
		aux = (data[i] - media)* (data[i] - media);
		var = var + aux;
	}

	var = var / data.size();

	return var;
}


//Desvio Padrao
double std_dev(const std::vector<double>& data) {
	double sd, var;

	var = variance(data);
	sd = sqrt(var);

	return sd;
}
