/*
Problem: Palindrome Number
URL: https://leetcode.com/problems/roman-to-integer/
*/

#include<stdio.h>
#include<stdbool.h>


int main() {
    char *p = "MCMXCIV";

    int i=0,len = 0;
    int num =0, ans = 0;

    while(p[i] != '\0') {
        i++;
        len++;
    }
   
    for(int j = len-1; j >= 0; j--) {
        switch(p[j]) {
            case 'I':
                num = 1;
                break;
            case 'V': 
                num = 5;
                break;
            case 'X': 
                num = 10;
                break;
            case 'L': 
                num = 50;
                break;
            case 'C': 
                num = 100;
                break;
            case 'D': 
                num = 500;
                break;
            case 'M': 
                num = 1000;
                break;
        }
        
       if (4 * num < ans){
           ans -= num; 
       } else {
           ans += num;
        }
    }
    
    return 0;
}
