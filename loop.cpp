#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  std::string text;

  std::cout << "Type a text: ";
  std::getline(std::cin, text);

  for (int i = 0; i < 100; i++) {
    std::cout << text << "\n";
  }

  return 0;
}
