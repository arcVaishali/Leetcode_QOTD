#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

/*
1347. Minimum Number of Steps to Make Two Strings Anagram

You are given two strings of the same length s and t. In one step you can choose any character of t and replace it with another character.

Return the minimum number of steps to make t an anagram of s.

An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.

*/

class Solution {
public:
    int minSteps(string s, string t) {
        map< char , int > mp ;
        for ( auto a : s ) mp[ a ]++ ;

        int count = 0 ;
        for ( auto a : t ) {
            if ( mp.find( a ) != mp.end() && mp[ a ] != 0 ) {
               mp[ a ]--;
            } else {
                count++ ;
            }
        }

        return count ;
        
    }
};