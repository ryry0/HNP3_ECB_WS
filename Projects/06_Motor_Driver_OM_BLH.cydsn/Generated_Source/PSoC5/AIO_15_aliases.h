/*******************************************************************************
* File Name: AIO_15.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_AIO_15_ALIASES_H) /* Pins AIO_15_ALIASES_H */
#define CY_PINS_AIO_15_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define AIO_15_0			(AIO_15__0__PC)
#define AIO_15_0_INTR	((uint16)((uint16)0x0001u << AIO_15__0__SHIFT))

#define AIO_15_INTR_ALL	 ((uint16)(AIO_15_0_INTR))

#endif /* End Pins AIO_15_ALIASES_H */


/* [] END OF FILE */