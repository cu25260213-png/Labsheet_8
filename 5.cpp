int countWords(string s) {
    int words = 0;
    bool inWord = false;

    for (char c : s) {
        if (c != ' ' && !inWord) {
            inWord = true;
            words++;
        } else if (c == ' ') {
            inWord = false;
        }
    }
    return words;
}
