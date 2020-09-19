#include <operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
float calculator_operand1 = 0;
float calculator_operand2 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, POWER, LOGARITHM, NATURAL_LOGARITHM, SINE, COSINE, TANGENT, COTANGENT, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Logarithm\n7. Natural Logarithm\n8. Sine\n9. Cosine\n10. Tangent\n11. Cotangent\n12, Exit");
    printf("\n\tEnter your choice\n");
    float result_float=0.0;
   
     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        if{calculator_operation<=5){
            printf("\n\tEnter your Number\n");
            __fpurge(stdin);
            scanf("%d ", &calculator_operand1);
              }
        else{
            printf("\n\tEnter your Numbers with space between them\n");
            __fpurge(stdin);
            scanf("%d %d", &calculator_operand1, &calculator_operand2);
        }
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            result_float=add(calculator_operand1, calculator_operand2);
            printf("\n\t%f + %f = %f\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            result_float=subtract(calculator_operand1, calculator_operand2);
            printf("\n\t%f - %f = %f\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            result_float=multiply(calculator_operand1, calculator_operand2);
            printf("\n\t%f * %f = %f\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            result_float=divide(calculator_operand1, calculator_operand2);
            printf("\n\t%f / %f = %f\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
           result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case POWER:
            result_float=power(calculator_operand1, calculator_operand2);
            printf("\n\t%f ** %f = %f\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case LOGARITHM:
            result_float=logarithm(calculator_operand1);
            printf("\n\tlog10 of %f = %f\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case NATURAL_LOGARITHM:
            result_float=natural_logarithm(calculator_operand1);
            printf("\n\tlog of %f = %f\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case SINE:
            result_float=sine(calculator_operand1);
            printf("\n\tsine of %f = %f\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case COSINE:
            result_float=cosine(calculator_operand1);
            printf("\n\tcosine of %f = %f\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case TANGENT:
            result_float=tangent(calculator_operand1);
            printf("\n\t tan of %f = %f\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case COTANGENT:
            result_float=cotangent(calculator_operand1);
            printf("\n\t cot of %f = %f\nEnter to continue", 
            calculator_operand1, 
           result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case 12:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
