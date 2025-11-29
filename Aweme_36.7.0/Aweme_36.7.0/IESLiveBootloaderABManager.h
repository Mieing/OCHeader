@class NSString;

@interface IESLiveBootloaderABManager : NSObject <IESLiveBootloaderABManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveEnterRoomOptimizeV4Config;
+ (id)stageMap;
+ (BOOL)enableEComHighPriority;
+ (BOOL)componentRemoteDataAnchorReuseEnable;
+ (BOOL)enterPreloadEnable;
+ (BOOL)bootloaderLogEnable:(BOOL)a0;
+ (BOOL)bootloaderThickLogEnable;
+ (long long)bootStrategy;
+ (id)enterPreloadDynamicComponentStage;
+ (BOOL)componentStageDynamicEnable;
+ (id)ecomDynamicP0Stage;
+ (BOOL)liveCycleTraceEnable;
+ (BOOL)compObserverRemoveInCloseEnable;
+ (id)bootloaderOptConfig;
+ (id)componentLoadConfig;
+ (id)liveComponentLoadStrategyConfig;
+ (id)liveComponentLoadStrategyDetail;
+ (id)liveComponentCreateConfig;
+ (BOOL)bootloaderOptEnable;
+ (BOOL)componentSplitFixedOptInAudience:(BOOL)a0;
+ (BOOL)componentBackupEventEnable;
+ (BOOL)bootloaderRemoteDataReadyOpt;
+ (BOOL)bootloaderDestroyOpt;
+ (BOOL)bootloaderPreloadEnable;
+ (BOOL)enableLinearScheduling;
+ (BOOL)bootloaderAsyncOperation;
+ (BOOL)bootloaderStepByStep;
+ (BOOL)enableAsyncTracker;
+ (id)blockList;


@end
