@class WAPreloadAppTask, NSString;

@interface WAPreloadGameAppTaskMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WAPreloadAppTask *preloadTask;
@property (nonatomic) long long wkFeatureVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldAllowPreloadByMoment:(unsigned int)a0 jitMode:(BOOL)a1;
+ (BOOL)haveGameAppRunningInBackground;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)resetWKFeatureVersion;
- (BOOL)shouldAllowPreloadJITRuntime;
- (void)createPreloadAppTask:(unsigned int)a0 jitMode:(BOOL)a1;
- (id)getPreloadTask;
- (void)detachCurrentPreloadTask;
- (void)releasePreloadTask;
- (void)genNewPreloadTaskIfNoTaskByMoment:(unsigned int)a0 jitMode:(BOOL)a1;
- (void)genNewPreloadTaskIfNoTask;
- (void)genNewPreloadTaskOnLaunch:(id)a0;
- (void)resetDelayReleasePreloadTask;
- (void).cxx_destruct;

@end
