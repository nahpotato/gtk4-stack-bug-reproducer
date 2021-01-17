gtk4_stack_bug_reproducer_sources = [
  'main.c',
  'gtk4_stack_bug_reproducer-window.c',
]

gtk4_stack_bug_reproducer_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk4', version: '>= 3.22'),
  dependency('libadwaita-1'),
]

gnome = import('gnome')

gtk4_stack_bug_reproducer_sources += gnome.compile_resources('gtk4_stack_bug_reproducer-resources',
  'gtk4_stack_bug_reproducer.gresource.xml',
  c_name: 'gtk4_stack_bug_reproducer'
)

executable('gtk4-stack-bug-reproducer', gtk4_stack_bug_reproducer_sources,
  dependencies: gtk4_stack_bug_reproducer_deps,
  install: true,
)
