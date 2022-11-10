#include <stdio.h>

int eh_primo(int numero) {
	if (numero <= 1) {
		return 0;
	}
	if (numero <= 3) {
		return 1;
	}
	if (numero % 2 == 0 || numero % 3 == 0) {
		return 0;
	}

	int i = 5;
	while (i * i <= numero) {
		if (numero % i == 0 || numero % (i + 2) == 0) {
			return 0;
		}
		i = i + 6;
	}

	return 1;
}

int main() {
	int entrada;
	scanf("%d", &entrada);
	if (eh_primo(entrada)) {
		printf("%d é um número primo\n", entrada);
	} else {
		printf("%d não é um número primo\n", entrada);
	}

	return 0;
}