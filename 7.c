#include <stdlib.h>
 #include <stdio.h>
 void Mayordenum ();
  int main ()
  {
      int n1,n2;
      Mayordenum ( n1, n2);
      return 0;
  }
  void Mayordenum (int Num1,int Num2)
  {
     printf ("Ingrese un numero ");
     scanf ("%d",&Num1);
      printf ("Ingrese otro numero ");
     scanf ("%d",&Num2);
     system ("cls");
     if(Num1<Num2)
{
printf("El numero mayor es %d", Num2); }
else
{
if (Num2<Num1)
{
printf("El numero mayor es %d", Num1); }
else
{
printf("son iguales");
}
 }
  }