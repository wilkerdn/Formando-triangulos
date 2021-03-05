#include <stdio.h>

int main(){
	float a,b,c,aux;
	scanf("%f %f %f",&a,&b,&c);
	if(b<c){
		aux = b;
		b = c;
		c = aux;//a>c>b;
	}if(a<b){
		aux = a;
		a = b;
		b = aux; //b>a>c;
	}if(a<c){
		aux = a;
		a = c;
		c = aux; //b>c>a;
	
	}

	if(a>=(b+c)){
		printf("NAO FORMA TRIANGULO\n");
	}else{
        if((a*a)==((b*b)+(c*c))){
            printf("TRIANGULO RETANGULO\n");
        }if((a*a)>((b*b)+(c*c))){
            printf("TRIANGULO OBTUSANGULO\n");
        }if((a*a)<((b*b)+(c*c))){
            printf("TRIANGULO ACUTANGULO\n");
        }if((a==b)&&(a==c)&&(b==c)){
            printf("TRIANGULO EQUILATERO\n");
        }else if((a==b)||(a==c)||(b==c)){
            printf("TRIANGULO ISOSCELES\n");
        }
	}
}