#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "iostream"

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 800;

int main(){
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4); glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6); glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    GLFWwindow *window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Cellular Sandbox", NULL, NULL);
    if(!window){
        std::cout<<"FAILED TO CREATE GLFW WINDOW\n";
        glfwTerminate();
        return 0;
    }
    glfwMakeContextCurrent(window);

    if(!gladLoadGL()){
        std::cout<<"FAILED TO LOAD OPENGL\n";
    }

    glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);

    while(!glfwWindowShouldClose(window)){
        glClearColor(0, 0, 0, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}