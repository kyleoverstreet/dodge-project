#ifndef YOUNGO_H
#define YOUNGO_H

extern void createSpikes(const int n, const int xres, const int yres);
extern void createHelmets(const int n, const int xres, const int yres);
extern void drawSpikes(void);
extern void drawHelmets(void);
extern void deleteHelmet(Helmet *node);

#endif
