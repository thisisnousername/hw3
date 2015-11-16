/*
edited by: markus
     date: 2015-11-16
*/

#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void rrand(double* x, const int N){					//function that writes "random" values in x[i]
	for(int i=0; i<N; i++){
		int rand();
		x[i] = (rand()*1.0)/(RAND_MAX*1.0);
	}
}

void meanvar(double* x, const int N, double& mean, double& var){	//function that calculates mean and var
	mean=0; var=0;
	for(int i=0; i<N; i++)
		mean += x[i]/N;
	for(int i=0; i<N; i++)
		var += pow(x[i]-mean, 2.0)/N;
}

int main(){
	srand(time(NULL));
	const int N = 100;
	double p[N];
	double mean, var;

	rrand(p, N);

//	for(int i=0; i<N; i++)
//	cout << p[i] << endl;

	meanvar(p, N, mean, var);

	cout << "Mean = " << mean << endl;
	cout << "Variance = " << var << endl;

	return 0;
}
