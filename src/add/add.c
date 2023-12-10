/**
 * @file add.c
 * @brief 实现加法功能的源文件
 * @details 这个文件包含了一个用于计算两个整数之和的函数。
 * @mainpage 略
 * @author 何俊成
 * @date 2023-10-17
 * @version v1.0.0
 * @par Copyright(c): hone
 * @par History:         
 *	version: author, date, desc\n
 *   v1.0.0: 何俊成, 2023-10-17, 初创\n
 */


#include "add.h"
#include "log.h"

int add( int a, int b)
{
    log_trace("Hello %s", "world");
    log_debug("Hello %s", "world");
    log_info("Hello %s", "world");
    log_warn("Hello %s", "world");
    log_error("Hello %s", "world");
    log_fatal("Hello %s", "world");
    return a + b;
}

