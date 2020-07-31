#include "application.hpp"

Application::Application(const std::string &name, int fps_limit, int width, int height)
    : NAME(name), FPS_LIMIT(fps_limit) {
  sf::ContextSettings settings;
  settings.antialiasingLevel = 8;

  window = new sf::RenderWindow(sf::VideoMode(width, height), NAME, sf::Style::Default, settings);
  window->setFramerateLimit(FPS_LIMIT);
}

Application::~Application() {}

void Application::run() {
  while (window->isOpen()) {
    this->inputHandler();

    this->render();
  }
}

void Application::render() {
  window->clear(sf::Color::Red);

  window->display();
}

void Application::inputHandler() {
  sf::Event event;
  while (window->pollEvent(event)) {
    eventHandler(event);
  }
}

void Application::eventHandler(const sf::Event &event) {
  switch (event.type) {
    case sf::Event::KeyPressed:
      switch (event.key.code) {
        case sf::Keyboard::Escape:
          window->close();
          break;
        default:
          break;
      }
      break;
    case sf::Event::Closed:
      window->close();
      break;
    default:
      break;
  }
}