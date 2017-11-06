#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int k,l,prihvat,br,j=0,dom[50],gos[50],traka[50];
	int brojek,i=0;
	printf("\nOvaj program su osmislili i realizovali stonoteniseri Zorica Jelic i Aca Todorovic");
	printf("\nOvo je program za pravljenje tabela parova i kola za turnire u raznim sportovima");
	printf("\nUnesi broj ekipa koliko ucestvuje na turniru ");
	scanf("%d",&brojek);br=brojek;
	for(i=0;i<brojek-1;i++){traka[i]=i+1;}
	for(i=0;i<brojek-1;i++){traka[brojek-1+i]=i+1;}
	printf("\nNa turniru ucestvuje %d ekipa",brojek);
	
	if(brojek%2==0)
		{printf("\nbroj ekipa je paran");printf("\nbroj kola je %d",brojek-1);
		printf("\nbroj meceva u svakom kolu je  %d",brojek/2);
		printf("\na ukupan broj meceva na turniru je %d",(brojek-1)*brojek/2);
	for(j=1;j<=brojek/2;j++)
	{//neparna kola
	printf("\n\nParovi %d. kola su:",j*2-1);
	dom[0]=j;gos[0]=brojek;printf("%d:%d  ",dom[0],gos[0]);
	for(i=1;i<brojek/2;i++)
	dom[i]=dom[i-1]+1;
	//gosti
	prihvat=dom[brojek/2-1];
	for(i=1;i<brojek/2;i++)
	gos[brojek/2-i]=traka[prihvat-1+i];
	//stampa samo
	for(i=1;i<brojek/2;i++)
	printf("%d:%d  ",dom[i],gos[i]);
	//parna kola
	if((j*2)<brojek){	printf("\n\nParovi %d. kola su:",j*2);
		dom[0]=brojek;printf("  %d:%d  ",dom[0],gos[0]=brojek/2+j);
		for(i=1;i<brojek/2;i++)
	{gos[i]=gos[i-1]-1;dom[i]=traka[gos[0]-1+i];printf("   %d:%d  ",dom[i],gos[i]);}
		}
		}
	}	
		
	











	   else {
	   printf("\nbroj ekipa je neparan, pa u svakom kolu jedna ekipa ili igrac odmara pa zato ima %d kola",brojek);
	   printf("\nbroj meceva u svakom kolu je  %d",((brojek+1)/2)-1);
	   printf("\na ukupan broj meceva na turniru je %d",(((brojek+1)/2)-1)*brojek); 
	   brojek=brojek+1;
	   for(i=0;i<brojek-1;i++)traka[i]=i+1;
	for(i=0;i<brojek-1;i++)traka[brojek-1+i]=i+1;
		for(j=1;j<=brojek/2;j++)
	{//neparna kola
	printf("\n\nParovi %d. kola su:",j*2-1);
	dom[0]=j;gos[0]=brojek;printf("%d -slobodan  ",dom[0]);
	for(i=1;i<brojek/2;i++)
	dom[i]=dom[i-1]+1;
	//gosti
	prihvat=dom[brojek/2-1];
	for(i=1;i<brojek/2;i++)
	gos[brojek/2-i]=traka[prihvat-1+i];

	//stampa samo
	for(i=1;i<brojek/2;i++)
	printf("%d:%d  ",dom[i],gos[i]);

	//parna kola
	if((j*2)<brojek){	printf("\n\nParovi %d. kola su:",j*2);
		dom[0]=brojek;printf("%d -slobodan  ",gos[0]=brojek/2+j);
		for(i=1;i<brojek/2;i++)
	{gos[i]=gos[i-1]-1;dom[i]=traka[gos[0]-1+i];printf("   %d:%d  ",dom[i],gos[i]);}
		}
		}
	   //kraj za neparan broj ekipa
	  
	   }
system("pause");
	return 0;
	
}
