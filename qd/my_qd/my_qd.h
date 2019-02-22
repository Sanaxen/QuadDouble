#ifndef _MY_QD_H
#define _MY_QD_H

//quad-double(float以外) を使う場合
#define USE_QD_REAL

//quad-double(float以外) を使う場合で実態はfloatで動作検証する場合
#define USE_QD_REAL_TEST


#ifdef USE_QD_REAL
//quad-double を使う
#ifdef USE_QD_REAL_TEST
typedef long double my_quad_double;
#define TO_DOUBLE(x)	(x)
#else
#include "qd/qd_real.h"
typedef qd_real my_quad_double;
#define TO_DOUBLE(x)	to_double(x)
#endif

#else

//floatを使う（本来のコードで処理）
typedef double my_quad_double;
#define TO_DOUBLE(x)	(x)
#endif



#ifdef _MSC_VER
#ifdef _DEBUG
#ifdef _M_X64 
#pragma comment( lib, "C:/usr/QD/qd_2.3.4_windll/x64/static_release/qd.lib" )
#else
#pragma comment( lib, "C:/usr/QD/qd_2.3.4_windll/static_release/qd.lib" )
#endif
#else
#ifdef _M_X64 
#pragma comment( lib, "C:/usr/QD/qd_2.3.4_windll/x64/static_release/qd.lib" )
#else
#pragma comment( lib, "C:/usr/QD/qd_2.3.4_windll/static_release/qd.lib" )
#endif
#endif
#endif

#ifdef __BORLANDC__
#pragma comment( lib, "C:/usr/QD/bcb5/lib/qd_static.lib" )
#endif

/*
#ifdef WIN32
#pragma comment( lib, "opengl32.lib" )
#pragma comment( lib, "vfw32.lib")
#endif
*/
#endif
