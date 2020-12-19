#include "Indice.hpp"

Indice::Indice(){
    this->totalWords = 0;
}

void Indice::addWord(std::string word){
    this->words[word]++;
}
float Indice::totalPercentage(float totalAppearences){
    return totalAppearences/this->totalWords;
}
std::string Indice::to_String(){
    for (auto it = this->words.begin(); it != this->words.end(); it++) {
		std::cout << it->first << " " << it->second << << " " << this->totalPercentage(it->second) << std::endl;
	}
    return "oi";
}