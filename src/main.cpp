#include "application.hpp"

int main() {
  Application app = Application("BASE SFML APP", 60, 1280, 720);

  app.run();

  return 0;
}
