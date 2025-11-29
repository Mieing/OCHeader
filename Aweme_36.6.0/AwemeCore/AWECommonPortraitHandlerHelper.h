@interface AWECommonPortraitHandlerHelper : NSObject

+ (id)obtainNetQualityLevel;
+ (id)obtainIsWifi;
+ (id)obtainIsCharging;
+ (id)obtainBatteryPct;
+ (id)obtainCurrentThermalState;
+ (id)obtainSystemPowerState;
+ (id)obtainBatteryLevelLess;
+ (id)obtainThermalMitigationSwitchState;
+ (id)obtainHeadphoneState;
+ (id)obtainScrollState;
+ (id)obtainCpuLevel;
+ (id)obtainCpuOptRange;
+ (id)obtainHmdScene;
+ (id)obtainSceneName;
+ (id)obtainMemoryLevel;
+ (id)obtainMemorySystemPressureLevel;
+ (id)obtainTTNetChromeIOThreadScene;
+ (id)obtainLagLevel;
+ (BOOL)enableSmartServiceGetHeadphoneState;
+ (BOOL)nunkiResourceConditionEnabled;
+ (id)nunkiClientSceneNameConfig;
+ (BOOL)nunkiCurrentMemoryLevelEnabled;
+ (id)buildPortraitHandlerMap;

@end
