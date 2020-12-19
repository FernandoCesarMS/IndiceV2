#include "Indice.hpp"
#include <iomanip>

Indice::Indice(){
    this->totalWords = 0;
}

void Indice::addWord(std::string word){
    this->words[word]++;
    totalWords++;
}
float Indice::totalPercentage(float totalAppearences){
    return totalAppearences/this->totalWords;
}
void Indice::to_String(){
    std::cout << std::fixed;
    std::cout << std::setprecision(2); 
    for (auto it = this->words.begin(); it != this->words.end(); it++) {
        if (it->first.size() >= 3)
		    std::cout << it->first << " " << it->second << " " << this->totalPercentage(it->second) << std::endl;
	}
}