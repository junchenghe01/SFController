/**
 * @file main.c
 * @brief main
 * @details 略
 * @mainpage 略
 * @author 何俊成
 * @date 2023-10-17
 * @version v1.0.0
 * @par Copyright(c): hone
 * @par History:         
 *	version: author, date, desc\n
 *   v1.0.0: 何俊成, 2023-10-17, 初创\n
 */

#include "add/add.h"
#include "log.h"
/** Description of the macro a */
#define A		1

#define B		2  /*!< Description of the macro b */

/**  Description of global variable  */
int g_qwe = 0;
 
static int s_asd = 0; /*!< Description of static variable */

/** 
 * @brief		This is a brief description.
 * @details	    This is the detail description. 
 */
typedef struct
{
	int var1; /*!< Detailed description of the member var1 */
	int var2; /*!< Detailed description of the member var2*/
	int var3; /*!< Detailed description of the member var3 */
} abc;

/**
 * @brief 程序入口函数
 *
 * @param[in] argc 参数 1 的作用说明
 * @param[in] argv 参数 2 的作用说明
 * @return 返回值的作用说明
 */
int main(int argc, char *argv[])
{
    int a,b;
    a = A;
    b = B;
    g_qwe = a;
    s_asd = b;
    int c;
    c = add(a,b);
    printf("c is: %d\r\n", c);
    return 0;
}
