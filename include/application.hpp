#ifndef APP_H
#define APP_H

#include <string>

#include <SFML/Graphics.hpp>
#include <SFML/Window/Window.hpp>

class Application {
 public:
  Application(const std::string &name, int fps_limit, int width, int height);
  ~Application();

  void run();

 private:
  const std::string NAME;
  const int FPS_LIMIT;

  sf::RenderWindow *window;

  void render();

  void eventHandler(const sf::Event &event);

  void inputHandler();
};

#endif  // APP_H
