#ifndef APPLICATION_CLASS_H
#define APPLICATION_CLASS_H

#include "Window.h"

// Application class
class Application {
public:
   static constexpr int WIDTH = 800;
   static constexpr int HEIGHT = 600;

   void Run();
private:
   Window window{ WIDTH, HEIGHT, "Vulkan Renderer" };
};
#endif // APPLICATION_CLASS_H
