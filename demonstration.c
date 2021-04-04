#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stddef.h>
#include"fonctionAllocations.c"

int main(){
	printf("Vous avez reservé %d bits\n",initMemory(1500));
	printf("Votre zone de memoire: %p jusqu'a %p\n",espaceMemoireDebut,espaceMemoireFin);
	void *p = myalloc(300);
	void *p1 = myalloc(100);
	void *p2 = myalloc(500);
	printf("%d bits\n",myfree(p));
	printf("%d bits\n",myfree(p2));
	void *p3 = myalloc(100);
	void *p4 = myalloc(100);
	void *p5 = myalloc(300);
	printf("%d bits\n",myfree(p1));
	void *p6 = myalloc(600);

	listeAllocation *defil = espaceLibres;
	while(defil!=NULL){
		printf("adresse %p/%d bits liberes\n",defil->debutAlloc,defil->taille*8);
		defil=defil->allocSuivant;		
	}
	
	printf("Les allocations restantes:\n");
	while(listeAllocations!=NULL){
		printf("allocation :%p\n",listeAllocations->debutAlloc);
		listeAllocations=listeAllocations->allocSuivant;		
	}
}

