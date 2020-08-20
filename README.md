# Stewie410's dmenu

This is my personal build of dmenu, including _several_ patches to get the UX
I'm looking for.  I've been using the prebuild binary for Arch for a while now,
however, after configuring dwm, I wanted to give it a go to increase the
functionality of dmenu on my system.

## Patches

* [case-insensitive](https://tools.suckless.org/dmenu/patches/case-insensitive/dmenu-caseinsensitive-20200523-db6093f.diff)
* [fuzzymatch](https://tools.suckless.org/dmenu/patches/fuzzymatch/dmenu-fuzzymatch-4.9.diff)
* [highlight](https://tools.suckless.org/dmenu/patches/highlight/dmenu-highlight-4.9.diff)
* [highpriority](https://tools.suckless.org/dmenu/patches/highpriority/dmenu-highpriority-4.9.diff)
* [line height](https://tools.suckless.org/dmenu/patches/line-height/dmenu-lineheight-4.9.diff)
* [numbers](https://tools.suckless.org/dmenu/patches/numbers/dmenu-numbers-4.9.diff)
* [password](https://tools.suckless.org/dmenu/patches/password/dmenu-password-4.9.diff)

## TODO

* Nothing _yet_

## Assumptions

* You prefer the dracula theme

## DMENU README

```txt
dmenu - dynamic menu
====================
dmenu is an efficient dynamic menu for X.


Requirements
------------
In order to build dmenu you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

    make clean install


Running dmenu
-------------
See the man page for details.
```
