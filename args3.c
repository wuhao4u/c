

            /********************************/
            /*                          */
            /*   Getting arguments from     */
            /*              */
            /*      the Command Line        */
            /*              */
            /********************************/


                    /* Steve McMillan   */
                    /* Written: Winter 1995 */


#include <stdio.h>
#include <stdlib.h>

void get_args(int argc, char** argv, int* a_value, float* b_value)
{
    int i;

    /* Start at i = 1 to skip the command name. */

    for (i = 1; i < argc; i++) {

    /* Check for a switch (leading "-"). */

    if (argv[i][0] == '-') {

        /* Use the next character to decide what to do. */

        switch (argv[i][1]) {

        case 'a':   *a_value = atoi(argv[++i]);
                break;

        case 'b':   *b_value = atof(argv[++i]);
                break;

        default:    fprintf(stderr,
                "Unknown switch %s\n", argv[i]);
        }
    }
    }
}

main(int argc, char** argv)
{
    /* Set defaults for all parameters: */

    int a = 0;
    float b = 0.0;

    get_args(argc, argv, &a, &b);

    printf("a = %d\n", a);
    printf("b = %f\n", b);
}
