@interface AWESECWebSafetySettings : NSObject

+ (unsigned long long)maxWebViewPagesCount;
+ (BOOL)seclinkRequestInjectEnable;
+ (id)seclinkSqrHasLandingInjectEnableDict;
+ (id)seclinkSqrHasLandingInjectMatchSceneDict;
+ (id)seclinkRequestInjectSchemaParams;
+ (id)seclinkRequestInjectSceneCommonParams;
+ (id)seclinkRequestInjectSceneUniqueParams;
+ (id)webSafetySettings;
+ (id)seclinkParamsSettings;

@end
