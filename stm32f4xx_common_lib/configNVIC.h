/*************************************************************************/
/* STM32F4のNVICを何とかする                                             */
/*                                 designed by hamayan since 2019/09/19  */
/*************************************************************************/
#ifndef  _CONFIG_NVIC_H_
#define  _CONFIG_NVIC_H_

#include  "stm32f4xx.h"
#include  "derivertive.h"

/*************************************************************************/
/* IOレジスタ定義                                                        */
/*************************************************************************/

/*************************************************************************/
/* レジスタ bit定義                                                      */
/*************************************************************************/

/*************************************************************************/
/* ビットフィールド定義                                                  */
/*************************************************************************/

/*************************************************************************/
/* その他の定義                                                          */
/*************************************************************************/

/*************************************************************************/
/* 大域変数宣言                                                          */
/*************************************************************************/

/*************************************************************************/
/* プロトタイプ宣言                                                      */
/*************************************************************************/
void NVIC_IRQEnable( uint8_t ch, uint8_t basePri, uint8_t subPri );
void NVIC_IRQDisable( uint8_t ch );


#endif  /*_CONFIG_NVIC_H_ */

/*************************************************************************/
/* end of file                                                           */
/*                                 designed by hamayan since 2019/09/19  */
/*************************************************************************/
