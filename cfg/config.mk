TARGET_EXEC := MVN
CC = gcc
INC_DIRS := /usr/include cfg
STDFLAGS   = #set to c99 later
LDFLAGS  = -lSDL2 -lSDL2_image -lSDL2_ttf -llua -lraylib
WARNINGFLAGS = -Wall -Wextra -Wno-unused-variable
OPTFLAGS = -Os
STATIC = #set to -static to compile statically