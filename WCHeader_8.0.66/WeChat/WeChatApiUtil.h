@interface WeChatApiUtil : NSObject

+ (id)propertyListFromData:(id)a0;
+ (id)dataFromPropertyList:(id)a0;
+ (id)getAppUrl:(id)a0;
+ (BOOL)isAppInstalledWithCatchException:(id)a0;
+ (BOOL)isAppInstalledWithoutCatchException:(id)a0;
+ (id)getAppUrlWithPlatformId:(id)a0;
+ (id)getAppUrlWithPlatformId:(id)a0 withParameter:(id)a1;
+ (BOOL)isWXAppSupportApi;
+ (id)_internal_getSDKVersion;
+ (id)getSDKVersion;

@end
