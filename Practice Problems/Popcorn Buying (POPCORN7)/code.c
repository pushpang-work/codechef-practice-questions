#include <stdio.h>

int main() {
    int x; 
    scanf("%d", &x); 
    
    int number_of_buckets = (x - 100) / 50; 
    printf("%d", number_of_buckets); 
    
    return 0; 
}

