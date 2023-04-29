/*
Problem: Palindrome Number
URL: https://leetcode.com/problems/palindrome-number/
*/
#include<stdio.h>;
#include<stdbool.h>;

bool isPalindrome(int x){
    long reversed = 0, remainder;
    int original;
    original = x;

    if(x<0){
        return false;
    }
    
    while(x!=0){
        remainder = x%10;
        reversed = reversed * 10 + remainder;
        x = x/10;
    }
    
    if(original == reversed){
        return true;
    }
    return false;
}

int main() {
    bool palindrome = isPalindrome(121);
    printf("%d\n",palindrome);
    return 0;
}