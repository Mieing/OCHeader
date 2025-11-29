@interface IESLiveGameOpenPlatformJSSDKManager : NSObject

+ (id)jssdkLynxVersion;
+ (id)_getJSSDKFileNameSubStringWithContainerType:(unsigned long long)a0;
+ (BOOL)_checkVersionRegex:(id)a0;
+ (id)_getLastedKeyWithContainerType:(unsigned long long)a0;
+ (void)_updateJSSDkWithVersion:(id)a0 containerType:(unsigned long long)a1;
+ (id)_getChannelWithContainerType:(unsigned long long)a0;
+ (id)_getAccessKey;
+ (id)_processVersionStringToNumber:(id)a0;
+ (void)updateJSSDKResourceWithContainerType:(unsigned long long)a0;
+ (id)getJSSDKPathWithContainerType:(unsigned long long)a0;

@end
