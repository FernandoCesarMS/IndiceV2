#include "Indice.hpp"
#include <ctype.h>

void wordInput(Indice *indice){
    std::string word, inputs[64];
    int counter = 0, totalWords = 0;
    while (std::cin >> inputs[totalWords])
    {
        int positionLetter = 0, wordSize = inputs[totalWords].size();
        while (positionLetter < wordSize)
            {
                inputs[totalWords][positionLetter] = towlower(inputs[totalWords][positionLetter]);
                positionLetter++;
            }
        indice->addWord(inputs[totalWords]);
    }
}
int main()
{
    Indice indiceWords;
    wordInput(&indiceWords);
    indiceWords.to_String();
    return 0;
}