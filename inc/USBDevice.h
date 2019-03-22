/*
 ** 	Copyright (c) 2016-2021 Chongqing  PROPHECY Technology Co.,Ltd.
 ** 	Website: https://www.mengyuzhe.com
 **
 ** 	File:       USBDevice.h
 **
 **  	Version: 2.0
 ** 	Author : DarthAhsoka , Jarvan
 ** 	Mail   : lx@mengyuzhe.com
 **
 **
 ** 	Abstract :
 **  		梦语者2.0系统配套SDK 
 **         板卡芯片驱动:Version 2.5
 **		    --1、8电位震动
 **
 **	    History:
 **			==================================================================
 **         |   Event	|		Time	  |    Description					 |
 **         ==================================================================
 **         |   Create  |     2018-3-19   |      创建文件                     |
 **         ==================================================================
 **
 **
*/
#pragma once
#ifndef USBDeviceDLL_H_
#define USBDeviceDLL_H_
#ifdef USBDEVICEDLL_DECLSPEC
#define USBDEVICEDLL_DECLSPEC extern "C" _declspec(dllimport) 
#else
#define USBDEVICEDLL_DECLSPEC extern "C" _declspec(dllexport) 
#endif
/************************************************************************/
/* @param VendorID [int] 设备商ID											*/
/* @param ProductID [int] USB产品ID										*/
/* @return [bool] true 初始化设备成功，否则返回false							*/
/* @version 2.0															*/
/* @history																*/
/*		[2019/3/13] CREATE BY Mengyuzhe									*/
/* @beirf                                                               */
/* 初始化USB设备   														*/
/************************************************************************/
USBDEVICEDLL_DECLSPEC bool InitDevice_USB(int VendorID, int ProductID);


/************************************************************************/
/* CloseDevice_USB														*/
/* @version 2.0															*/
/* @history																*/
/*		[2019/3/13] CREATE BY Mengyuzhe									*/
/* @beirf                                                               */
/* 关闭USB设备，释放资源													*/
/************************************************************************/
USBDEVICEDLL_DECLSPEC void CloseDevice_USB();

/************************************************************************/
/* SendToDevice_USB	   													*/
/* @param cbSendData	[unsigned char]  震动电位器编号（1-8号)	   			*/
/*						电位器的编号分别是 1,2,4,8,16,32,64,128共8个，		*/
/*						通过按位与运算即可自由组合震动的电位器					*/					
/*																		*/					
/*						需要震动的电位器，将索引对应的值设置为1为震动	   		*/
/* @param DurationTime  [int] 持续时间(单位：秒)							*/
/* @return 																*/
/* @version 2.0															*/
/* @history																*/
/*		[2019/3/13] CREATE BY Mengyuzhe									*/
/* @beirf                                                               */
/* 控制电位器震动															*/
/*																		*/
/* @Example																*/
/*	    // 让1,3,8号电位器震动 2秒   										*/
/*		unsigned char = 1|4|128											*/
/*		SendToDevice_USB(nPos,2);										*/
/*																		*/
/*																		*/
/************************************************************************/
USBDEVICEDLL_DECLSPEC int SendToDevice_USB(unsigned char Pos,int DurationTime);

#endif