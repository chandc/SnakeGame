

I used the following Unix command to complie and build the executable

gcc -std=c++17 -Wc++11-extensions load_PNG_ample.cpp `pkg-config --cflags --libs sdl2_image`

the location for SDL2 include and library files is gven by

`pkg-config --cflags --libs sdl2_image`


  gcc -stdlib=libc++ audio_2.cpp `pkg-config --cflags --libs sdl2_image sdl2_mixer`  -v
