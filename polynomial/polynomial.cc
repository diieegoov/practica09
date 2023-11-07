 /** 
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file polynomial.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Nov 06 2023    
   * @brief The program sums two numbers
   * @bug There are no known bugs
   */

#include <iostream>
#include <string>
#include <vector>

void PrintProgramPurpose() {
  std::cout << "This program does a mathematical operation." << std::endl;
}

std::vector<int> GetCoeff(char* argv[], const int argc) {
  int i{0}, j{1};
  std::vector<int> coeficientes;
  for (; j < (argc - 1); j++) {
    std::string numerox = argv[j];
    int numero = std::stoi(numerox);
    coeficientes.push_back(numero);
    i++;
  }
  return coeficientes;
}

int GetValue(char* argv[], const int argc) {
  std::string valor = argv[argc - 1];
  int value = std::stoi(valor);
  return value;
}

int Calc(std::vector<int> coeficientes, int value, const int argc) {
  int resultado = coeficientes[0] * value + coeficientes[1];
  for (int i = 2; i < (argc - 2); i++) {
    resultado = (resultado * value) + coeficientes[i];  
  }
  return resultado;
}

void PrintResult(int result) {
  std::cout << result << std::endl;
}
  
int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  std::vector<int> coeficientes = GetCoeff(argv, argc);
  int value = GetValue(argv, argc);
  int result = Calc(coeficientes, value, argc);
  PrintResult(result); 
  return 0;
}
