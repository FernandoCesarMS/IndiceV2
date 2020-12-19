#include <map>
#include <string>
#include <iostream>

class Indice
{
private:
    int totalWords;
    
public:
    std::map<std::string, int> words;
    Indice();
    void addWord(std::string word);
    float totalPercentage(float totalPercentage);
    std::string to_String();
};