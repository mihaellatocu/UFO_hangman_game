#include <iostream>
#include "ufo_functions.hpp"
#include <cstdlib>
#include <ctime>

std::string random_str()
{
  std::vector<std::string> words = {"MIHA", "ELA", "ANAMARIA", "ANTONIO", "REGINA" ,"ARINA", "GEORGE"};
  srand(time(NULL));
  int nr = rand() % (words.size());  
  return (words[nr]);
}

int main() {
greet();
std::string codeword = random_str();
std::string answer = std::string(codeword.length(), '_');
//std::cout << answer<<"\n";
int misses = 0;
std::vector<char> incorrect;
bool guess = false;
char letter;

while (answer != codeword && misses < 7)
{
  display_misses(misses);
  display_status(incorrect, answer);
  std::cout <<G "Please enter your guess " <<C "From A to Z:  " << RST;
  std::cin >> letter;
  for (unsigned long i = 0; i < codeword.length(); i++)
  {
    if (letter == codeword[i] || std::toupper(letter) == codeword[i])
    {
      answer[i] = std::toupper(letter);
      guess = true;
    }
  }
  if (guess)
  {
    ;//std::cout << "Correct\n";
  }
  else
  {
    std::cout <<RED "Incorrect! The tractor beam pulls the person in further.\n" RST;
    incorrect.push_back(letter);
    misses++;
  }
  guess = false;
}


end_game(answer, codeword);


return (0);
}
