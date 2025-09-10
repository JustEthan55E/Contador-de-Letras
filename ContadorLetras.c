#include <stdio.h>
#include <string.h>

int main()
{
	int vogais = 0, consoantes = 0;
	char palavra[25];

	printf("Escreva uma palavra: \n");
	scanf("%s", palavra);

	size_t letras = strlen(palavra);

	for (int i = 0; i < (int)letras; i++)
	{
		char letra = palavra[i];
		if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
			letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
		{
			vogais++;
		}
		else
		{
			consoantes++;
		}
	}


	printf("A palavra %s\n", palavra);
	printf("Tem %d letras\n", letras);
	printf("Tem %d vogais\n", vogais);
	printf("Tem %d consoantes\n", consoantes);
}
