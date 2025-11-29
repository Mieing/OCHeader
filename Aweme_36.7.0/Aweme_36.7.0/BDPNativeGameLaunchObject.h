@class NSString;

@interface BDPNativeGameLaunchObject : BDPLaunchObjectBase <BDPBootLifeCycleMessage, BDPGamePrebootManagerMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)openWithLaunchParam:(id)a0;
+ (void)bootstrapLaunch;
+ (id)containerControllerWithLaunchParam:(id)a0;
+ (void)rootNaviPresentVC:(id)a0 containerVC:(id)a1 param:(id)a2;
+ (void)launchRouteStartWithLaunchParam:(id)a0 uniqueID:(id)a1;
+ (void)clearPluginPreLaunch;
+ (void)setupHeartbeatTrackerWithAppId:(id)a0;
+ (id)nativeGametypeStringWithType:(long long)a0;

- (void)applicationColdBootWithUniqueID:(id)a0 coldBootType:(unsigned long long)a1;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationSCFirstFrameDidShow:(id)a0;
- (void)applicationWarmBootDoneWithUniqueID:(id)a0;
- (void)applicationWarmBootSuccessWithUniqueID:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)applicationTaskAndCommonReadyWithUniqueID:(id)a0 bootManager:(id)a1 isColdBoot:(BOOL)a2;
- (id)initWithLaunchParam:(id)a0;
- (void)rebootWithLaunchParam:(id)a0 isLandscape:(BOOL)a1;
- (id)customLoadMetaAndPkgWithContext:(id)a0;
- (void)feedGameStatusChange:(unsigned long long)a0 uniqueID:(id)a1;
- (void)reportGameHistory;
- (void)reportMPEnterSuccess:(id)a0;
- (void)onGameFirstFrame:(id)a0;
- (void)registerToolbarBubbleManager:(id)a0;
- (void)registerLynxEventManager:(id)a0;
- (void)registerScreenshotManager:(id)a0;
- (void)dealloc;

@end
