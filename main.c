#include <stdio.h>

int main() {
    int n;
    int i;
    

    scanf("%d", &n);
    int arreglo[n];

    for (i = 0; i< n; i++)
        scanf("%d", &arreglo[i]);
    
    for(i=n-1;i>=0; i--)
        printf("%d " "", arreglo[i]);

    return 0;
    
}
