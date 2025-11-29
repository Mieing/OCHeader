@interface PuzzleSettingManager : NSObject

+ (id)sharedManager;

- (BOOL)isPIAEnabled;
- (BOOL)piaNotUsePuzzleLifeCycle;
- (BOOL)enableLatch;
- (BOOL)enableLatchAheadToHandleSchema;
- (BOOL)isPerformanceMonitorEnabled;
- (id)commonGlobalPropertiesWithURL:(id)a0 routerParams:(id)a1 context:(id)a2;
- (BOOL)topLevelOptimizeEnable;
- (BOOL)enableDefaultForestPreload;
- (BOOL)inFontScaleListWith:(id)a0;
- (void)addPrivateDomains:(id)a0;
- (BOOL)isOfflineForURL:(id)a0;
- (id)offlineMetaForURL:(id)a0;
- (void)configPrivateDomains:(BOOL)a0;
- (BOOL)jsbLazyLoadEnable;
- (BOOL)disableResetNaviBarHidden;
- (id)liveAnnieLatchCDNExperimentConfig;
- (id)liveAnnieForestWebExperimentConfig;
- (BOOL)enableForestStreamLoad;
- (BOOL)disableRegularMatchInAllowList;
- (unsigned long long)enableForestHttpHeader;
- (unsigned long long)enableForestLooseLimit;
- (id)forestWebResourceAllowList;
- (id)abMonitorContext;
- (id)jsbPvAllowList;
- (BOOL)inAllowListWith:(id)a0;
- (long long)enableForestAutoResourceLoadStrategy;
- (BOOL)skipLynxImageForestMonitor;
- (BOOL)globalPropsLazyLoadDisable;
- (BOOL)disableWebURLIntercept;
- (BOOL)isInHybridKitBlockList:(id)a0;
- (BOOL)forbidObservingScreenshotNotification;
- (id)liveAnnieWebViewTerminateRescuerConfig;
- (id)userAgent;
- (id)allowList;

@end
