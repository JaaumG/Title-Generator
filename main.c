#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SYMB '#';


void main() {
	char letra[5][5], palavra[5][100];
	char let[26];
	int num;
	int i, j, l, k=0;
	for(i = 0; i<5; i++){
		for(j=0;j<100;j++){
			palavra[i][j]=' ';
		}
	}
	void limparMatriz(){
		for(i = 0; i<5; i++){
			for(j=0;j<5;j++){
				letra[i][j]=' ';
			}
		}
	}
	void transferirMatriz(){
		for(i = 0; i<5; i++){
			for(j=0;j<5;j++){
				
				palavra[i][j+(l*5)+k] = letra[i][j];
			}
		}
		k++;	
	}
	int op;
	printf("Digite 1 para letra 2 para numero\n");
	scanf("%d", &op);
	if(op==2){
		printf("Entre com um numero\n");
		scanf("%d",&num);
		itoa(num, let, 10);	
	}
	if(op==1){
		printf("Entre com uma letra  ou palavra\n");
		scanf("%s",&let);
	}
	for(l =0;l<sizeof(let);l++){
		switch(let[l]){
			case('a'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i<5 && i >0 &&j==0) || (i<5&&i>0&&j==4) || (i==2&&j<5)|| (i==0&&j<4&&j!=0)) {
							letra[i][j]=SYMB;	
						}
					}
				}	
				transferirMatriz();
			break;
			case('b'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>=0&&j==0 || (i<2&&j==4)|| (i>2&&j==4)|| (i==4&&j<4 )|| (i==2&&j<4 )|| (i==0&&j<5 )) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;	
			case('c'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i>0&&j==0&&i!=4) || (i==0&&j<5&&j>0 )|| (i==4&&j<5&&j!=0 )) {
							letra[i][j]=SYMB;	
						}
					}
				}	
				transferirMatriz();
			break;
			case('d'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>=0&&j==0 || ((i<4&& i>0 &&j==4)&& (i>0&&j==4))|| (i==4&&j<4 )| (i==0&&j<4 )) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case ('e'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i==0 && j<=3)||(i==2 && j<=2)||(i==4 && j<=3)||(i==1 && j==0)||(i==3 && j==0)) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case ('f'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i==0 && j<=3)||(i==2 && j<=2)||(i==4 && j==0)||(i==1 && j==0)||(i==3 && j==0)) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('g'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>0&&j==0 || (i==3&&j==4) || (i==2&&j==3)|| (i==0&&j<5 )|| (i==4&&j<5 )) {
							letra[i][j]=SYMB;	
						}
					}
				}	
				transferirMatriz();
			break;
			case('h'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>=0&&j==0 || (i>=0&&j==4)|| (i==2&&j<5 )) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('i'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i<5&&j==2) {
							letra[i][j]=SYMB;	
						}
					}	
				}
				transferirMatriz();	
			break;
			case('j'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i<5&&j==2) ||  (i==0&&j<5 )||(i==4 && j<3)) {
							letra[i][j]=SYMB;	
						}
					}	
				}
			transferirMatriz();	
			break;
			case('k'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i<5 &&j==0) || (i==2 &&j==1)|| (i==3 &&j==2)|| (i==4 &&j==3|| (i==1 &&j==2)|| (i==0 &&j==3))) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('l'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>=0&&j==0 || (i==4&&j<5 )) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('m'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>=0&&j==0 || (i>=0&&j==4) || (i==1 && j==1)|| (i==1 && j==3)|| (i==2 && j==2)) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('n'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>=0&&j==0 || (i>=0&&j==4) || (i==1 && j==1)|| (i==2 && j==2)|| (i==3 && j==3)) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('o'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>0&&j==0&&i!=4 || (i>0&&j==4&&i!=4) || (i==0&&j<5&&j!=4&&j!=0 )|| (i==4&&j<5&&j!=4&&j!=0 )) {
							letra[i][j]=SYMB;	
						}
					}
				}	
				transferirMatriz();
			break;
			case('p'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>=0&&j==0 || (i<2&&j==4)|| (i==2&&j<4 )|| (i==0&&j<5 )) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('q'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>0&&j==0&&i!=4 || (i>0&&j==4&&i!=4) || (i==0&&j<5&&j!=4&&j!=0 )|| (i==4&&j<5&&j!=4&&j!=0 ) || (i==3&&j==3)) {
							letra[i][j]=SYMB;	
						}
					}
				}	
				transferirMatriz();
			break;
			case('r'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>=0&&j==0 || (i<2&&j==4)|| (i==2&&j<4 )|| (i==0&&j<5 ) || ((i==j)&&(i>2))) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('s'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i==4&&j<4 ) || (i==0&&j<5&&j>0) ||(i==3&&j==4)||(i==2&&j<4&&j>0)||(i==1&&j==0)) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('t'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i<5&&j==2) ||  (i==0&&j<5 )) {
							letra[i][j]=SYMB;	
						}
					}	
				}
				transferirMatriz();	
			break;
			case('u'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>=0&&j==0 || (i>=0&&j==4)|| (i==4&&j<5 )) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('v'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i==0&&j==0)||(i==0&&j==4)|| (i==1&&j==0)||(i==1&&j==4)||(i==2&&j==3)||(i==2&&j==1)||(i==3&&j==3)||(i==3&&j==1)||(i==4&&j==2)) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('w'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>=0&&j==0 || (i>=0&&j==4) || (i==3 && j==1)|| (i==3 && j==3)|| (i==4 && j==2)) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('x'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(((i==j)||(j==4-i))) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('y'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i==5-j)||(i==1&&j==0)||(i==2&&j==1)) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case('z'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i==4&&j<5 ) || (i==0&&j<5) || (i==4-j)) {
							letra[i][j]=SYMB;	
						}
					}
				}
			transferirMatriz();
			break;
			case(' '):
				limparMatriz();
				transferirMatriz();
			break;
			case('1'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i<5&&j==2)||(i==4&&j>0&&j<4)||(i==1&&j==1)) {
							letra[i][j]=SYMB;	
						}
					}
				}	
				transferirMatriz();	
			break;
				case('2'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i==4&&j<5 ) || (i==0&&j<4&&j>0) || (i==4-j&&i>0)||(i==1&&j==0)) {
							letra[i][j]=SYMB;	
						}
					}
				}
				transferirMatriz();	
			break;
			case('3'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i==4&&j<4&&j>0 ) || (i==0&&j<4&&j>0) || (i==2&&j<4&&j>0)||(i==1&&j==4)||(i==3&&j==4)) {
							letra[i][j]=SYMB;	
						}
					}
				}
				transferirMatriz();	
			break;
			case('4'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((j==3&&i>-1)||(j==2&&i==1)||(j==1&&i==2)||(j>-1&&i==3)) {
							letra[i][j]=SYMB;	
						}
					}
				}
				transferirMatriz();	
			break;
			case('5'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((j==0&&i>-1&&i<3)||(i==0&&j>-1)||(i==2&&j<4)||(i==3&&j==4)||(i==4&&j<4)) {
							letra[i][j]=SYMB;	
						}
					}
				}
				transferirMatriz();	
			break;
			case('6'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((j==0&&i==3)||(i==0&&j>0&&j<4)||(i==2&&j<4&&j>0)||(i==3&&j==4)||(i==4&&j<4&&j>0)||(i==1&&j==0)) {
							letra[i][j]=SYMB;	
						}
					}
				}
				transferirMatriz();	
			break;
			case('7'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if( (i==0&&j<5) || (i==4-j)) {
							letra[i][j]=SYMB;	
						}
					}
				}
				transferirMatriz();	
			break;
			case('8'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((j==0&&i==3)||(i==0&&j>0&&j<4)||(i==2&&j<4&&j>0)||(i==3&&j==4)||(i==4&&j<4&&j>0)||(i==1&&j==0)||(i==1&&j==4)) {
							letra[i][j]=SYMB;	
						}
					}
				}
				transferirMatriz();	
			break;
			case('9'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if((i==0&&j>0&&j<4)||(i==2&&j<4&&j>0)||(i==3&&j==4)||(i==4&&j<4&&j>0)||(i==1&&j==0)||(i==1&&j==4)) {
							letra[i][j]=SYMB;	
						}
					}
				}
				transferirMatriz();	
			break;
			case('0'):
				limparMatriz();
				for(i = 0; i<5; i++){
					for(j=0;j<5;j++){
						if(i>0&&j==0&&i!=4 || (i>0&&j==4&&i!=4) || (i==0&&j<5&&j!=4&&j!=0 )|| (i==4&&j<5&&j!=4&&j!=0 )||(i==4-j&&i!=0&&i!=4)) {
							letra[i][j]=SYMB;	
						}
					}
				}
				transferirMatriz();	
			break;
		}
	}
		for(i = 0; i<5; i++){
			for(j=0;j<100;j++){
				printf("%c", palavra[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
	
}
