/*

You're given strings J representing the types of stones that are jewels, and S representing the stones you have. 
Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. 
Letters are case sensitive, so "a" is considered a different type of stone from "A".

Note:
- S and J will consist of letters and have length at most 50.
- The characters in J are distinct.

*/
#include <stdio.h>
#include <string.h>

int numJewelsInStones(char* J, char* S);

void main(void){
        int ans = 0;
        char* j = "aAfsdf";
        char* s = "aaAbbfffssdfbb";
        ans = numJewelsInStones(j, s);
        printf("%d\n", ans);
}

int numJewelsInStones(char* J, char* S) {
    int len_s, len_j, count = 0;
    len_s = strlen(S);
    len_j = strlen(J);
    
    for (int i = 0; i < len_s; i++){
      for (int j = 0; j < len_j; j++){
        if ( S[i] == J[j]){
          count++;
          break;
        }
      }
    }
    return count;
}