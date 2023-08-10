/*

Triangular numbers are so called because of the equilateral triangular shape that they occupy when laid out as dots. i.e.

1st (1)   2nd (3)    3rd (6)
*          **        ***
           *         **
                     *

You need to return the nth triangular number. You should return 0 for out of range values:

0 --> 0
2 --> 3
3 --> 6
-10 --> 0

Um n�mero triangular � um n�mero natural que pode ser representado na forma de um tri�ngulo equil�tero.

O n-�simo n�mero triangular pode ser visto como o n�mero de pontos de uma forma triangular com lado formado por n pontos, o que equivale � soma dos primeiros n n�meros naturais.
*/

#include <stdio.h>

int main()
{
	int N_esimo, ResultadoNumeroTriangular;
	
	printf("Digite um n�mero para ser o N-�simo n�mero triangular: \n");
	scanf("%d", &N_esimo);
	
	ResultadoNumeroTriangular = FormulaDoNumeroTriangular(N_esimo);
	
	printf("O N_esimo n�mero triangular �: %2d.", ResultadoNumeroTriangular);
	
	return 0;
}

FormulaDoNumeroTriangular(int Ordinal_N_esimo)
{
	int NumeroTriangular = ((Ordinal_N_esimo)*(Ordinal_N_esimo+1)/2);
	
	return(NumeroTriangular);	
}

