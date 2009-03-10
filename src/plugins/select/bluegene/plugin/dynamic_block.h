/*****************************************************************************\
 *  dynamic_block.h - header for creating blocks in a dynamic environment.
 *
 *  $Id: dynamic_block.h 12954 2008-01-04 20:37:49Z da $
 *****************************************************************************
 *  Copyright (C) 2008 Lawrence Livermore National Security.
 *  Produced at Lawrence Livermore National Laboratory (cf, DISCLAIMER).
 *  Written by Danny Auble <da@llnl.gov>
 *  
 *  This file is part of SLURM, a resource management program.
 *  For details, see <https://computing.llnl.gov/linux/slurm/>.
 *  Please also read the included file: DISCLAIMER.
 *  
 *  SLURM is free software; you can redistribute it and/or modify it under
 *  the terms of the GNU General Public License as published by the Free
 *  Software Foundation; either version 2 of the License, or (at your option)
 *  any later version.
 *
 *  In addition, as a special exception, the copyright holders give permission 
 *  to link the code of portions of this program with the OpenSSL library under
 *  certain conditions as described in each individual source file, and 
 *  distribute linked combinations including the two. You must obey the GNU 
 *  General Public License in all respects for all of the code used other than 
 *  OpenSSL. If you modify file(s) with this exception, you may extend this 
 *  exception to your version of the file(s), but you are not obligated to do 
 *  so. If you do not wish to do so, delete this exception statement from your
 *  version.  If you delete this exception statement from all source files in 
 *  the program, then also delete it here.
 *  
 *  SLURM is distributed in the hope that it will be useful, but WITHOUT ANY
 *  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 *  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 *  details.
 *  
 *  You should have received a copy of the GNU General Public License along
 *  with SLURM; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA.
\*****************************************************************************/

#ifndef _BLUEGENE_DYNAMIC_BLOCK_H_
#define _BLUEGENE_DYNAMIC_BLOCK_H_

#include "bluegene.h"

extern List create_dynamic_block(List block_list,
				 ba_request_t *request, List my_block_list,
				 bool track_down_nodes);

#ifdef HAVE_BGL 
extern bg_record_t *create_small_record(bg_record_t *bg_record, 
					uint16_t quarter, uint16_t nodecard);
#else
extern bg_record_t *create_small_record(bg_record_t *bg_record, 
					bitstr_t *ionodes, int size);
#endif

#endif /* _BLUEGENE_DYNAMIC_BLOCK_H_ */
