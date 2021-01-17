
#pragma once

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GTK4_STACK_BUG_REPRODUCER_TYPE_WINDOW (gtk4_stack_bug_reproducer_window_get_type())

G_DECLARE_FINAL_TYPE (Gtk4StackBugReproducerWindow, gtk4_stack_bug_reproducer_window, GTK4_STACK_BUG_REPRODUCER, WINDOW, GtkApplicationWindow)

G_END_DECLS
