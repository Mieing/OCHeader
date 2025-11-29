@class NSString, MMFlutterEngineGroup, MMFlutterAutoReleaseEngineGroupHelper, DartServiceCallerApi;

@interface MMFlutterEngineService : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) MMFlutterEngineGroup *sharedEngineGroup;
@property (retain, nonatomic) MMFlutterAutoReleaseEngineGroupHelper *autoReleaseHelper;
@property (retain, nonatomic) DartServiceCallerApi *dartServiceCaller;
@property (nonatomic) BOOL recreateEngineGroup;
@property (nonatomic) BOOL receivePerfWarning;
@property (nonatomic) BOOL swapMemOnStart;
@property (readonly, nonatomic) int liveEngineCount;
@property (readonly, nonatomic) int foregroundType;
@property (readonly, nonatomic) BOOL enableNewPreRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)reportEngineInfo;

- (void)onServiceInit;
- (void)initQosControl;
- (void)onServiceTerminate;
- (id)getSharedEngineGroup;
- (id)getDartServiceCaller;
- (void)updateFlutterUIContext;
- (void)onAccountLogout;
- (void)createSharedEngineGroup;
- (void)checkRecreate;
- (void)tryReleaseEngineGroup;
- (void)tryReleaseEngineGroup:(long long)a0;
- (void)_tryReleaseEngineGroup:(long long)a0 destroy:(BOOL)a1;
- (void)onServiceClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServiceEnterForeground;
- (void)handlePerfWarningNotification:(id)a0;
- (void)processPowerModeChange;
- (void)delayResumeEngineQos;
- (void)reportQosChanged:(long long)a0 isReceiveLowPowerModeChanged:(BOOL)a1 isReceiveMatrixPerfWarning:(BOOL)a2 matrixPerfWarningType:(int)a3;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)swapMemToFile:(BOOL)a0;
- (void)swapMemFromFile:(BOOL)a0;
- (void).cxx_destruct;

@end
