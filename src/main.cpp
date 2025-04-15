#include "config.h"

int main()
{
    GLFWwindow* window; // Make a pointer to a window

    if (!glfwInit()) {
        std::cout << "GLFW couldn't load" << std::endl;
        return -1;
    }

    window = glfwCreateWindow(640, 480, "My Window", NULL, NULL); // Create window
    glfwMakeContextCurrent(window); // Set window as current OpenGL context

    // Run through system and find function definitions
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        glfwTerminate();
        return -1;
    }

    glClearColor(0.25f, 0.5f, 0.75f, 1.0f); // Set color to clear screen

    while (!glfwWindowShouldClose(window)) {

        glfwPollEvents(); // Poll events

        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
    }

    glfwTerminate();

    return 0;
}