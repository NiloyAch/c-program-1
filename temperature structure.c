#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;

    printf("Temperature  conversion menu\n");
    printf("1. Fahrenhite  to Celcius\n");
    printf("2. Celsius to Fahrenhite\n");
    printf("Enter your choice: ");
    scanf("d",&choice);

    switch(choice)
    {

    case 1:

    {
        printf("Enter the Fahrenhite temperature: ");
        scanf("%f",&temp);
        convertedTemp = (temp-32)/1.8;
        printf("The temperature in Celsius is : %f\n",convertedTemp);
        break;

    }
        case 2:

            {
                printf("Enter the Celsius temperature: ");
                scanf("%f",&temp);
                convertedTemp = (temp*1.8)+32;
                printf("The temperature in Fahrenhite is : %f\n",convertedTemp);
                break;

            }

        default:
            printf("not a correct option");

    }
    return 0;
}
