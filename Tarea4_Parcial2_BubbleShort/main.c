#include <stdio.h>
#include <stdlib.h>
#define N 10
void Burbuja(int A[N]);
void ImprimeArregloOrdenado(int A[N]);

int main()
{
  int A[N]={10, 9, 8, 7, 6, 5, 4, 3, 1, 0};
  Burbuja(A);
  ImprimeArregloOrdenado(A);

}

void Burbuja(int A[N])
{
    int i, j, aux,band=0;
    printf("El arreglo sin ordenar es:");
    for(i=0;i<N;i++)
    {
        printf("%d ", A[i]);
        if(A[i]>A[i+1])
        {
            band=1;
        }
    }
    if(band==1)
    {
        for(j=0;j<N;j++)
        {
            for(i=0;i<N-1;i++)
            {
                if(A[i]>A[i+1])
                {
                    aux=A[i];
                    A[i]=A[i+1];
                    A[i+1]=aux;
                }
            }
        }
    }else
        {
            printf("El arreglo ya esta ordenado");
        }


}
void ImprimeArregloOrdenado(int A[N])
{
    int i;
    printf("El arreglo ordenado es: ");
    for(i=0;i<N;i++)
    {
        printf("%d,",A[i]);
    }
}
