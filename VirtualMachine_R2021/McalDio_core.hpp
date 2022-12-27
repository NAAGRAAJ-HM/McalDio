#pragma once
/******************************************************************************/
/* File   : McalDio_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalDio.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define DIO_CORE_FUNCTIONALITIES                                               \
              FUNC(void, DIO_CODE) ReadChannel       (void);                   \
              FUNC(void, DIO_CODE) WriteChannel      (void);                   \
              FUNC(void, DIO_CODE) ReadMcalPort          (void);                   \
              FUNC(void, DIO_CODE) WriteMcalPort         (void);                   \
              FUNC(void, DIO_CODE) ReadChannelGroup  (void);                   \
              FUNC(void, DIO_CODE) WriteChannelGroup (void);                   \
              FUNC(void, DIO_CODE) FlipChannel       (void);                   \

#define DIO_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, DIO_CODE) ReadChannel       (void) = 0;               \
      virtual FUNC(void, DIO_CODE) WriteChannel      (void) = 0;               \
      virtual FUNC(void, DIO_CODE) ReadMcalPort          (void) = 0;               \
      virtual FUNC(void, DIO_CODE) WriteMcalPort         (void) = 0;               \
      virtual FUNC(void, DIO_CODE) ReadChannelGroup  (void) = 0;               \
      virtual FUNC(void, DIO_CODE) WriteChannelGroup (void) = 0;               \
      virtual FUNC(void, DIO_CODE) FlipChannel       (void) = 0;               \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalDio_Functionality{
   public:
      DIO_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
