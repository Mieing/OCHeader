@interface WCLanDeviceServiceUtil : NSObject

+ (unsigned long long)deviceSceneForMsgWrap:(id)a0;
+ (unsigned long long)deviceSceneForTimeLineItem:(id)a0;
+ (unsigned long long)kissTypeForDevice:(id)a0;
+ (BOOL)canApplyLanDeviceData:(id)a0 withDevice:(id)a1;
+ (id)kissLogicForLanDeviceData:(id)a0 delegate:(id)a1;
+ (id)HDImagePathFromImageMsgWrap:(id)a0 inScene:(unsigned long long)a1;
+ (id)imagePathFromImageMsgWrap:(id)a0;
+ (id)imageKissMsgFromMsgWrap:(id)a0;
+ (id)filePathFromMsgWrap:(id)a0;
+ (id)fileKissMsgFromMsgWrap:(id)a0 isNeedFileDetail:(BOOL)a1;
+ (id)videoKissMsgFromMsgWrap:(id)a0 isNeedFileDetail:(BOOL)a1;
+ (id)imagePathFromImageTimeLineItem:(id)a0;
+ (id)imageKissMsgFromImageTimeLineItem:(id)a0;
+ (id)videoKissMsgFromTimeLineItem:(id)a0 isNeedFileDetail:(BOOL)a1;
+ (id)hashNameForString:(id)a0;
+ (id)fileExtInPath:(id)a0;

@end
