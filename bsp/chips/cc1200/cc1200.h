/**
 * Author: Pere Tuset (peretuset@openmote.com)
           Jonathan Muñon (jonathan.munoz@inria.fr)
 * Date:   May 2016
 * Description: Register definitions for the Texas Instruments CC1200 radio chip.
 */

#ifndef __CC1200_H
#define __CC1200_H

//=========================== defines =========================================

typedef struct {
} cc1200_status_t;

//=========================== variables =======================================


//=========================== prototypes ======================================

void cc1200_gpio0_interrupt(void);
void cc1200_gpio2_interrupt(void);
void cc1200_gpio3_interrupt(void);

//=========================== public ==========================================


//=========================== private =========================================


//=========================== callbacks =======================================


//=========================== interrupt handlers ==============================

#endif