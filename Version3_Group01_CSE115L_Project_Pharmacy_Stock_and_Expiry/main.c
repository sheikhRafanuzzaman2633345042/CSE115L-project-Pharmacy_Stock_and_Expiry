#include <stdio.h>

#define CURRENT_DAY 100
#define DAYS_IN_WEEK 7

int g_batch;
int g_med_id;
int g_strips;
int g_expiry;
double g_price;

void banner(void);
void read_record(void);
double stock_value(int strips, double price);
int days_remaining(int expiry);
double weeks_remaining(int days);
void print_record(double value, int days, double weeks);

int main(void)
{
    int d;
    double v, w;

    banner();
    read_record();

    d = days_remaining(g_expiry);
    v = stock_value(g_strips, g_price);
    w = weeks_remaining(d);

    print_record(v, d, w);

    return 0;
}

void banner(void)
{
    printf("======================================================================\n");
    printf("PHARMACY STOCK & EXPIRY SYSTEM\n");
    printf("======================================================================\n");
}
void read_record(void)
{
    printf("Enter batch number (e.g., 101) : ");
    scanf("%d", &g_batch);

    printf("Enter medicine ID (e.g., 1)    : ");
    scanf("%d", &g_med_id);

    printf("Enter strips in stock          : ");
    scanf("%d", &g_strips);

    printf("Enter price per strip          : ");
    scanf("%lf", &g_price);

    printf("Enter expiry day-number        : ");
    scanf("%d", &g_expiry);
}
double stock_value(int strips, double price)
{
    return strips * price;
}
int days_remaining(int expiry)
{
    return expiry - CURRENT_DAY;
}
double weeks_remaining(int days)
{
    return (double)days / DAYS_IN_WEEK;
}
void print_record(double value, int days, double weeks)
{
    printf("\nBATCH\tMED_ID\tSTRIPS\tPRICE\tTOT_VAL\tDAYS_LFT\tWKS_LFT\n");
    printf("----------------------------------------------------------------------\n");
    printf("%d\t%d\t%d\t%.2f\t%.2f\t%d\t\t%.2f\n",
           g_batch, g_med_id, g_strips, g_price, value, days, weeks);
}
