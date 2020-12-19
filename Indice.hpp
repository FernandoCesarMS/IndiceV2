#include <map>
#include <string>
#include <iostream>

class Indice{
private:
    int totalWords;
    std::map<std::string, int> words;
    float totalPercentage(float totalPercentage);
public:
    Indice();
    void addWord(std::string word);
    void to_String();
};