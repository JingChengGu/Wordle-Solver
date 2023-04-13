
#### DESIGN

##### Purpose of the program

Score letter function returns the number of words that contains a specific letter within a given list of vocabularies
with the number of words within the vocabulary list given. 
Score word function returns the total score of a word by adding up all the scores that the letters within that word
contains. The scores of the letters are referenced through a given array of letter scores. 
Filter vocabulary gray function returns the new number of words that have been filtered from the vocabulary considering
all the gray slots. The gray slots indicate that the letters should not be within the word so all words that contain a
gray slot letter would be freed from the vocabulary list. 
Filter vocabulary yellow function returns the new number of words that have been filtered from the vocabulary
considering all the yellow slots. The yellow slots indicate that the letters should be in the words but not in that
specific position. Any words contains the yellow slot letter in that specific spot would be freed from the vocabulary
list. 
Filter vocabulary green function returns the new number of words that have been filtered from the vocabulary considering
all the green slots. The function would free all words within the vocabulary list that do not contain the specified
green slot letters in those specified positions. 

##### Description and pseudocode of the program

The score letter function contains a nested loop. The first loop loops from the first word of the vocabulary list to the last word
of the vocabulary list. The second loop loops from the first letter of the word to the last letter of the word. Within
the second loop checks if the letter is the same as the given letter. If they are the same, increment the score of the
letter once. 

```
score_letter(letter, vocabulary, num words){
    score;
    for(words in vocabulary list){
        for(letters in that word){
            if(word is not NULL){
                if(the current is the same as given letter){
                    score++;
                    break;
                }
            }
        }
    }
    return score;
}
```

The score word function creates a score variable to keep track of the score of a certain word. Create an empty array to
keep track of the words that the function has visited already. Always add the first letter score to the score counter
since it has never been visited before and add it to my visited letter array. Have a nested loop that first loops
through the letters in the current word and loops through the visited letter array to check if the letter has been
visited or not. If it has been visited and added before, the count is incremented by 1. If it has not been visited, do
not add to the count.  After the nested loop,
add the letter to the letter array. An if statement after the letter would consider if the count is zero or not. If
zero, add score of the letter of the score, if not zero, add zero to the score. Return the score after.

```
score_word(word, letter_scores array){
    score;
    my letter array;
    count;
    score = letter_scores[letter - 'a'];
    store first letter of the word in my array;
    for(letters in the word){
        for(letters in my letter array){
            if(letter in the word = letter in my letter array){
                count++;
            }
        }
        store the letter of word in my letter array;
        if(count is not zero){
            score+=0;
        }
        else{
            score+=the score of the letter;
        }
        reset count;
    }
    return score;
}
```

Filter vocabulary gray loops through the words of the vocabulary and the letters of the word to check it contains the
gray letter. If it does, free the letter and set the slot to NULL. Return the amount of words removed. 

```
filter_vocabulary_gray(letter, vocabulary, num_words){
    size_t removed;
    for(words in vocabulary list){
        for(letter in the word){
            if(gray letter appears in the word){
                free the pointer of the word;
                set the slot to NULL;
                removed++;
            }
        }
    }
    return removed;
}
```

Filter vocabulary yellow loops through the words of the vocabulary and the letters of the words to free the words that doesn't contain the
yellow letter and free the words that have the specified yellow letter in that specific position. Return the
number of words removed.

```
filter_vocabulary_yellow(letter, position, vocabulary, num_words){
    size_t removed;
    for(words in vocabulary list){
        for(letters in that word){
            if(word doesn't contain the letter){
                free the pointer of the word;
                set the slot to NULL;
                removed++;
            }
            if(the letter at the given position's word is given letter){
                free the pointer of the word;
                set the slot to NULL;
                removed++;
            }
        }
    }
    return removed;
}
```

Filter vocabulary green loops through the words of the vocabulary and the letters of the words to free the words that
doesn't contain the green letter and free words that doesn't have the letter at that specific position. 

```
filter_vocabulary_green(letter, position, vocabulary, num_words){
    size_t removed;
    for(words in the vocabulary list){
        for(letters in the word){
            if(word doesn't contain the letter){
                free the pointer of the word;
                set the slot to NULL;
                removed++;
            }
            if(letter at the given position of the word is not the letter){
                free the pointer of the word;
                set the slot to NULL
                removed++;
            }
        }
    }
    return removed;
}
```
