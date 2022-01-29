#include "render.h"
#include "main.h"

float calc_scale(float a, float b, float c){
	return (a / 255 * b) / c * ws.y * 2;
}

float calc_pos(float a, float b, float c){
	return (a / 255 * b) - c * 0.5;
}
/*
SDL_Rect quick_rect(u8 y, u8 x, u8 w, u8 h){}
SDL_Rect float_position_rect(SDL_Surface* surf, SDL_Rect rect){
void render_floating_surface_rect(SDL_Surface* surf, SDL_Rect surf_rect){
void render_floating_surface(SDL_Surface* surf, float y, float x, float w, float h){
void render_floating_image_rect(char* name, SDL_Rect surf_rect){
void render_floating_text_rect(char* text, SDL_Rect surf_rect, SDL_Colour color){
void render_floating_text
void render_surface(SDL_Surface* surf, SDL_Rect pos)
void render_size(u16 w, u16 h)
u8 window_update()
 */