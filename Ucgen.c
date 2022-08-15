#include <stdio.h>
int main(void){
	int AnaSayi;
	printf("Sayi giriniz ---> ");scanf("%d",&AnaSayi);
	int Bosluk = AnaSayi -1;
	int Yazilan;
	int i,j,k;
	
	
	for(i=AnaSayi;i>0;i--){
		for(j=Bosluk;j>0;j--){
			printf("  ");
			if(AnaSayi>=10){
				printf(" ");
			}
			
		}
		for(Yazilan=AnaSayi-Bosluk,k=1;k<=Yazilan;k++){
			if(k<10 && AnaSayi>=10){
				printf(" ");
			}
			printf("%d ",k);
		}
		printf("\n");
		Bosluk--;
	}
	
	//Adem Turgut
}
