#include "Application.h"

void Application::Run()
{
    while (!window.ShouldClose()) {
        glfwPollEvents();
    }
}
