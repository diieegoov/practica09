 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file P57548.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 10 2023    
   * @brief The program sums two numbers
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P57548
   */

#include <iostream>
#include <vector>
#include <string>
#include <math.h>

void PrintProgramPurpose() {
  std::cout << "This program gives you the hypotenuse of the triangle whose sides enters in input." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "The number of parameters that must enter is 2" << std::endl;
    return false;
  }
  return true;
}

std::vector<int> GetSides(char *argv[], const int argc) {
  std::vector<int> sides;
  int i{0};
  for (int j = 1; j < 3; j++) {
    std::string ladox = argv[j];
    int lado = std::stoi(ladox);
    sides.push_back(lado);
    i++;
  }
  return sides;
}

double CalculateHypo(std::vector<int> sides) {
  double hypo = sqrt(pow(sides[0], 2) + pow(sides[1], 2));
  return hypo;
}

void PrintHypo(double hypo) {
  std::cout << hypo << std::endl;
}

int main (const int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {
    return 1;
  }
  std::vector<int> sides = GetSides(argv, argc);
  double hypo = CalculateHypo(sides);
  PrintHypo(hypo);
  return 0;
}
