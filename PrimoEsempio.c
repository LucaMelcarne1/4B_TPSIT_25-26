#include <stdio.h>

int main() {
	int num1=4; //dichiarazione variabili
	char sezione='b';
	//commento su una riga
	/*
		commento su più righe
	*/
	printf("ISTITUTO SALVEMINI\n"); //stampa un messaggio tra " " -  \n stampa a capo
	//%d indica che stampiamo un numero intero
	//%f indica che stampiamo un numero di tipo float
	//%c indica che stampiamo un carattere
	printf("Ciao, sono un alunno della classe %d %c",num1,sezione);
	
	
	return 0;
}
