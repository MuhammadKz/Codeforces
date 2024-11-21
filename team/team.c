#include <stdio.h>

int main() {
    int n;
    int petya,vasya,tonya;
    int d = 0;
    
    printf("Enter the number: ");
    scanf("%d",&n);

    
    for(int i=0; i<n; i++) {
        scanf("%d %d %d", &petya, &vasya, &tonya);
        if(petya+vasya+tonya >= 2){
            d++;
        }
        
    }
    printf("%d\n", d);
 
 
    return 0;
}