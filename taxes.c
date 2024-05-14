#include <stdio.h>

int main()

{
        float purchase_amount, tax_rate, sales_tax, total_amount;

        printf("Enter the purchase amount: $");
        scanf("%f", &purchase_amount);
        printf("Enter the tax rate (e.g) 0.08): ");
        scanf("%f", &tax_rate);

        sales_tax = purchase_amount * tax_rate;
        total_amount = purchase_amount + sales_tax;

        printf("Total with Tax: $%.2f\n", total_amount);

        return 0;
}
