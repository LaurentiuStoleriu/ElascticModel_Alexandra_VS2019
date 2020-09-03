#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cmath>
#include <stdio.h>

using namespace std;

#define DIM 2791

int main(void)
{
	char cale_in[100] = "D:\\Simulari\\generare";
	char cale_out[100] = "D:\\Simulari\\rezultate";

	char fisier_in[200], fisier_out[200];

	sprintf(fisier_in, "%s\\hexagon%d.dat", cale_in, DIM);
	
	ifstream fin(fisier_in);
	// aici il pot citi
	fin.close();


	for (int t = 0; t < 10000; t++)
	{
		//calcule
		if (!(t % 1000))
		{
			sprintf(fisier_out, "%s\\rez_hex%06d_t%06d.dat", cale_out, DIM, t);
			ofstream fout(fisier_out);
			//aici pot scrie rezultate
			fout.close();
		}
	}

	return 0;
}




