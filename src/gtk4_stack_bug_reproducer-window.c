#include <adwaita.h>
#include "gtk4_stack_bug_reproducer-config.h"
#include "gtk4_stack_bug_reproducer-window.h"

struct _Gtk4StackBugReproducerWindow
{
  GtkApplicationWindow  parent_instance;

  /* Template widgets */
  AdwFlap             *flap;
  GtkStack            *stack;
};

G_DEFINE_TYPE (Gtk4StackBugReproducerWindow, gtk4_stack_bug_reproducer_window, GTK_TYPE_APPLICATION_WINDOW)

static void
on_flap_folded_changed (Gtk4StackBugReproducerWindow *self)
{
  if (adw_flap_get_folded (self->flap))
    {
      gtk_stack_set_visible_child_name (self->stack, "label");
    }
  else
    {
      gtk_stack_set_visible_child_name (self->stack, "entry");
    }
}

static void
gtk4_stack_bug_reproducer_window_class_init (Gtk4StackBugReproducerWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/org/example/App/gtk4_stack_bug_reproducer-window.ui");
  gtk_widget_class_bind_template_child (widget_class, Gtk4StackBugReproducerWindow, flap);
  gtk_widget_class_bind_template_child (widget_class, Gtk4StackBugReproducerWindow, stack);
  gtk_widget_class_bind_template_callback (widget_class, on_flap_folded_changed);
}

static void
gtk4_stack_bug_reproducer_window_init (Gtk4StackBugReproducerWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
