#include<stdio.h>

int main(){	
	float pesoAviao, comprimentoPista, velocidadeVento, altitudeAeroporto, pistaCorrigida;
	
	printf("Digite o peso do aviao em KG: ");
	scanf("%f", &pesoAviao);
	
	printf("Digite o comprimento da pista em M: ");
	scanf("%f", &comprimentoPista);
		
	printf("Digite a velocidade do vento em KM/H: ");
	scanf("%f", &velocidadeVento);
	
	printf("Digite a altitude do aeroporto: ");
	scanf("%f", &altitudeAeroporto);
	
	if((pesoAviao <= 100000 && comprimentoPista >= 1500) || (pesoAviao > 100000 && comprimentoPista >= 2000))
	{
		if(velocidadeVento <= 30)
		{
			if(altitudeAeroporto <= 1000 && comprimentoPista >= 1500)
			{
				printf("O aviao pode decolar!");	
			}
			else
			{
				pistaCorrigida = comprimentoPista + altitudeAeroporto - 1000;
				printf("O aviao precisa de %1.f M de pista para decolar!", pistaCorrigida);
			}
		}
		else
		{
			printf("O aviao nao pode decolar devido a alta velocidade do vento!");
		}
	}
	else{
		printf("O aviao nao pode decolar devido ao comprimento insuficiente da pista!");
	}
	
	return 0;
}
