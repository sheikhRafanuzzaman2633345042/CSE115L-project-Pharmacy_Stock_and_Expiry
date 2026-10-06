#include <stdio.h>

int main(void)
{

    printf("====================================================\n");
    printf("           PHARMACY STOCK & EXPIRY SYSTEM           \n");
    printf("====================================================\n");


    printf("1. Receive a batch\n");
    printf("2. Sell strips\n");
    printf("3. Expiring soon\n");
    printf("4. Below reorder level\n");
    printf("5. Stock value\n");
    printf("6. Show all stock\n");
    printf("7. Save & load\n");
    printf("8. Exit\n");
    printf("----------------------------------------------------\n");


  printf("BATCH\tMEDICINE NAME\t\tSTRIPS\tPRICE\tEXP(DAY)\n");

    printf("B101\tParacetamol\t\t%d\t%.2f\t%d\n", 50, 15.50, 120);
    printf("B102\tAmoxicillin\t\t%d\t%.2f\t%d\n", 20, 45.00, 30);
    printf("B103\tCetirizine\t\t%d\t%.2f\t%d\n", 100, 12.00, 365);
    printf("----------------------------------------------------\n");


    printf("Total active batches: 3\n");

    return 0;
}
