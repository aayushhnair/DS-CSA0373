/*Matrix Multiplication*/

#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,k;
	int rows,col;
	printf("Enter the Number of Rows: ");
	scanf("%d",&rows);
	printf("Enter the Number of Columns: ");
	scanf("%d",&col);
	printf("\nMatrix One\n");
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			printf("Enter Value %d of %d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}printf("\n");
	}
	printf("\nMatrix Two\n");
		for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			printf("Enter Value %d of %d: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}printf("\n");
	}
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
		mul[i][j]=0;
		for(k=0;k<col;k++){
			mul[i][j]+=a[i][k]*b[k][j];}
		}
	}
	printf("\n\tResult Matrix\n\t------------- \n");
	printf("\n");
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			printf("\t %d",mul[i][j]);}
		printf("\n\n");
}}
