# Mengyuzhe_SDK_V2500
Mengyuzhe  Hardware SDK Version 2.5

## 手册
https://www.kancloud.cn/mengyuzhe-supports/myz-v2500-sdk

## SDK 说明

当前 Version 2.5 SDK 主要支持使用梦语者 2.5 代芯片的势能反应舱，该版本使用C++编写发布，以动态链接库形式发布提供给第三方开发者使用
  
## SDK 功能
*  7组电机震动
*  AWSD 移动  

## 支持引擎
 目前以动态链接库形式发布的SDK，支持目前主流的游戏引擎，如下所列，但不局限于

  * Unreal 4
  * Unity 3d

## 初始化USB设备

### bool InitDevice_USB(int VendorID,  int ProductID )

>描述：初始化梦语者势能舱设备

>返回值：bool  初始化设备成功，否则返回false			

| 参数 | 类型 |说明 | 必须 |
| --- | --- | --- | --- |
| VendorID | int | 16进制的厂家标识 | 是 |
| ProductID | int | 16进制的产品标识 | 是 |

>梦语者势能反应舱的设备厂家标识为 0x11C0, 产品标识为 0x9876



## 关闭设备

### void CloseDevice_USB()

>描述：关闭梦语者势能舱设备，并释放资源

>返回值：void 		

## 震动

### int SendToDevice_USB(unsigned char Pos,int DurationTime)

>描述：发送指令，驱动电机震动

>返回值：int ，返回值 > 0 为成功，否是失败			

| 参数 | 类型 |说明 | 必须 |
| --- | --- | --- | --- |
| Pos| unsigned char| 电机编号  | 是 |
| DurationTime| int| 持续时间，单位：秒  |  是 |

>梦语者V2.5势能舱震动电机编号为：0x01,0x02,0x04,0x08,0x16,0x32,0x64 共7组

## 震动组合
梦语者V2.5势能舱支持多电机震动，只需要将震动电机的编号进行**按位与运算**即可。

```
//  电机震动组合例子
typedef unsigned char  BYTE;
BYTE pos = 0x01 | 0x02 | 0x08； // 1号电机，2号电机，4号电机 同时震动
int n = SendToDevice_USB(pos, 10); // 震动10秒
if( n > 0)
{
   printf("success\r\n");
}
```
