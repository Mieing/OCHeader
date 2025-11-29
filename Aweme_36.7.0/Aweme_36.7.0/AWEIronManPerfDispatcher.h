@class NSDictionary, NSString;

@interface AWEIronManPerfDispatcher : NSObject <BDPBootLifeCycleMessage, BDPContainerLifeCycleMessage>

@property (nonatomic) BOOL hitWindowOpt;
@property (nonatomic) int prevMaxCacheCount;
@property (copy, nonatomic) NSDictionary *memPerf;
@property (nonatomic) BOOL disableTracker;
@property (nonatomic) BOOL enableFeedPerf;
@property (copy, nonatomic) NSDictionary *nunkiPerf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)sharedInstance;

- (void)viewWillAppear:(id)a0 uniqueID:(id)a1;
- (void)applicationLoadFinishWithUniqueID:(id)a0 error:(id)a1 content:(id)a2 extraParams:(id)a3;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationSCFirstFrameDidShow:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)applicationTaskAndCommonReadyWithUniqueID:(id)a0 bootManager:(id)a1 isColdBoot:(BOOL)a2;
- (void)applicationDidFinishForMicroApp:(id)a0;
- (BOOL)enablePreloadWhenLaunching;
- (void)releasePreload:(id)a0;
- (void)enableFeedPlayerPerf:(id)a0;
- (void)reportData:(id)a0;
- (void)tryReduceWarmCache:(id)a0;
- (void)enableNunkiPerf:(id)a0;
- (void)informAwemeReloadTabBar:(id)a0;
- (void)preloadApp:(id)a0;
- (void)tryRecoverWarmCache:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidFinishLaunching:(id)a0;
- (id)init;
- (void)dealloc;

@end
