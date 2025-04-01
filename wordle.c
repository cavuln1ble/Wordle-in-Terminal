#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <time.h>

char* words_init()
{
    FILE* word_file = fopen("validwords.csv", "r");
    if (!word_file) {return NULL;}
    
    srand(time(NULL));
    int choice = rand();
    char* validwords = malloc(sizeof(word_file) / (sizeof(char) * 6) + 1); 
    char* format[] = "%s\0\n";
    for (int i = 0; i < choice; i++) {
        validwords[i] = fscanf(word_file, format);
    }
    char* word[5] = validwords[choice-1];
    free(validwords);
    return word;
}

int main()
{
    char* word = words_init();
    fclose(word);
    return 0;
}