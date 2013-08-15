#include<stdio.h>

int a,b;

int main()
{
int opc;
float res;

do{ 
printf("Dame dos numeros enteros\n");
scanf("%d %d",&a,&b);


printf("1.suma\n");
printf("2.resta\n");
printf("3.multiplicacion \n");
printf("4.Division \n");
printf("5.Salir \n");
scanf("%d",&opc);
printf("\n");

 switch(opc){
 
    case 1:
	printf("la suma es: %d",a+b );
	break;
	 case 2:
	printf("la resta es: %d",a-b );
	break;
	 case 3:
	printf("la multiplicacion es: %d",a*b );
	break;
	 case 4:
	 
	  res=a/b;
	printf("ladivision es: %f",res );
	break;
	
	default:
	printf("No existe");
	}
	
	}while(opc!=5);

return 0;






}