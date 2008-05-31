/*
**
** process.h
**
** Copyright (C) 1996, 1997 Johannes Plass
** Copyright (C) 2004 Jose E. Marchesi
** 
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with GNU gv; see the file COPYING.  If not, write to
** the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
** Boston, MA 02111-1307, USA.
** 
** Author:   Johannes Plass (plass@thep.physik.uni-mainz.de)
**           Department of Physics
**           Johannes Gutenberg-University
**           Mainz, Germany
**
**           Jose E. Marchesi (jemarch@gnu.org)
**           GNU Project
**
*/

#ifndef _GV_PROCESS_H_
#define _GV_PROCESS_H_

extern void			cb_processKillProcess (
#if NeedFunctionPrototypes
   Widget,
   XtPointer,
   XtPointer
#endif
);

extern void			process_kill_process (
#if NeedFunctionPrototypes
   ProcessData        /* pd */
#endif
);

extern void			process_kill_all_processes (
#if NeedFunctionPrototypes
void
#endif
);

extern ProcessData		process_fork	(
#if NeedFunctionPrototypes
   String,             /* name */
   String,             /* command */
   ProcessNotifyProc,  /* notify_proc */
   XtPointer           /* data */
#endif
);

extern void			process_menu	(
#if NeedFunctionPrototypes
   ProcessData,        /* pd */
   int                 /* action */
#endif
);

extern char*  			process_disallow_quit (
#if NeedFunctionPrototypes
void
#endif
);

#endif /* _GV_PROCESS_H_ */ 

