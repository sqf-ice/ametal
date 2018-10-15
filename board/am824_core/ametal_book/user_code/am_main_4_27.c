/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief �����嵥4.27
 *
 * \note ��������Ҫ�õ�miniport��չ��
 *
 * \internal
 * \par Modification history
 * - 1.00 18-09-12  adw, first implementation
 * \endinternal
 */
 #include "ametal.h"
 #include "am_softimer.h"
static void timer_callback (void *p_arg)
{
    // ��ʱʱ�䵽�����ûص�����ִ���û��Զ��������
}

static am_softimer_t timer;                                  // ����һ����ʱ��ʵ��
int am_main (void)
{
    am_softimer_init(&timer,timer_callback, NULL);    // ��ʼ����ʱ��
    while(1) {
		}
}



/* end of file */
