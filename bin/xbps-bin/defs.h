/*-
 * Copyright (c) 2009-2010 Juan Romero Pardines.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _XBPS_BIN_DEFS_H_
#define _XBPS_BIN_DEFS_H_

#ifndef __UNCONST
#define __UNCONST(a)    ((void *)(unsigned long)(const void *)(a))
#endif

#include <xbps_api.h>

int	xbps_install_new_pkg(const char *);
int	xbps_update_pkg(const char *);
int	xbps_autoupdate_pkgs(bool);
int	xbps_autoremove_pkgs(bool, bool);
int	xbps_exec_transaction(bool);
int	xbps_remove_installed_pkgs(int, char **, bool, bool, bool);
int	xbps_check_pkg_integrity(const char *);
int	xbps_check_pkg_integrity_all(void);
int	xbps_show_pkg_deps(const char *);
int	xbps_show_pkg_reverse_deps(const char *);
int	show_pkg_info_from_metadir(const char *);
int	show_pkg_files_from_metadir(const char *);
int	find_files_in_packages(const char *);

/* from question.c */
bool	xbps_yesno(const char *, ...);
bool	xbps_noyes(const char *, ...);

/* from fetch.c */
void	fetch_file_progress_cb(void *);

/* From util.c */
int     show_pkg_files(prop_dictionary_t);
void    show_pkg_info(prop_dictionary_t);
void    show_pkg_info_only_repo(prop_dictionary_t);
int     show_pkg_namedesc(prop_object_t, void *, bool *);
int     list_strings_in_array(prop_object_t, void *, bool *);
int     list_strings_sep_in_array(prop_object_t, void *, bool *);
size_t  find_longest_pkgver(prop_dictionary_t);
void    print_package_line(const char *);

#endif /* !_XBPS_BIN_DEFS_H_ */
