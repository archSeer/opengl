#include "common.h"

void Init_gl(void);
void Init_glu(void);
void Init_glut(void);
void Init_glut_callbacks(void);

DLLEXPORT void Init_opengl() {
	Init_gl();
	Init_glu();
	Init_glut();
	Init_glut_callbacks();
}
