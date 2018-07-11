
#include <stdio.h>

main()
{
/*DEKLARASI*/
int n,i,j,l,k,f;		
char ulang;

/*DESKRIPSI*/
do
{
system("cls");
do
{
	do
	{
		system("cls");
		printf("masukan n = ");scanf("%d",&f);
	}
	while(f%2==0);
}
while(f<5);
n=div(f,2)+1;																				//nilai n dibagi 2 +1 untuk menyesuaikan jumlah


for (i=1;i<n;i++)																			//bagian perulangan bentuk yang atas
{
	for (j=i;j<=n;j++)																		//spasi pada kiri atas
	{
		printf(" ");
	}
	if(i==1)																				//baris pertama
	{
		printf("#");
		for(f=1;f<=2*n-3;f++)
		{
			printf(" ");
		}
		printf("#");
	}
	else																					//'#' kiri atas selain baris kesatu dan tengah
	{
		printf("#");
		for (j=2;j<(2*i-1);j++)
		{
			printf(" ");																		//spasi tengah atas 1
		}
		printf("#");
		for (j=0;j<=f-i*2;j++)
		{
			printf(" ");																		//spasi antar (atas)
		}
		printf("#");
		for (j=2;j<(2*i-1);j++)
		{
			printf(" ");																		//spasi tengah atas 2
		}
		printf("#");
	}
	printf("\n");
}


	f=1;																					//kelompok tengah
	printf(" #");
	do
	{
		printf(" ");
		f=f+1;
	}
	while(f<(2*i-2));
	printf("$");
	f=2;
	do
	{
		printf(" ");
		f=f+1;
	}
	while(f<=(2*i-2));
	printf("#\n");
	
	
	
for (l=1;l<n;l++)
{
	for (k=0;k<=l;k++)
	{
		printf(" ");  
	}
	if(l==n-1)																					//baris paling bawah
	{
		printf("#");
		for(f=1;f<=2*n-3;f++)
		{
			printf(" ");
		}
		printf("#");
	}
	else																						//'#' kiri atas selain baris paling bawah dan tengah
	{
		printf("#");
	}
	for (k=j-1;k>(2*l-1);k--)
	{
		printf(" ");																			//spasi tengah bawah 1
	}
	if(l<n-1)
	{
		printf("#");
	}
	for (k=0;k<l-1;k++)																			//spasi antar (bawah)
	{
		printf(" ");  
	}
	for (k=0;k<l-1;k++)																			//spasi antar (bawah)
	{
		printf(" ");  
	}
	if(l!=n-1)
	{
		printf(" #");	
	}
	for (k=j-1;k>(2*l-1);k--)
	{
		printf(" ");																			//spasi tengah bawah 2
	}
	if(l<n-1)
	{
		printf("#");
	}
	printf("\n");
	
}
printf("\nUlang?\n<Y/T> ");scanf("%s",&ulang);
}
while(ulang=='y'||ulang=='Y');

}



