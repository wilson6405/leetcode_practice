#include <stdio.h>
#include <string.h>

char *word[] = {"vtpke","vngc","vnqr","gbzx","qvdx"};

int uniqueMorseRepresentations(char** words, int wordsSize);

int main() {
	int answer;
    answer = uniqueMorseRepresentations(word, sizeof(word)/sizeof(*word));
    printf("%d\n", answer);
  
  return 0;
}

int uniqueMorseRepresentations(char** words, int wordsSize){
	char morse[26][12] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	// transfer string to morse
  	char string2Morse[100][100] = {""};
  	// count the unique morse, 1 means unique, 0 means duplicate
  	char result[100];
	int count = 0, ans = 0;
  
  	for(int number = 0; number < wordsSize; number++){
  		for(count = 0; count < strlen(*(words+number)); count++){
  			//printf("%s", morse[ *(words[number] + count) - 'a' ]);
    		strcat(string2Morse[number], morse[ *(words[number] + count) - 'a' ]);
  		}
  		result[number] = 1;
  		//printf("%d", result[number]);
  		//printf("\n");
  	}

  	for(int i = 0; i < wordsSize; i++){
  		if(result[i] == 1){
  			for(int j = i+1; j < wordsSize; j++){
  				if(strcmp(string2Morse[i], string2Morse[j]) == 0){
  					result[j] = 0;
  				}
  			}
  		}
  	}
  	/*
	for(count = 0; count < wordsSize; count++){
  		printf("%d\n", result[count]);
  	}
	*/
	// calculate how many different transformations
  	for(count = 0; count < wordsSize; count++){
  		if(result[count] == 1)
  			ans++;
  	}

  	return ans;
}