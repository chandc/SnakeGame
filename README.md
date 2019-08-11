# CPPND: Capstone Snake Game Project

I modified the starter repo for the Snake game  project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213) to post a background picture and play background music whie the game is ongoing. The background picture is read in as a JPEG file and the music is read in as a WAV file and played in a separate flag.



## Basic Build Instructions for Ubuntu 19.04

This program requires *SDL2, SDL2_image* and *SDL2_mixer* libraries. I use the `apt-get` method to install them.

```
sudo apt-get install libsdl2-dev

sudo apt-get install libsdl2-image-dev

sudo apt-get install libsdl2-mixer-dev
```

To build the executable, I followed the steps below:

1. Clone this starter repo.
2. Make a build directory in the top level directory: `mkdir build_Linux && cd build_Linux`
3. Compile: `cmake .. && make`
4. Run it: `cd .. && ./build_Linux/SnakeGame`

For `cmake` to work, I had to modify the `CmakeList.txt` file as follows

```
cmake_minimum_required(VERSION 3.7)
project(SDL2Test)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++17 -pthread")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_mixer REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS} ${SDL2_MIXER_INCLUDE_DIRS} src)

add_executable(SnakeGame src/main.cpp src/game.cpp src/controller.cpp src/renderer.cpp src/snake.cpp)
target_link_libraries(SnakeGame ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES} ${SDL2_MIXER_LIBRARIES}  )
```

to include the `-pthread` flag and directory paths for `SDL2, SDL2_image` and `SDL2_mixer`.

added destructor for Snake in snake.h

added SDL_DestroyRenderer in renderer.cpp

