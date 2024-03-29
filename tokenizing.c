// Disable warnings for certain functions
#define _CRT_SECURE_NO_WARNINGS
// Define constant for buffer size
#define BUFFER_SIZE 300

// Include necessary header file
#include "tokenizing.h"

// Function to demonstrate tokenizing words, phrases, and sentences
void tokenizing(void)
{
    //Version 1

    // Display start message for tokenizing words demo
    printf("*** Start of Tokenizing Words Demo ***\n");

    // Initialize variables for tokenizing words
    char words[BUFFER_SIZE];
    char *nextWord = NULL;
    int wordsCounter;

    // Loop for tokenizing words
    do
    {
        // Prompt for inputting words separated by space or 'q' to quit
        printf("Type a few words separated by space (q - to quit):\n");
        // Read input words
        fgets(words, BUFFER_SIZE, stdin);
        // Remove newline character from input
        words[strlen(words) - 1] = '\0';

        // Check if input is not 'q'
        if (strcmp(words, "q") != 0)
        {
            // Tokenize input words by space
            nextWord = strtok(words, " ");
            wordsCounter = 1;

            // Iterate through the words and display them
            while (nextWord)
            {
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0); // Continue until input is 'q'

    // Display end message for tokenizing words demo
    printf("*** End of Tokenizing Words Demo ***\n\n");

    //Version 2

    // Display start message for tokenizing phrases demo
    printf("*** Start of Tokenizing Phrases Demo ***\n");

    // Initialize variables for tokenizing phrases
    char phrases[BUFFER_SIZE];
    char *nextPhrase = NULL;
    int phrasesCounter;

    // Loop for tokenizing phrases
    do
    {
        // Prompt for inputting phrases separated by comma or 'q' to quit
        printf("Type a few phrases separated by comma(q - to quit):\n");
        // Read input phrases
        fgets(phrases, BUFFER_SIZE, stdin);
        // Remove newline character from input
        phrases[strlen(phrases) - 1] = '\0';

        // Check if input is not 'q'
        if (strcmp(phrases, "q") != 0)
        {
            // Tokenize input phrases by comma
            nextPhrase = strtok(phrases, ",");
            phrasesCounter = 1;

            // Iterate through the phrases and display them
            while (nextPhrase)
            {
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ",");
            }
        }
    } while (strcmp(phrases, "q") != 0); // Continue until input is 'q'

    // Display end message for tokenizing phrases demo
    printf("*** End of Tokenizing Phrases Demo ***\n\n");

    //Version 3

    // Display start message for tokenizing sentences demo
    printf("*** Start of Tokenizing sentences Demo ***\n");

    // Initialize variables for tokenizing sentences
    char sentences[BUFFER_SIZE];
    char *nextSentence = NULL;
    int sentencesCounter;

    // Loop for tokenizing sentences
    do
    {
        // Prompt for inputting sentences separated by dot or 'q' to quit
        printf("Type a few sentences separated by dot (q - to quit):\n");
        // Read input sentences
        fgets(sentences, BUFFER_SIZE, stdin);
        // Remove newline character from input
        sentences[strlen(sentences) - 1] = '\0';

        // Check if input is not 'q'
        if ((strcmp(sentences, "q") != 0))
        {
            // Tokenize input sentences by dot
            nextSentence = strtok(sentences, ".");
            sentencesCounter = 1;

            // Iterate through the sentences and display them
            while (nextSentence)
            {
                printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, ".");
            }
        }
    } while (strcmp(sentences, "q") != 0); // Continue until input is 'q'

    // Display end message for tokenizing sentences demo
    printf("*** End of Tokenizing sentences Demo ***\n\n");
}
