#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
int **le_imagem(int **v1, char *imagem1)
{
	int i,n_lin,n_col,n;
	char ch;
	i=0;
	while (i<3)
	{
		ch=fgetc(imagem1);
		if (ch==10)
			i++;
	}
	fscanf(imagem1,"%d",n_col);
	v[0][0]=n_lin;
	printf("%e \n",v[0][0]);
	fscanf(imagem1,"%d",n_lin);
	v[1][1]=n_col;
	printf("%d",v[1][1]);
	v=(int *)malloc(sizeof(int)*n_col);
	for (i=0; i<n_col; i++)
	{
		v[i]=(int *)malloc(sizeof(int)*n_lin);
	}	
	return v1;
}
*/

void	segmenta_imagem(int **v1, int **v2)
{

}


void grava_imagem(int **v2, char *imagem2)
{

}


main (int n, char *arquivo[] )
{
	int **v1,**v2,sessoes;
	sessoes=arquivo[2];
	FILE *imagem1;
	imagem1=fopen(arquivo[1], "r");
	//v1=le_imagem(v1,imagem1);
	int i,n_lin,n_col;
	char ch;
	i=0;
	while (i<3)
	{
		ch=fgetc(imagem1);
		if (ch==10)
			i++;
	}
	fscanf(imagem1,"%d",n_col);
	printf("%e \n",n_col);
	fscanf(imagem1,"%d",n_lin);
	printf("%d",n_lin);
	v1=(int *)malloc(sizeof(int)*n_col);
	for (i=0; i<n_col; i++)
	{
		v1[i]=(int *)malloc(sizeof(int)*n_lin);
	}	
	close(imagem1);
	segmenta_imagem(v1,v2);
	free(v1);
	FILE *imagem2;
	imagem2=fopen(arquivo[3],"w+");
	grava_imagem(v2,imagem2);
	close(imagem2);
}
