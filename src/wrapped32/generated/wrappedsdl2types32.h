/******************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.1.1) *
 ******************************************************************/
#ifndef __wrappedsdl2TYPES32_H_
#define __wrappedsdl2TYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFp_t)(void*);
typedef int32_t (*iFip_t)(int32_t, void*);
typedef int32_t (*iFpp_t)(void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(SDL_PollEvent, iFp_t) \
	GO(SDL_GetDesktopDisplayMode, iFip_t) \
	GO(SDL_OpenAudio, iFpp_t)

#endif // __wrappedsdl2TYPES32_H_
