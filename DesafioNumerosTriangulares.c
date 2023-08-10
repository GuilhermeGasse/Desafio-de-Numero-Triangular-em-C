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

Um número triangular é um número natural que pode ser representado na forma de um triângulo equilátero.

O n-ésimo número triangular pode ser visto como o número de pontos de uma forma triangular com lado formado por n pontos, o que equivale à soma dos primeiros n números naturais.
*/

#include <stdio.h>

int main()
{
	int N_esimo, ResultadoNumeroTriangular;
	
	printf("Digite um número para ser o N-ésimo número triangular: \n");
	scanf("%d", &N_esimo);
	
	ResultadoNumeroTriangular = FormulaDoNumeroTriangular(N_esimo);
	
	printf("O N_esimo número triangular é: %2d.", ResultadoNumeroTriangular);
	
	return 0;
}

FormulaDoNumeroTriangular(int Ordinal_N_esimo)
{
	int NumeroTriangular = ((Ordinal_N_esimo)*(Ordinal_N_esimo+1)/2);
	
	return(NumeroTriangular);	
}

