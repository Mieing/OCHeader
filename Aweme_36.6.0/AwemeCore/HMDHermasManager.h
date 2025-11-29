@class HMGlobalConfig, NSArray, NSString, HMInstance;

@interface HMDHermasManager : NSObject <HMEngineDelegate> {
    HMInstance *_sharedPerformanceInstance;
    HMInstance *_sharedHighPriorityInstance;
    HMInstance *_sharedTraceInstance;
    BOOL _isDataFlushedForLaunch;
    BOOL _isMigrateForwardStarted;
}

@property (class, nonatomic, getter=isHermasRefactorEnabled) BOOL hermasRefactorEnabled;

@property (retain, nonatomic) HMGlobalConfig *globalConfig;
@property (retain, nonatomic) NSArray *modules;
@property (nonatomic) BOOL devestateDB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__updateLocalSettingsFromConfig:(id)a0 isHermasEnabeld:(BOOL)a1;
+ (id)__readAndCacheLastSessionIfNeeded;
+ (void)setupLocalSettingsWhenDisabled:(id)a0;
+ (void)extremeCleanupWhenDisabled;
+ (void)initialize;

- (void)updateConfig:(id)a0;
- (void)cleanAllCache;
- (void)__addNotification;
- (id)instanceWithModuleId:(id)a0;
- (void)__addKVOObserver;
- (void)__startUploadWithEvent:(unsigned long long)a0 moduleId:(id)a1;
- (void)__updateGlobalConfig:(id)a0;
- (void)__uploadSuccessed:(id)a0;
- (id)instanceWithModuleId:(id)a0 sdkAid:(id)a1;
- (void)updateFlowControlStrategy:(long long)a0;
- (void)resumeUploadTimerWithModuleId:(id)a0;
- (void)pauseUploadTimerWithModuleId:(id)a0;
- (id)sharedPerformanceInstance;
- (id)sharedTraceInstance;
- (void)startUploadWithModuleId:(id)a0;
- (BOOL)dropUnhitSamplesForEngine:(id)a0;
- (BOOL)isNetworkAvailableForEngine:(id)a0;
- (id)commonRequestURLParamsForEngine:(id)a0;
- (id)engine:(id)a0 payloadHeaderForAid:(id)a1;
- (void)engine:(id)a0 onCloudCommandReceived:(id)a1;
- (BOOL)engine:(id)a0 isValidTag:(long long)a1;
- (void)engine:(id)a0 onSettingsUpdate:(id)a1;
- (id)engine:(id)a0 settingsRequestPayloadForApps:(id)a1;
- (void)engine:(id)a0 trackEventWithName:(id)a1 payload:(id)a2;
- (void)setupConfig:(id)a0;
- (void)updateSession:(id)a0;
- (id)latestSessionAtLastLaunch;
- (void)updateLocalDataWithModuleId:(id)a0;
- (id)sharedHighPriorityInstance;
- (void)uploadWithModuleId:(id)a0;
- (void)flushAndUploadWithModuleId:(id)a0;
- (void)cleanCacheWithModuleId:(id)a0;
- (void)onHeimdallrInitCompleted;
- (void)startUploadByUser;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
