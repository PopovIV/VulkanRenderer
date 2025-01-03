#ifndef WINDOW_CLASS_H
#define WINDOW_CLASS_H

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

// Window class
class Window {
public:
    Window(int w, int h, std::string name);
    ~Window();

    Window(const Window&) = delete;
    Window& operator=(const Window&) = delete;

    bool ShouldClose() { return glfwWindowShouldClose(window); }
private:
    void InitWindow();

    const int width;
    const int height;
    std::string windowName;
    GLFWwindow* window;
};
#endif // WINDOW_CLASS_H
