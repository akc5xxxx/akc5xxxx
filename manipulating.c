// Define constant for buffer size
#define BUFFER_SIZE 80

// Include necessary header file
#include "manipulating.h"

// Function to demonstrate string manipulation operations
void manipulating(void)
{
    //Version 1
    
    // Display start message for concatenating strings demo
    printf("*** Start of Concatenating Strings Demo ***\n");

    // Initialize variables for string concatenation
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];

    // Loop for concatenating strings
    do
    {
        // Prompt for the 1st string input or 'q' to quit
        printf("Type the 1st string (q - to quit): \n");
        // Read the 1st string input
        fgets(string1, BUFFER_SIZE, stdin);
        // Remove newline character from input
        string1[strlen(string1) - 1] = '\0';

        // Check if input is not 'q'
        if ((strcmp(string1, "q") != 0))
        {
            // Prompt for the 2nd string input
            printf("Type the 2nd string:\n");
            // Read the 2nd string input
            fgets(string2, BUFFER_SIZE, stdin);
            // Remove newline character from input
            string2[strlen(string2) - 1] = '\0';

            // Concatenate the 2nd string to the 1st string
            strcat(string1, string2);
            // Display the concatenated string
            printf("Concatenated string is \'%s\'\n", string1);
        }
    } while (strcmp(string1, "q") != 0); // Continue until input is 'q'

    // Display end message for concatenating strings demo
    printf("*** End of Concatenating Strings Demo ***\n\n");

    //Version 2

    // Display start message for comparing strings demo
    printf("*** Start of Comparing Strings Demo ***\n");
    char compare1[BUFFER_SIZE];
    char compare2[BUFFER_SIZE];
    int result;

    // Loop for comparing strings
    do
    {
        // Prompt for the 1st string to compare or 'q' to quit
        printf("Type the 1st string to compare (q - to quit):\n");
        // Read the 1st string input
        fgets(compare1, BUFFER_SIZE, stdin);
        // Remove newline character from input
        compare1[strlen(compare1) - 1] = '\0';

        // Check if input is not 'q'
        if (strcmp(compare1, "q") != 0)
        {
            // Prompt for the 2nd string to compare
            printf("Type the 2nd string to compare:\n");
            // Read the 2nd string input
            fgets(compare2, BUFFER_SIZE, stdin);
            // Remove newline character from input
            compare2[strlen(compare2) - 1] = '\0';

            // Compare the two strings
            result = strcmp(compare1, compare2);

            // Display the comparison result
            if (result < 0)
                printf("'%s' string is less than '%s'\n", compare1, compare2);
            else if (result == 0)
                printf("'%s' string is equal to '%s'\n", compare1, compare2);
            else
                printf("'%s' string is greater than '%s'\n", compare1, compare2);
        }
    } while (strcmp(compare1, "q") != 0); // Continue until input is 'q'

    // Display end message for comparing strings demo
    printf("*** End of Comparing Strings Demo ***\n\n");

    //Version 3

    // Display start message for searching strings demo
    printf("*** Start of Searching Strings Demo ***\n");

    // Initialize variables for string searching
    char haystack[BUFFER_SIZE];
    char needle[BUFFER_SIZE];
    char* occurrence = NULL;

    // Loop for searching strings
    do {
        // Prompt for the string input or 'q' to quit
        printf("Type the string (q - to quit):\n");
        // Read the string input
        fgets(haystack, BUFFER_SIZE, stdin);
        // Remove newline character from input
        haystack[strlen(haystack) - 1] = '\0';

        // Check if input is not 'q'
        if (strcmp(haystack, "q") != 0) {
            // Prompt for the substring input
            printf("Type the substring:\n");
            // Read the substring input
            fgets(needle, BUFFER_SIZE, stdin);
            // Remove newline character from input
            needle[strlen(needle) - 1] = '\0';

            // Search for the substring in the string
            occurrence = strstr(haystack, needle);

            // Display the search result
            if (occurrence)
                printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack));
            else 
                printf("Not found\n");
        } 
    } while (strcmp(haystack, "q") != 0); // Continue until input is 'q'

    // Display end message for searching strings demo
    printf("*** End of Searching Strings Demo ***\n\n");
}
