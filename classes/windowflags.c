#ifndef HAVE_PHP_SDL_WINDOWFLAGS
#define HAVE_PHP_SDL_WINDOWFLAGS

#include "php.h"
#include <SDL2/SDL.h>

#include <classes/common.h>
#include <classes/windowflags.h>

zend_class_entry *sdlWindowFlags_ce;

PHP_MINIT_FUNCTION(SDL_WindowFlags) /* {{{ */
{
	zend_class_entry ce;

	INIT_NS_CLASS_ENTRY(ce, SDL_NS, "WindowFlags", NULL);
	sdlWindowFlags_ce = zend_register_internal_class_ex(&ce, NULL);
	sdlWindowFlags_ce->ce_flags |= ZEND_ACC_EXPLICIT_ABSTRACT_CLASS | ZEND_ACC_FINAL;

	SDL_WINDOWFLAGS_CONST(FULLSCREEN);
	SDL_WINDOWFLAGS_CONST(OPENGL);
	SDL_WINDOWFLAGS_CONST(SHOWN);
	SDL_WINDOWFLAGS_CONST(HIDDEN);
	SDL_WINDOWFLAGS_CONST(BORDERLESS);
	SDL_WINDOWFLAGS_CONST(RESIZABLE);
	SDL_WINDOWFLAGS_CONST(MINIMIZED);
	SDL_WINDOWFLAGS_CONST(MAXIMIZED);
	SDL_WINDOWFLAGS_CONST(INPUT_GRABBED);
	SDL_WINDOWFLAGS_CONST(INPUT_FOCUS);
	SDL_WINDOWFLAGS_CONST(MOUSE_FOCUS);
	SDL_WINDOWFLAGS_CONST(FULLSCREEN_DESKTOP);
	SDL_WINDOWFLAGS_CONST(FOREIGN);
	SDL_WINDOWFLAGS_CONST(ALLOW_HIGHDPI);
	SDL_WINDOWFLAGS_CONST(MOUSE_CAPTURE);
#if SDL_VERSION_ATLEAST(2,0,5)
	SDL_WINDOWFLAGS_CONST(ALWAYS_ON_TOP);
	SDL_WINDOWFLAGS_CONST(SKIP_TASKBAR);
	SDL_WINDOWFLAGS_CONST(UTILITY);
	SDL_WINDOWFLAGS_CONST(TOOLTIP);
	SDL_WINDOWFLAGS_CONST(POPUP_MENU);
#endif

	return SUCCESS;
} /* }}} */

#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */