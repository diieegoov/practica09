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
#include <math.h>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program gives you the square root of a number." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "The number of parameters that must enter is 1" << std::endl;
    return false;
  }
  return true;
}

double GetNumber(char *argv[]) {
  int number = std::stoi(argv[1]);
  return number;
}

double Calculate(double number) {
  double root{1.0}, delta{1.0};
  const double kepsilon{1.0e-4}; 
  double raiz = sqrt(number);
  if (((root * root) - number) > kepsilon) {
    root += delta;
    delta *= -0.5;
    return root;
  }
  else {
    return raiz;
  }
}

void PrintResult(double resultado) {
  std::cout << resultado << std::endl;
}

int main(const int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 1;
  }
  double number = GetNumber(argv);
  double resultado = Calculate(number);
  PrintResult(resultado);
  return 0;
}
