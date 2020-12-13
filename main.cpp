#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//Toplama
	int a,b ; 
	printf("Bir sayi giriniz : ");
	scanf("%d",&a);
	printf("ikinci sayi giriniz : ");
	scanf("%d",&b);
	int c = a+b;
	printf("iki sayinin toplami = %d",c);
	
	
	//Vize final hesaplama
	
	int vize,final,ortalama;
	
	printf("Vize notunuzu giriniz : ");
	scanf("%d",&vize);
	printf("Final notunuzu giriniz : ");
	scanf("%d",&final);
	
	ortalama = (vize*0.3) + (final*0.7);
	
	printf("Donem ortalamasi = %d",ortalama);
	
	// carpma
	
	printf("1.sayiyi giriniz : ");
	scanf("%d",&a);
	printf("2. sayiyi giriniz : ");
	scanf("%d",&b);
	
	printf("carpim sonucu : %d",a*b);
	
	
	
	return 0;
}
