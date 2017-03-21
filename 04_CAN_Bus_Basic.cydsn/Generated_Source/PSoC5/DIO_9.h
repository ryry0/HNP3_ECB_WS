/*******************************************************************************
* File Name: DIO_9.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_DIO_9_H) /* Pins DIO_9_H */
#define CY_PINS_DIO_9_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "DIO_9_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 DIO_9__PORT == 15 && ((DIO_9__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    DIO_9_Write(uint8 value);
void    DIO_9_SetDriveMode(uint8 mode);
uint8   DIO_9_ReadDataReg(void);
uint8   DIO_9_Read(void);
void    DIO_9_SetInterruptMode(uint16 position, uint16 mode);
uint8   DIO_9_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the DIO_9_SetDriveMode() function.
     *  @{
     */
        #define DIO_9_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define DIO_9_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define DIO_9_DM_RES_UP          PIN_DM_RES_UP
        #define DIO_9_DM_RES_DWN         PIN_DM_RES_DWN
        #define DIO_9_DM_OD_LO           PIN_DM_OD_LO
        #define DIO_9_DM_OD_HI           PIN_DM_OD_HI
        #define DIO_9_DM_STRONG          PIN_DM_STRONG
        #define DIO_9_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define DIO_9_MASK               DIO_9__MASK
#define DIO_9_SHIFT              DIO_9__SHIFT
#define DIO_9_WIDTH              1u

/* Interrupt constants */
#if defined(DIO_9__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in DIO_9_SetInterruptMode() function.
     *  @{
     */
        #define DIO_9_INTR_NONE      (uint16)(0x0000u)
        #define DIO_9_INTR_RISING    (uint16)(0x0001u)
        #define DIO_9_INTR_FALLING   (uint16)(0x0002u)
        #define DIO_9_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define DIO_9_INTR_MASK      (0x01u) 
#endif /* (DIO_9__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define DIO_9_PS                     (* (reg8 *) DIO_9__PS)
/* Data Register */
#define DIO_9_DR                     (* (reg8 *) DIO_9__DR)
/* Port Number */
#define DIO_9_PRT_NUM                (* (reg8 *) DIO_9__PRT) 
/* Connect to Analog Globals */                                                  
#define DIO_9_AG                     (* (reg8 *) DIO_9__AG)                       
/* Analog MUX bux enable */
#define DIO_9_AMUX                   (* (reg8 *) DIO_9__AMUX) 
/* Bidirectional Enable */                                                        
#define DIO_9_BIE                    (* (reg8 *) DIO_9__BIE)
/* Bit-mask for Aliased Register Access */
#define DIO_9_BIT_MASK               (* (reg8 *) DIO_9__BIT_MASK)
/* Bypass Enable */
#define DIO_9_BYP                    (* (reg8 *) DIO_9__BYP)
/* Port wide control signals */                                                   
#define DIO_9_CTL                    (* (reg8 *) DIO_9__CTL)
/* Drive Modes */
#define DIO_9_DM0                    (* (reg8 *) DIO_9__DM0) 
#define DIO_9_DM1                    (* (reg8 *) DIO_9__DM1)
#define DIO_9_DM2                    (* (reg8 *) DIO_9__DM2) 
/* Input Buffer Disable Override */
#define DIO_9_INP_DIS                (* (reg8 *) DIO_9__INP_DIS)
/* LCD Common or Segment Drive */
#define DIO_9_LCD_COM_SEG            (* (reg8 *) DIO_9__LCD_COM_SEG)
/* Enable Segment LCD */
#define DIO_9_LCD_EN                 (* (reg8 *) DIO_9__LCD_EN)
/* Slew Rate Control */
#define DIO_9_SLW                    (* (reg8 *) DIO_9__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define DIO_9_PRTDSI__CAPS_SEL       (* (reg8 *) DIO_9__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define DIO_9_PRTDSI__DBL_SYNC_IN    (* (reg8 *) DIO_9__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define DIO_9_PRTDSI__OE_SEL0        (* (reg8 *) DIO_9__PRTDSI__OE_SEL0) 
#define DIO_9_PRTDSI__OE_SEL1        (* (reg8 *) DIO_9__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define DIO_9_PRTDSI__OUT_SEL0       (* (reg8 *) DIO_9__PRTDSI__OUT_SEL0) 
#define DIO_9_PRTDSI__OUT_SEL1       (* (reg8 *) DIO_9__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define DIO_9_PRTDSI__SYNC_OUT       (* (reg8 *) DIO_9__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(DIO_9__SIO_CFG)
    #define DIO_9_SIO_HYST_EN        (* (reg8 *) DIO_9__SIO_HYST_EN)
    #define DIO_9_SIO_REG_HIFREQ     (* (reg8 *) DIO_9__SIO_REG_HIFREQ)
    #define DIO_9_SIO_CFG            (* (reg8 *) DIO_9__SIO_CFG)
    #define DIO_9_SIO_DIFF           (* (reg8 *) DIO_9__SIO_DIFF)
#endif /* (DIO_9__SIO_CFG) */

/* Interrupt Registers */
#if defined(DIO_9__INTSTAT)
    #define DIO_9_INTSTAT            (* (reg8 *) DIO_9__INTSTAT)
    #define DIO_9_SNAP               (* (reg8 *) DIO_9__SNAP)
    
	#define DIO_9_0_INTTYPE_REG 		(* (reg8 *) DIO_9__0__INTTYPE)
#endif /* (DIO_9__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_DIO_9_H */


/* [] END OF FILE */
