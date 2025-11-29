@class NSString;

@interface AWEPluginSplashAdCustomImpl : NSObject <BDPSplashAdDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)bdp_splashAdDidClickWithModel:(id)a0;
- (id)splashAdUrlHost;

@end
