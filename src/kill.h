/*
 * crun - OCI runtime written in C
 *
 * Copyright (C) 2017, 2018 Giuseppe Scrivano <giuseppe@scrivano.org>
 * crun is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * crun is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with crun.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef KILL_H
# define KILL_H

# include "crun.h"

int crun_command_kill (struct crun_global_arguments *global_args, int argc, char **argv, libcrun_error_t *error);

#endif
