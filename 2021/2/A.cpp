// gcc -o main A.cpp -lstdc++

#include <iostream>

class Submarine {
public:
  int x;
  int depth;

  void goDown(int amount) { depth += amount; }
  void goUp(int amount) { depth -= amount; }
  void goForward(int amount) { x += amount; }
};

int main() {
  std::string command;
  int amount;

  auto s = new Submarine();
  while (std::cin >> command && std::cin >> amount) {
    if (command == "forward") {
      s->goForward(amount);
    } else if (command == "down") {
      s->goDown(amount);
    } else if (command == "up") {
      s->goUp(amount);
    }
  }
  std::cout << s->depth * s->x << std::endl;
}
