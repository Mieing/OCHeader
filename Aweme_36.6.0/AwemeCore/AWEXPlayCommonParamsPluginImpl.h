@class NSString;

@interface AWEXPlayCommonParamsPluginImpl : NSObject <XPlayCommonParamsPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)_aweLazyRegisterStaticLoad;

- (id)xplay_appId;
- (id)xplay_appVersion;
- (id)xplay_appChannel;
- (id)xplay_deviceId;
- (id)xplay_userId;

@end
