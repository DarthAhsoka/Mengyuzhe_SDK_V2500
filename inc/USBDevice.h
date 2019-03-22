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
 **  		������2.0ϵͳ����SDK 
 **         �忨оƬ����:Version 2.5
 **		    --1��8��λ��
 **
 **	    History:
 **			==================================================================
 **         |   Event	|		Time	  |    Description					 |
 **         ==================================================================
 **         |   Create  |     2018-3-19   |      �����ļ�                     |
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
/* @param VendorID [int] �豸��ID											*/
/* @param ProductID [int] USB��ƷID										*/
/* @return [bool] true ��ʼ���豸�ɹ������򷵻�false							*/
/* @version 2.0															*/
/* @history																*/
/*		[2019/3/13] CREATE BY Mengyuzhe									*/
/* @beirf                                                               */
/* ��ʼ��USB�豸   														*/
/************************************************************************/
USBDEVICEDLL_DECLSPEC bool InitDevice_USB(int VendorID, int ProductID);


/************************************************************************/
/* CloseDevice_USB														*/
/* @version 2.0															*/
/* @history																*/
/*		[2019/3/13] CREATE BY Mengyuzhe									*/
/* @beirf                                                               */
/* �ر�USB�豸���ͷ���Դ													*/
/************************************************************************/
USBDEVICEDLL_DECLSPEC void CloseDevice_USB();

/************************************************************************/
/* SendToDevice_USB	   													*/
/* @param cbSendData	[unsigned char]  �𶯵�λ����ţ�1-8��)	   			*/
/*						��λ���ı�ŷֱ��� 1,2,4,8,16,32,64,128��8����		*/
/*						ͨ����λ�����㼴����������𶯵ĵ�λ��					*/					
/*																		*/					
/*						��Ҫ�𶯵ĵ�λ������������Ӧ��ֵ����Ϊ1Ϊ��	   		*/
/* @param DurationTime  [int] ����ʱ��(��λ����)							*/
/* @return 																*/
/* @version 2.0															*/
/* @history																*/
/*		[2019/3/13] CREATE BY Mengyuzhe									*/
/* @beirf                                                               */
/* ���Ƶ�λ����															*/
/*																		*/
/* @Example																*/
/*	    // ��1,3,8�ŵ�λ���� 2��   										*/
/*		unsigned char = 1|4|128											*/
/*		SendToDevice_USB(nPos,2);										*/
/*																		*/
/*																		*/
/************************************************************************/
USBDEVICEDLL_DECLSPEC int SendToDevice_USB(unsigned char Pos,int DurationTime);

#endif