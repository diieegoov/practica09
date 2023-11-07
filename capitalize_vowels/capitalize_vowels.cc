 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file capitalize_vowels.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 10 2023    
   * @brief The program sums two numbers
   * @bug There are no known bugs
   */

#include <iostream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program transforms the vowels of a word in Capital ones and the consonant in a lowecase one." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "The number of parameters that must enter is 1" << std::endl;
    return false;
  }
  return true;
}

std::string GetWord(char* argv[]) {
  std::string word = argv[1];
  return word;
}

std::string Change(std::string word) {
  for (char& letra : word) {
    if ((letra == char(97)) || (letra == char(101)) || (letra == char(105)) || (letra == char(111)) || (letra == char(117)) ||
        (letra == (65)) || (letra == char(69)) || (letra == char(73)) || (letra == char(79)) || (letra == char(85))) {
      letra = std::toupper(letra);
    }
    else {
      letra = std::tolower(letra);
    }
  }
    return word;
}

void PrintNewWord(std::string new_word) {
  std::cout << new_word << std::endl;
}

int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
      return 1;
  }
  std::string word = GetWord(argv);
  std::string new_word = Change(word);
  PrintNewWord(new_word);
  return 0;
  }
