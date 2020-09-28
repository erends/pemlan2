#include <stdio.h>
#include <string.h>

int main(){
	char nama[20];
	char npm[11];
	int nilaitugas1,nilaitugas2,nilaitugas3;
	float nilaiakhir;
	char index;
	
	printf("***** Pengisian Nilai Tugas *****\n\n\n");
	printf("NAMA : ");gets(nama);
	printf("NPM : ");gets(nama);
	printf("Nilai Tugas 1 : ");scanf("%d",&nilaitugas1);
	printf("Nilai Tugas 2 : ");scanf("%d",&nilaitugas2);
	printf("Nilai Tugas 3 : ");scanf("%d",&nilaitugas3);
	nilaiakhir=(nilaitugas1+nilaitugas2+nilaitugas3)/3;
	printf("Nilai Akhir : ");
	
	if(nilaiakhir>=80)index='A';else
	if(nilaiakhir>=60)index='B';else
	if(nilaiakhir>=40)index='C';else
	if(nilaiakhir>=20)index='D';else
	if(nilaiakhir>=0)index='E';
	printf("%c",index);
	return 0;
}
