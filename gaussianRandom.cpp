#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

double gaussianRandom();
double randomDouble();

double gaussian_rand[50];



int main()
{
	for (int i = 0; i <= 50; i++) {
		gaussian_rand[i] = gaussianRandom();
	}


	sort(&gaussian_rand[0], &gaussian_rand[50]);

	for (int i = 0; i <= 50; i++) {
		printf("%f ", gaussian_rand[i]);
	}

}



double gaussianRandom()
{
	double v1, v2, s;

	do {
		v1 = 2 * randomDouble() - 1;
		v2 = 2 * randomDouble() - 1;
		s = v1 * v1 + v2 * v2;
	} while (s >= 1 || s == 0);

	s = sqrt((-2 * log(s)) / s);

	return v1 * s;
}


double randomDouble(void) {
	return (double)rand() / RAND_MAX;
}