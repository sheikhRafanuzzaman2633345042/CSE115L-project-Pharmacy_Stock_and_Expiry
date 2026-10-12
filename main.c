#include <stdio.h>

#define CURRENT_DAY 100
#define DAYS_IN_WEEK 7

int main(void)
{
    int batch_no, med_id, strips, expiry_day, days_left;
    double price, total_value, weeks_left;

    printf("Enter batch number (e.g., 101) : ");
    scanf("%d", &batch_no);

    printf("Enter medicine ID (e.g., 1)    : ");
    scanf("%d", &med_id);

    printf("Enter strips in stock          : ");
    scanf("%d", &strips);

    printf("Enter price per strip          : ");
    scanf("%lf", &price);

    printf("Enter expiry day-number        : ");
    scanf("%d", &expiry_day);

    total_value = strips * price;
    days_left = expiry_day - CURRENT_DAY;

    weeks_left = (double)days_left / DAYS_IN_WEEK;

    printf("\n======================================================================\n");
    printf("BATCH\tMED_ID\tSTRIPS\tPRICE\tTOT_VAL\tDAYS_LFT\tWKS_LFT\n");
    printf("----------------------------------------------------------------------\n");
    printf("%d\t%d\t%d\t%.2f\t%.2f\t%d\t\t%.2f\n",
           batch_no, med_id, strips, price, total_value, days_left, weeks_left);
    printf("======================================================================\n");

    return 0;
}
