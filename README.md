# Mengyuzhe_SDK_V2500
Mengyuzhe  Hardware SDK Version 2.5

## SDK说明
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

>[info] 描述：初始化梦语者势能舱设备

>[warning] 返回值：bool  初始化设备成功，否则返回false			

| 参数 | 类型 |说明 | 必须 |
| --- | --- | --- | --- |
| VendorID | int | 16进制的厂家标识 | 是 |
| ProductID | int | 16进制的产品标识 | 是 |

>[info] 梦语者势能反应舱的设备厂家标识为 0x11C0, 产品标识为 0x9876


