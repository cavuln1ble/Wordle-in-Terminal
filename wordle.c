#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

typedef struct 
{
    char* word[5];
} Word;

Word* words_init()
{
    FILE* word_file = fopen("C:\\Users\\user\\OneDrive\\Coding\\C and CPP\\C_projects\\Wordle Terminal\\dictionary.csv", "r");
    if (word_file == NULL) {exit(1);} 

    unsigned int count = 0;
    size_t size = 175396;
    Word* valid_words[size];

    for (size_t i = 0; i<size; i++)
    {
        char tmp = fscanf(word_file, "%s\n", tmp);
        if (strlen(&tmp) == 5) {strcpy(valid_words[count++]->word, &tmp);}
        continue;
    }

    Word* words = malloc(sizeof(Word) * count);
    if (words == NULL) {exit(1);}

    for (size_t j = 0; j<count; j++)
    {
        memcpy(words[j].word, valid_words[j]->word, sizeof(Word));
    }

    return words;
}

int main()
{
    Word* words = words_init();
    return 0;
}