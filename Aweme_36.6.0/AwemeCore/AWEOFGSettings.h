@interface AWEOFGSettings : NSObject

+ (id)firstPartyH5DomainBlockList;
+ (id)firstPartyH5DomainList;
+ (id)secondPartyConfigList;
+ (BOOL)enableOFGJSBWithDefault:(BOOL)a0;
+ (id)enableOFGJSBWhiteList;
+ (id)globalWhiteJsbList;
+ (id)secondPartyConfigSettingsDict;
+ (id)clientMatchConfigDict;
+ (BOOL)enableOFGNative;
+ (BOOL)useAuthCache;
+ (BOOL)enableSendNativeInvokeEvent;
+ (id)blackScopeList;
+ (id)jsbSettingsDict;
+ (id)nativeSettingsDict;
+ (id)domainPartyConfigSettingsDict;
+ (BOOL)enableOFGJSB;

@end
