//Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;
    int product = 1;                       

    printf("Enter n: ");                     
    scanf("%d", &n);                         

    
    for (int i = 2; i <= n; i += 2) {           
        product = product * i;
    }

    printf("Product = %d", product);             

    return 0;                                   
}
