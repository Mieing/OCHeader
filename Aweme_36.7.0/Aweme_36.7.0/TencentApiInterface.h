@interface TencentApiInterface : NSObject

+ (BOOL)handleOpenURL:(id)a0 delegate:(id)a1;
+ (int)sendRespMessageToTencentApp:(id)a0;
+ (BOOL)installIphoneQZone;
+ (BOOL)iphoneQZoneSupportApi;
+ (int)sendRespMessaageToThirdApp:(id)a0 appId:(id)a1;
+ (BOOL)canOpenURL:(id)a0 delegate:(id)a1;
+ (BOOL)isTencentAppInstall:(int)a0;
+ (BOOL)isTencentAppSupportTencentApi:(int)a0;

@end
