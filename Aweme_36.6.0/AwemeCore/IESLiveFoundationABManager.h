@interface IESLiveFoundationABManager : NSObject

+ (long long)screenCaptureMode;
+ (BOOL)liveStrategyDegradeEnable;
+ (BOOL)liveStrategyDynamicclarityEnable;
+ (BOOL)liveAnchorDuringLiveFactorDealEnable;
+ (BOOL)liveAnchorStartLiveStrategyEnable;
+ (BOOL)securityInPipEnableInV2;
+ (BOOL)securityOutPipEnableInV2;
+ (id)fixVideoCompositionDeviceList;
+ (id)fixVideoExportZeroCompositionDeviceList;
+ (BOOL)livePrfGurdResourceOpt;
+ (id)paidSecurityConfig;
+ (BOOL)liveDebugHitTestLog;
+ (BOOL)liveSdkSettingimpOptimize;
+ (BOOL)liveImageAsyncLoadEnable;
+ (id)liveDegradeAbilitiesConfig_enable;
+ (id)liveDegradeAbilitiesConfig_level1;
+ (id)liveDegradeAbilitiesConfig_level2;
+ (double)liveDegradeLikeanimationRateConfig_level1;
+ (double)liveDegradeLikeanimationRateConfig_level2;
+ (BOOL)liveOffscreenRenderOpt;
+ (BOOL)liveStrategyClarityEnable;
+ (BOOL)liveBpeaSwitch;
+ (id)liveReplaceGaussBlur;
+ (id)liveTraceUploadConfig;
+ (BOOL)copyRoomAuthWhenMerge;
+ (id)gpbMergeSelfProtector;
+ (BOOL)liveDIRemoveRecover;
+ (BOOL)enableScreenCapture;
+ (id)securityPrivateViewName;
+ (long long)screenCaptureOperationMode;

@end
