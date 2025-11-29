@interface IESECAppInfo : NSObject

+ (BOOL)isSaaSTarget;
+ (id)currentTargetName;
+ (BOOL)isDouyinSeries;
+ (id)IESECSDKVersion;
+ (id)appMethodPrefix;
+ (id)IESECSDKFormatVersion;
+ (int)IESECCurrentPlatform;
+ (int)IESECClientVersionNumber;
+ (Class)appInfo;
+ (int)currentNetworkStatus;

@end
