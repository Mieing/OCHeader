@class NSString;

@interface AWEXPlayTXSDKParamsPluginImpl : NSObject <XPlayTXStartSDKParamsPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)_aweLazyRegisterStaticLoad;

- (id)xplay_txStartAppName;
- (id)xplay_txStartLicense;

@end
