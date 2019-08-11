# CPPND: Capstone Snake Game Project

I modified the starter repo for the Snake game  project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213) to post a background picture and play background music whie the game is ongoing. The background picture is read in as a JPEG file and the music is read in as a WAV file and played in a separate flag.



## Basic Build Instructions for Ubantu Linux 

This program requires SDL2_image and SDL2_mix libraries.

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.# SnakeGame

added destructor for Snake in snake.h

added SDL_DestroyRenderer in renderer.cpp

