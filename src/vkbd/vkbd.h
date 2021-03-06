#include<SDL.h>

#define VKBD_X 20
#define VKBD_Y 200

#define VKBD_LEFT	1
#define VKBD_RIGHT	2	
#define VKBD_UP		4
#define VKBD_DOWN	8
#define VKBD_BUTTON	16
#define VKBD_BUTTON_BACKSPACE	32
#define VKBD_BUTTON_SHIFT	64
#define VLBD_BUTTON2 128

int vkbd_init(void);
void vkbd_quit(void);
void vkbd_redraw(void);
int vkbd_process(void);
void vkbd_init_button2(void);
void vkbd_displace_up(void);
void vkbd_displace_down(void);
void vkbd_transparency_up(void);
void vkbd_transparency_down(void);

extern int vkbd_mode;
extern int vkbd_move;
extern int vkbd_shift;
extern int vkbd_can_switch_shift;
extern int vkbd_key;
extern int vkbd_keysave;
extern SDLKey vkbd_button2;
extern int keymappings[10][3];
