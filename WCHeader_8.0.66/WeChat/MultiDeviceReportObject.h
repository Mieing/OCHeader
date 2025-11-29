@interface MultiDeviceReportObject : NSObject

+ (void)reportTapBannerWithLoginDevices:(id)a0;
+ (void)reportAutoLoginToastWithIconType:(unsigned int)a0 deviceId:(id)a1;
+ (void)reportManageAction:(unsigned int)a0 info:(id)a1;
+ (void)reportLoginAction:(unsigned int)a0 info:(id)a1 options:(long long)a2;
+ (void)reportUnlockAction:(unsigned int)a0 iconType:(unsigned int)a1 deviceId:(id)a2;
+ (void)reportAction:(unsigned int)a0 iconType:(unsigned int)a1 deviceId:(id)a2 options:(long long)a3 devices:(id)a4;

@end
