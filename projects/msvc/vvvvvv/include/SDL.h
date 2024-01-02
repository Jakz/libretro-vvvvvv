#pragma once

#include "libretro.h"

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <locale.h>
#include <ctype.h>
#include <algorithm>

#define TARGET_SDL2 true

typedef int8_t Sint8;
typedef int16_t Sint16;
typedef int32_t Sint32;

typedef uint8_t Uint8;
typedef uint16_t Uint16;
typedef uint32_t Uint32;

#ifdef __cplusplus
extern "C"
{
#endif

  enum SDL_GameControllerButton
  {

  };

  enum SDL_BlendMode
  {

  };

  using SDL_Keycode = int32_t;
  
  enum SDL_Scancode
  {

  };
  enum SDL_KeyCode
  {

  };

  static constexpr auto SDL_TRUE = true;
  static constexpr auto SDL_FALSE = false;

  static constexpr auto	SDL_BUTTON_LEFT = RETRO_DEVICE_ID_MOUSE_LEFT;
  static constexpr auto	SDL_BUTTON_MIDDLE = RETRO_DEVICE_ID_MOUSE_MIDDLE;
  static constexpr auto	SDL_BUTTON_RIGHT = RETRO_DEVICE_ID_MOUSE_RIGHT;
  static constexpr auto	SDL_BUTTON_WHEELUP = RETRO_DEVICE_ID_MOUSE_WHEELUP;
  static constexpr auto	SDL_BUTTON_WHEELDOWN = RETRO_DEVICE_ID_MOUSE_WHEELDOWN:

  static constexpr auto SDLK_0 = RETROK_0;
  static constexpr auto SDLK_1 = RETROK_1;
  static constexpr auto SDLK_2 = RETROK_2;
  static constexpr auto SDLK_3 = RETROK_3;
  static constexpr auto SDLK_4 = RETROK_4;
  static constexpr auto SDLK_5 = RETROK_5;
  static constexpr auto SDLK_6 = RETROK_6;
  static constexpr auto SDLK_7 = RETROK_7;
  static constexpr auto SDLK_8 = RETROK_8;
  static constexpr auto SDLK_9 = RETROK_9;
  
  static constexpr auto SDLK_a = RETROK_a;
  static constexpr auto SDLK_b = RETROK_b;
  static constexpr auto SDLK_c = RETROK_c;
  static constexpr auto SDLK_d = RETROK_d;
  static constexpr auto SDLK_e = RETROK_e;
  static constexpr auto SDLK_f = RETROK_f;
  static constexpr auto SDLK_g = RETROK_g;
  static constexpr auto SDLK_h = RETROK_h;
  static constexpr auto SDLK_i = RETROK_i;
  static constexpr auto SDLK_j = RETROK_j;
  static constexpr auto SDLK_k = RETROK_k;
  static constexpr auto SDLK_l = RETROK_l;
  static constexpr auto SDLK_m = RETROK_m;
  static constexpr auto SDLK_n = RETROK_n;
  static constexpr auto SDLK_o = RETROK_o;
  static constexpr auto SDLK_p = RETROK_p;
  static constexpr auto SDLK_q = RETROK_q;
  static constexpr auto SDLK_r = RETROK_r;
  static constexpr auto SDLK_s = RETROK_s;
  static constexpr auto SDLK_t = RETROK_t;
  static constexpr auto SDLK_u = RETROK_u;
  static constexpr auto SDLK_v = RETROK_v;
  static constexpr auto SDLK_w = RETROK_w;
  static constexpr auto SDLK_x = RETROK_x;
  static constexpr auto SDLK_y = RETROK_y;
  static constexpr auto SDLK_z = RETROK_z;

  static constexpr auto SDLK_F1 = RETROK_F1;
  static constexpr auto SDLK_F2 = RETROK_F2;
  static constexpr auto SDLK_F3 = RETROK_F3;
  static constexpr auto SDLK_F4 = RETROK_F4;
  static constexpr auto SDLK_F5 = RETROK_F5;
  static constexpr auto SDLK_F6 = RETROK_F6;
  static constexpr auto SDLK_F7 = RETROK_F7;
  static constexpr auto SDLK_F8 = RETROK_F8;
  static constexpr auto SDLK_F9 = RETROK_F9;
  static constexpr auto SDLK_F10 = RETROK_F10;
  static constexpr auto SDLK_F11 = RETROK_F11;
  static constexpr auto SDLK_F12 = RETROK_F12;

  static constexpr auto SDLK_SPACE = RETROK_SPACE;
  static constexpr auto SDLK_BACKSPACE = RETROK_BACKSPACE;
  static constexpr auto SDLK_RETURN = RETROK_RETURN;
  static constexpr auto SDLK_ESCAPE = RETROK_ESCAPE;
  static constexpr auto SDLK_TAB = RETROK_TAB;
  static constexpr auto SDLK_COMMA = RETROK_COMMA;
  static constexpr auto SDLK_PERIOD = RETROK_PERIOD;
  static constexpr auto SDLK_RIGHT = RETROK_RIGHT;
  static constexpr auto SDLK_LEFT = RETROK_LEFT;
  static constexpr auto SDLK_UP = RETROK_UP;
  static constexpr auto SDLK_DOWN = RETROK_DOWN;
  static constexpr auto SDLK_LCTRL = RETROK_LCTRL;
  static constexpr auto SDLK_RCTRL = RETROK_RCTRL;
  static constexpr auto SDLK_LSHIFT = RETROK_LSHIFT;
  static constexpr auto SDLK_RSHIFT = RETROK_RSHIFT;
  static constexpr auto SDLK_LALT = RETROK_LALT;
  static constexpr auto SDLK_RALT = RETROK_RALT;
  
  static constexpr auto SDLK_KP_ENTER = RETROK_KP_ENTER;

  struct SDL_Texture
  {
    
  };

  struct SDL_PixelFormat
  {
    uint8_t BitsPerPixel;
    uint8_t BytesPerPixel;
    uint32_t Rmask, Gmask, Bmask, Amask;
  };

  struct SDL_Surface
  {
    SDL_PixelFormat* format;
    int w, h;
    int pitch;
    void* pixels;
  };

  struct SDL_Window
  {

  };

  struct SDL_Renderer
  {

  };

  struct SDL_Color
  {
    uint8_t r, g, b, a;
  };

  struct SDL_Rect
  {
    int32_t x, y, w, h;
  };

  struct SDL_Point
  {
    int32_t x, y;
  };

  struct SDL_RWops
  {

  };

  struct SDL_Keysym
  {
    SDL_Scancode code;
    SDL_Keycode sym;
    uint16_t mod;
  };

  struct SDL_KeyboardEvent
  {
    uint32_t type;
    uint32_t timestamp;
    uint8_t state;
    uint8_t repeate;
    SDL_Keysym keysym;
  };
  
  struct SDL_MouseMotionEvent
  {
    uint32_t type;
    uint32_t timestamp;
    uint32_t windowID;
    uint32_t which;
    uint32_t state;
    int32_t x;
    int32_t y;
    int32_t xrel;
    int32_t yrel;
  };

  struct SDL_MouseButtonEvent
  {
    uint32_t type;
    uint32_t timestamp;
    uint32_t windowID;
    uint32_t which;
    uint8_t button;
    uint8_t state;
    uint8_t clicks;
    uint8_t padding1;
    int32_t x;           
    int32_t y;           
  };
  
  struct SDL_CommonEvent
  {
    uint32_t type;
    uint32_t timestamp;
  };

  struct SDL_Event
  {
    uint32_t type;
    SDL_CommonEvent common;
    SDL_KeyboardEvent key;
    SDL_MouseMotionEvent motion;
    SDL_MouseButtonEvent button;
  };

  static constexpr auto SDL_QUERY = -1;
  static constexpr auto SDL_IGNORE = 0;
  static constexpr auto SDL_DISABLE = 0;
  static constexpr auto SDL_ENABLE = 1;

  #define SDL_assert assert
  #define SDL_arraysize(array)   (sizeof(array) / sizeof(array[0]))

  void* SDL_malloc(size_t length) { return std::malloc(length); }
  void SDL_free(void* ptr) { std::free(ptr); }
  void SDL_memset(void* ptr, int v, size_t len) { std::memset(ptr, v, len); }
  void SDL_memcpy(void* dest, const void* src, size_t len) { std::memcpy(dest, src, len); }
  auto SDL_memcmp(const char* s1, const char* s2, size_t len) { return std::memcmp(s1, s2, len); }
  void* SDL_calloc(size_t num, size_t size) { return std::calloc(num, size); }

  #define SDL_zero(x) SDL_memset(&(x), 0, sizeof((x)))
  #define SDL_zerop(x) SDL_memset((x), 0, sizeof(*(x)))
  #define SDL_zeroa(x) SDL_memset((x), 0, sizeof((x)))

  #define SDL_min(a, b) (((a)<(b))?(a):(b))
  #define SDL_max(a, b) (((a)>(b))?(a):(b))
  #define SDL_abs(x) std::abs((x)) 
  #define SDL_clamp(x, m, M) std::max(m, std::min(x, M))

  auto SDL_strtol(const char* string, char** end, int radix) { return std::strtol(string, end, radix); }
  auto SDL_strdup(const char* string) { return _strdup(string); }
  auto SDL_strlen(const char* string) { return std::strlen(string); }
  auto SDL_strncmp(const char* s1, const char* s2, size_t max) { return std::strncmp(s1, s2, max); }
  auto SDL_strcmp(const char* s1, const char* s2) { return std::strcmp(s1, s2); }
  size_t SDL_strlcpy(char* dst, const char* src, size_t maxlen)
  {
    size_t srclen = std::strlen(src);
    if (maxlen > 0) {
      size_t len = std::min(srclen, maxlen - 1);
      std::memcpy(dst, src, len);
      dst[len] = '\0';
    }
    return srclen;
  }

  auto SDL_atoi(const char* str) { return std::atoi(str); }
  auto SDL_atof(const char* str) { return std::atof(str); }

  #define SDL_PRINTF_VARARG_FUNC(fmtargnumber)
  #define SDL_SCANF_VARARG_FUNC(fmtargnumber)

  bool SDL_isdigit(char c) { return isdigit(c); }

#ifdef __cplusplus
}
#endif