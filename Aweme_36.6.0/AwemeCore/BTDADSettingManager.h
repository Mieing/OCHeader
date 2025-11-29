@interface BTDADSettingManager : NSObject

+ (BOOL)hitRitForReplaceTag:(id)a0;
+ (BOOL)enableBDADSDKProtocol;
+ (id)defaultSupportAppScheme;
+ (id)defaultSupportSysScheme;
+ (id)jumpInterceptBlackList;
+ (BOOL)enableAutoJumpIntercept;
+ (id)jumpInterceptWhiteList;

@end
