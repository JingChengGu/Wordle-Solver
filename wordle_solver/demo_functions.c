// A nice place for you to mess with the functions, while you're developing.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "search_util.h"

int main(void) {
  char words[10][6] = {"stalk", "scrap", "shear", "batch", "motif", "tense",
    "ultra", "vital", "ether", "nadir" };

  // make a dynamically-allocated vocabulary that you can mess with, including
  // freeing elements of it when necessary.
  char **vocabulary = calloc(10, sizeof(char *));
  for (int i=0; i < 10; i++) {
    vocabulary[i] = strdup(words[i]);
  }
  size_t num_words = 10;

  // You don't have to mess with your functions in here, but you might like to
  // do that.
  printf("%d\n", score_letter('e', vocabulary, num_words));
  int letter_scores[5] = {1, 2, 3, 4, 5};
  printf("%d\n", score_word("abcde", letter_scores)); 
  //printf("%zu\n", filter_vocabulary_gray('e', vocabulary, num_words));
  /*
  for(int i = 0; i<10; i++){
     printf("%s\n", vocabulary[i]);
  }
  */
  //printf("%zu\n", filter_vocabulary_yellow('a', 4, vocabulary, num_words));
  printf("%zu\n", filter_vocabulary_green('s', 0, vocabulary, num_words));
  free_vocabulary(vocabulary, num_words);
  

  return 0;
}
