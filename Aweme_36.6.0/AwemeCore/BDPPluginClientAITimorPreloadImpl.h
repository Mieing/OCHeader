@class NSString;

@interface BDPPluginClientAITimorPreloadImpl : NSObject <BDPClientAITimorPreloadPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)preloadUsedClientAIDetectWithSchema:(id)a0 completion:(id /* block */)a1;

@end
