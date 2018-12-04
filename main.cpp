#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/classification.hpp> 
#include <boost/algorithm/string/split.hpp>

using namespace std;

string S[5] = {"saya", "adi", "mereka", "dia", "kakak"};
string P[5] = {"baca", "lihat", "main", "nulis", "pakai"};
string O[5] = {"bubur", "tugas", "kode", "rubik", "komik"};
string K[5] = {"sekarang", "kemarin", "nanti", "lusa", "bersama"};

vector<char> PDA;

string rules[4] = {"SPOK", "SPK", "SPO", "SP"};

bool isS(string word) {

    // init start state
    string state;
    for (string dictionary : S)
        if (word[0] == dictionary[0]) state = dictionary;

    // check
    if (!state.empty()) {
        for (int i = 1; i < word.size(); i++)
            if (word[i] != state[i]) return 0;

        // if case reached accepting state return true
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
        for (int i = 1; i < word.size(); i++)
            if (word[i] != state[i]) return 0;

        // if case reached accepting state return true
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
        for (int i = 1; i < word.size(); i++)
            if (word[i] != state[i]) return 0;

        // if case reached accepting state return true
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
        for (int i = 1; i < word.size(); i++)
            if (word[i] != state[i]) return 0;

        // if case reached accepting state return true
        return 1;
    } else {
        return 0;
    }
}

bool isPattern(vector<string> v) {
    
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

    return 0;
}