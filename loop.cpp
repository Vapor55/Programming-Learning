#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  std::string Text = "";

  std::cout << "Type a text: ";
  std::cin >> Text;

  for (int i = 0; i < 100; i++) {
    std::cout << Text << "\n";
  }

  return 0;
}
