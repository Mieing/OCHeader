@interface WeChatApiUtil : NSObject

+ (BOOL)isWXAppSupportApi;
+ (BOOL)isWXSupportUniversalLinkAPI;
+ (id)genSchemePrefixWithAppId:(id)a0;
+ (id)genUniversalLinkPrefixWithAppId:(id)a0 universalLink:(id)a1;
+ (id)getAppUrl:(id)a0;
+ (BOOL)isiOS15plus;
+ (BOOL)isiOS10plus;
+ (BOOL)isiOS12plus;
+ (BOOL)isiOS13plus;
+ (BOOL)isiOS16Plus;
+ (BOOL)is2xScreen;
+ (id)getWechatSchemeUrl:(id)a0;
+ (id)getWechatUniversalLink:(id)a0;
+ (BOOL)isAppOpenUrl:(id)a0 appID:(id)a1 universalLink:(id)a2;
+ (BOOL)isOpenUrlApiCall:(id)a0 apiName:(id)a1 appID:(id)a2 universalLink:(id)a3;
+ (BOOL)isAppInstalledWithCatchException:(id)a0;
+ (BOOL)isAppInstalledWithoutCatchException:(id)a0;
+ (id)getAppUrlWithPlatformId:(id)a0;
+ (id)getAppUrlWithPlatformId:(id)a0 withOtherArgs:(id)a1;
+ (id)DecodeWithBase64:(id)a0;
+ (unsigned int)genCurrentTime;
+ (BOOL)isWXSupportParseParamsFromURL;
+ (id)appendQueryToUrl:(id)a0 key:(id)a1 value:(id)a2;
+ (id)getSDKVersion;
+ (BOOL)isiPad;
+ (BOOL)launchApp:(id)a0;
+ (id)dataFromPropertyList:(id)a0;
+ (id)propertyListFromData:(id)a0;
+ (id)sha256:(id)a0;
+ (id)parseURLParams:(id)a0;

@end
