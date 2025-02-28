#ifndef __CFL_MENU_H__
#define __CFL_MENU_H__

#include "cfl_macros.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MENU_DECLARE(widget)                                                                       \
    int widget##_add(widget *, const char *name, int shortcut, Fl_Callback *, void *, int);        \
    int widget##_insert(widget *, int index, const char *name, int shortcut, Fl_Callback *,        \
                        void *, int);                                                              \
    Fl_Menu_Item *widget##_get_item(widget *, const char *name);                                   \
    int widget##_set_item(widget *, Fl_Menu_Item *item);                                           \
    int widget##_text_font(widget *);                                                              \
    void widget##_set_text_font(widget *, int c);                                                  \
    int widget##_text_size(widget *);                                                              \
    void widget##_set_text_size(widget *, int c);                                                  \
    unsigned int widget##_text_color(widget *);                                                    \
    void widget##_set_text_color(widget *, unsigned int c);                                        \
    void widget##_add_choice(widget *, const char *);                                              \
    const char *widget##_get_choice(widget *);                                                     \
    int widget##_value(widget *);                                                                  \
    int widget##_set_value(widget *, int v);                                                       \
    void widget##_clear(widget *);                                                                 \
    int widget##_clear_submenu(widget *, int index);                                               \
    int widget##_size(const widget *);                                                             \
    const char *widget##_text(const widget *, int idx);                                            \
    const Fl_Menu_Item *widget##_at(const widget *, int idx);                                      \
    void widget##_set_mode(widget *self, int i, int fl);                                           \
    int widget##_mode(const widget *self, int i);                                                  \
    int widget##_find_index(const widget *self, const char *label);                                \
    const Fl_Menu_Item *widget##_menu(const widget *self);                                         \
    void widget##_set_menu(widget *self, const Fl_Menu_Item *item);                                \
    void widget##_remove(widget *self, int idx);                                                   \
    void widget##_set_down_box(widget *self, int box);                                             \
    int widget##_down_box(const widget *self);                                                     \
    void widget##_global(widget *self);

typedef struct Fl_Menu_Item Fl_Menu_Item;

WIDGET_DECLARE(Fl_Menu_Bar)

MENU_DECLARE(Fl_Menu_Bar)

WIDGET_DECLARE(Fl_Menu_Button)

const Fl_Menu_Item *Fl_Menu_Button_popup(Fl_Menu_Button *self);

MENU_DECLARE(Fl_Menu_Button)

WIDGET_DECLARE(Fl_Choice)

MENU_DECLARE(Fl_Choice)

WIDGET_DECLARE(Fl_Sys_Menu_Bar)

MENU_DECLARE(Fl_Sys_Menu_Bar)

Fl_Menu_Item *Fl_Menu_Item_new(char **args, int sz);

void Fl_Menu_Item_delete(Fl_Menu_Item *self);

const Fl_Menu_Item *Fl_Menu_Item_popup(Fl_Menu_Item *self, int x, int y);

const char *Fl_Menu_Item_label(Fl_Menu_Item *);

void Fl_Menu_Item_set_label(Fl_Menu_Item *, const char *a);

int Fl_Menu_Item_label_type(Fl_Menu_Item *);

void Fl_Menu_Item_set_label_type(Fl_Menu_Item *, int a);

unsigned int Fl_Menu_Item_label_color(Fl_Menu_Item *);

void Fl_Menu_Item_set_label_color(Fl_Menu_Item *, unsigned int a);

int Fl_Menu_Item_label_font(Fl_Menu_Item *);

void Fl_Menu_Item_set_label_font(Fl_Menu_Item *, int a);

int Fl_Menu_Item_label_size(Fl_Menu_Item *);

void Fl_Menu_Item_set_label_size(Fl_Menu_Item *, int a);

int Fl_Menu_Item_value(Fl_Menu_Item *);

void Fl_Menu_Item_set(Fl_Menu_Item *);

void Fl_Menu_Item_clear(Fl_Menu_Item *);

int Fl_Menu_Item_visible(Fl_Menu_Item *);

void Fl_Menu_Item_show(Fl_Menu_Item *);

void Fl_Menu_Item_hide(Fl_Menu_Item *);

int Fl_Menu_Item_active(Fl_Menu_Item *);

void Fl_Menu_Item_activate(Fl_Menu_Item *);

void Fl_Menu_Item_deactivate(Fl_Menu_Item *);

int Fl_Menu_Item_submenu(const Fl_Menu_Item *self);

int Fl_Menu_Item_checkbox(const Fl_Menu_Item *self);

int Fl_Menu_Item_radio(const Fl_Menu_Item *self);

Fl_Menu_Item *Fl_Menu_Item_next(Fl_Menu_Item *self, int idx);

void Fl_Menu_Item_set_callback(Fl_Menu_Item *self, Fl_Callback *c, void *p);

void *Fl_Menu_Item_user_data(const Fl_Menu_Item *);

void Fl_Menu_Item_set_user_data(Fl_Menu_Item *, void *data);

void Fl_Menu_Item_draw(const Fl_Menu_Item *self, int x, int y, int w, int h, const void *m,
                       int selected);

int Fl_Menu_Item_measure(const Fl_Menu_Item *self, int *hp, const void *m);

void Fl_Menu_Item_image(Fl_Menu_Item *self, void *image);

void Fl_Menu_Item_add_image(Fl_Menu_Item *self, void *image, int on_left);

int Fl_Menu_Item_children(const Fl_Menu_Item *self);

const Fl_Menu_Item *Fl_Menu_Item_at(const Fl_Menu_Item *self, int idx);

#ifdef __cplusplus
}
#endif
#endif
