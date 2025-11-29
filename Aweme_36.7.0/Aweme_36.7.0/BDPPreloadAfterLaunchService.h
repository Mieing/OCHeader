@interface BDPPreloadAfterLaunchService : NSObject

+ (void)bootstrapLaunch;
+ (id)sharedInstance;

- (id)preloadMpidList;
- (void)preparePreloadAfterLaunchForTimor;
- (long long)getTypeFromConfigKey:(id)a0;
- (void)realPreloadAfterLaunchForTimorWithImmediateMpids:(id)a0 type:(long long)a1;
- (void)realPreloadAfterLaunchForTimorWithDelayMpids:(id)a0 type:(long long)a1;

@end
