#include "Indice.hpp"
#include <sstream>
#include <ctype.h>

int main()
{
    Indice indiceWords;
    std::string word, inputs[64];
    int counter = 0, totalWords = 0;
    //Olha o sapo dentro do saco O saco com o sapo dentro O sapo batendo papo E o papo soltando o vento
    while (std::cin >> inputs[totalWords])
    {
        int positionLetter = 0, wordSize = inputs[totalWords].size();
        if (inputs[totalWords] == "aa")
        {
            break;
        }
        else
        {
            while (positionLetter < wordSize)
            {
                inputs[totalWords][positionLetter] = towlower(inputs[totalWords][positionLetter]);
                positionLetter++;
            }
        }
        if (inputs[totalWords].size()>=3)
            indiceWords.addWord(inputs[totalWords]);
        totalWords++;
    }
    for (auto it = indiceWords.words.begin(); it != indiceWords.words.end(); it++) {
		std::cout << it->first << " " << it->second << std::endl;
	}
    return 0;
}