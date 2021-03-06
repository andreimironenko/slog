/* 
 *  Copyright (c) 2008 Texas Instruments. All rights reserved. 
 *  This program and the accompanying materials are made available under the 
 *  terms of the Eclipse Public License v1.0 and Eclipse Distribution License
 *  v. 1.0 which accompanies this distribution. The Eclipse Public License is
 *  available at http://www.eclipse.org/legal/epl-v10.html and the Eclipse
 *  Distribution License is available at 
 *  http://www.eclipse.org/org/documents/edl-v10.php.
 *
 *  Contributors:
 *      Texas Instruments - initial implementation
 * */
/*
 *  ======== TimestampNull.c ========
 */

#include <sstd.h>
#include <Types.h>

/*
 *  ======== TimestampNull_get64 ========
 */
Void TimestampNull_get64(Types_Timestamp64 *result)
{
    result->lo = result->hi = ~0;
}
/*
 *  @(#) xdc.runtime; 2, 1, 0,292; 9-14-2010 16:36:40; /db/ztree/library/trees/xdc/xdc-v49x/src/packages/
 */