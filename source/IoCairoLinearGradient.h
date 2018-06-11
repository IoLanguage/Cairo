/*
docCopyright("Trevor Fancher", 2007)
docCopyright("Daniel Rosengren", 2007)
*/

#ifndef IOCAIROLINEARGRADIENT_DEFINED
#define IOCAIROLINEARGRADIENT_DEFINED 1

#include "IoObject.h"
#include <cairo/cairo.h>

#define ISCAIROLINEARGRADIENT(self) IoObject_hasCloneFunc_(self, (IoTagCloneFunc *)IoCairoLinearGradient_rawClone)

typedef IoObject IoCairoLinearGradient;

IoCairoLinearGradient *IoCairoLinearGradient_proto(void *state);
IoCairoLinearGradient *IoCairoLinearGradient_rawClone(IoCairoLinearGradient *self);

/* ------------------------------------------------------------------------------------------------*/

IoObject *IoCairoLinearGradient_create(IoCairoLinearGradient *self, IoObject *locals, IoMessage *m);
IoObject *IoCairoLinearGradient_getLinearPoints(IoCairoLinearGradient *self, IoObject *locals, IoMessage *m);

#endif
