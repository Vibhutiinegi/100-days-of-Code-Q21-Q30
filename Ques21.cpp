//Q21.Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main() {
    int days, fine = 0;                         

    printf("Enter number of late days: ");       
    scanf("%d", &days);                      

    
    if (days <= 5)
        fine = days * 2;                       
    else if (days <= 10)
        fine = (5 * 2) + (days - 5) * 4;      
    else if (days <= 30)
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6; 
    else
        printf("Membership Cancelled");          

    
    if (days <= 30)
        printf("Fine ?%d", fine);

    return 0;                                
}
