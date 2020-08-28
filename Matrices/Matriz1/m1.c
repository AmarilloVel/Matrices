#include<stdio.h>
#include<stdlib.h>

float mat[5][6]={{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}};
int fil=5;
int col=6;


void capt(float matriz[][col]){
		
	int ren;
	printf("Renglon capturar: ");
	scanf("%d",&ren);

	for(int i=0; i<5; i++){
	
		int num;
		printf("Num[%d]: ",i+1);
		scanf("%d",&num);
	
		mat[ren][i]= num;

	}

		
}


void mostrar(float matriz[][col]){

	for(int i=0; i<5; i++){
		for(int j=0; j<6; j++){
		
			printf("[%.2f] ",mat[i][j]);
		
		}
		printf("\n");
	
	}



}


void llenar(float matriz[][col]){

	for(int i=0; i<4; i++){
		for(int j=0; j<5; j++){
		
			matriz[i][j]= rand() % 10;
		
		}
	
	
	
	}

}

void prom(float matriz[][col]){


	

	for(int i=0; i<5; i++){
	
		matriz[i][5]=(matriz[i][0]+matriz[i][1]+matriz[i][2]+matriz[i][3]+matriz[i][4])/5;

	
	}


}

void prompar(float matriz[][col]){

	for(int i=0; i<5; i++){
	
		matriz[4][i]= (matriz[0][i]+matriz[1][i]+matriz[2][i]+matriz[3][i])/4;
	
	}


}


void califsem(float matriz[][col]){


	for(int i=0; i<5; i++){
	
	
		matriz[4][5]= (matriz[i][0]+matriz[i][1]+matriz[i][2]+matriz[i][3]+matriz[i][4])/5;
	
	}

}
void llenaro(float matriz[][col]){
	
	for(int i=0; i<5; i++){
		for(int j=0; j<6; j++){
		
			matriz[i][j]=0;
		}
	
	}

}



void main(){

        int opc=0;
        do{


                printf("\n\nCapturar valores---1\n");
                printf("Llennar aleatorio----2\n");
                printf("Obtener promedioos---------3\n");
                printf("Calcular prom por col-------4\n");
                printf("Obtener promedio sem----------5\n");
                printf("Llenar con 0----------6\n");
		printf("Imprimir matriz ------7\n");
                printf("Salir----------8\n");
                printf("Elegir opcion: \n");
                scanf("%d",&opc);

                switch(opc){

                        case 1: capt(mat);
                                break;
                        case 2: llenar(mat);
                                break;
                        case 3: prom(mat);
                                break;
                        case 4: prompar(mat);
                                break;
                        case 5: califsem(mat);
                                break;
                        case 6: llenaro(mat);
                               break;
                        case 7: mostrar(mat);
                                break;
			case 8: printf("salir");
				break;
                        default: printf("Niguna opc");
                                 break;
                }

        }while(opc!=8);

}