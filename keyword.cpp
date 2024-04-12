/*
One programming language has the following keywords that cannot be used as identifiers:

break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var

Write a program to find if the given word is a keyword or not

Input Format

Input-1: String(S)

Constraints

input must be string constant

Output Format

print the required answer in a new line.

Sample Input 0

defer123
Sample Output 0

defer123 is not a keyword
Explanation 0

keyword must string value.
for example
input-:defer is valid
input-:defer123 is invalid

Sample Input 1

defer
Sample Output 1

defer is a keyword

*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char kw[16][30]={"break", "case","continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
    
    char inp[30];
    
    cin>>inp;
    int flag=0;
    for(int i=0;i<16;i++){
        if(strcmp(kw[i],inp)==0){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout<<inp<<" is a keyword";
    else
        cout<<inp<<" is not a keyword";
    
    return 0;
}
