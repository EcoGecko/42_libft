# Libft
##### Graded 125/100.

### About
This project is about creating a small library containing a set of usefull functions to be later used on the future projects. Some functions consists in rewrites of standard C library functions and some custom ones.

### Compilation/Use
To compile run `make` or `make bonus` from inside `libft` dir. The `make bonus` rule will include everything from `make` and some function used to work with linked lists. Both rules will create a `libft.a` which can then be linked during a program compilation. Example:
```sh
$ cc main.c -lft -L <path_to_libft.a> -I <path_to_libft.h>
```
