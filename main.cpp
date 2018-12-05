/*
    @author : Eko Hardiyanto (github.com/ehardi19)
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/classification.hpp> 
#include <boost/algorithm/string/split.hpp>

#define pop(PDA, i) PDA.erase(remove(PDA.begin(), PDA.end(), i), PDA.end())
#define push(PDA, i) PDA.push_back(i)
#define top(PDA) PDA.back()

using namespace std;

// Dictionary of accepted word for each type
string S[5] = {"saya", "adi", "mereka", "dia", "kakak"};
string P[5] = {"baca", "lihat", "main", "nulis", "pakai"};
string O[5] = {"bubur", "tugas", "apel", "rubik", "komik"};
string K[5] = {"sekarang", "kemarin", "nanti", "lusa", "bersama"};

vector<char> PDA;

bool isS(string word) {

    // init start state
    string state;
    for (string dictionary : S)
        if (word[0] == dictionary[0]) state = dictionary;

    // check
    if (!state.empty()) {
        for (int i = 1; i < state.size(); i++)
            if (word[i] != state[i]) return 0;
        
        // case goes beyond accept state
        if (word[state.size()]) return 0;
        // case reached accept state
        return 1;
    } else {
        return 0;
    }
}

bool isP(string word) {
    
    // init start state
    string state;
    for (string dictionary : P)
        if (word[0] == dictionary[0]) state = dictionary;

    // check
    if (!state.empty()) {
        for (int i = 1; i < state.size(); i++)
            if (word[i] != state[i]) return 0;

        // case goes beyond accept state
        if (word[state.size()]) return 0;
        // case reached accept state
        return 1;
    } else {
        return 0;
    }
}

bool isO(string word) {
    
    // init start state
    string state;
    for (string dictionary : O)
        if (word[0] == dictionary[0]) state = dictionary;

    // check
    if (!state.empty()) {
        for (int i = 1; i < state.size(); i++)
            if (word[i] != state[i]) return 0;

        // case goes beyond accept state
        if (word[state.size()]) return 0;
        // case reached accept state
        return 1;
    } else {
        return 0;
    }
}

bool isK(string word) {
    
    // init start state
    string state;
    for (string dictionary : K)
        if (word[0] == dictionary[0]) state = dictionary;

    // check
    if (!state.empty()) {
        for (int i = 1; i < state.size(); i++)
            if (word[i] != state[i]) return 0;
        
        // case goes beyond accept state
        if (word[state.size()]) return 0;
        // case reached accept state
        return 1;
    } else {
        return 0;
    }
}

bool isPattern(vector<string> v) {
    
    // init
    if (PDA.empty()) push(PDA, '#');
    push(PDA, '$');

    // check
    for (string word : v) {

        if (isS(word)) {
            pop(PDA, '$');
            push(PDA, 'S');
            cout << top(PDA);
        } else if (isP(word)) {
            pop(PDA, 'S');
            push(PDA, 'P');
            cout << top(PDA);
        } else if (isO(word)) {
            pop(PDA, 'P');
            push(PDA, 'O');
            cout << top(PDA);
        } else if (isK(word)) {
            if (top(PDA) == 'P')
                pop(PDA, 'P');
            else if (top(PDA) == 'O')
                pop(PDA, 'O');
            push(PDA, 'K');
            cout << top(PDA);
        }
    }
    cout << '\n';

    // pop the last one
    if (top(PDA) == 'P' || top(PDA) == 'O' || top(PDA) == 'k') PDA.pop_back();

    // check whether the PDA is empty
    return top(PDA) == '#' ? 1 : 0;
}

int main() {    
    // getting input from user
    string sentence;
    getline(cin, sentence);
    
    // lower case the string
    boost::algorithm::to_lower(sentence);

    // separate string by space into vector
    vector<string> v;
    boost::split(v, sentence, boost::is_any_of(" "));

    // check the pattern if valid
    cout << (isPattern(v) ? "ACCEPTED" : "REJECTED") << '\n';

    return 0;
}