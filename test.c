#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stddef.h>
#include"test.h"

int main(int argc,char *argv[]){
	if(argc==2&&strcmp(argv[1],"-i")==0){
	  menu();		
	}
	
	if(argc==3&&strcmp(argv[1],"-f")==0&&strcmp(argv[2],"fichconf")==0){
	  modebatch();		
	}
	
	if(argc>1&&argc<=6){
		menuLigneCommande(argc,argv);
	}
	
}
