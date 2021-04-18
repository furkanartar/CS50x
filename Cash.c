 #include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
            float dollars;
            do
            {
                dollars = get_float("Gir: ");
            } while (dollars <= 0.0);

            int cents = round(dollars * 100);

            short result = 0;
            while (cents >= 25)
            {
                cents -= 25;
                result++;
            }

            while (cents >= 10)
            {
                cents -= 10;
                result++;
            }

            while (cents >= 5)
            {
                cents -= 5;
                result++;
            }

            while (cents >= 1)
            {
                cents -= 1;
                result++;
            }

            printf("%d\n", result);
}
