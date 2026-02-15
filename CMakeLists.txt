cmake_minimum_required(VERSION 3.10)
project(OpenGLApp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(OpenGL_GL_PREFERENCE GLVND)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)

add_executable(app src/main.cpp
        src/mathutil.cpp
        src/mathutil.h)
set_target_properties(app PROPERTIES 
    VS_DEBUGGER_ENVIRONMENT "DRI_PRIME=1"
)
target_link_libraries(app 
    OpenGL::GL 
    glfw 
    GLEW::GLEW
)
