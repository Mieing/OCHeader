@class NSMutableDictionary, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, HMEngineDelegate;

@interface HMEngine : NSObject {
    NSMutableDictionary *_container;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _containerLock;
}

@property (class, readonly) HMEngine *shared;

@property (nonatomic) BOOL fullUploadStarted;
@property (nonatomic) long long flowControlStrategy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;
@property (retain, nonatomic) NSDictionary *maxUploadSizeWeights;
@property (retain, nonatomic) NSMutableDictionary *descriptors;
@property (retain, nonatomic) id<HMEngineDelegate> delegate;
@property (retain, nonatomic) NSString *rootDirPath;

+ (void)__tryDeleteLegacyCacheDir:(struct shared_ptr<hermas::ModuleEnv> { struct ModuleEnv *x0; struct __shared_weak_count *x1; })a0;

- (void)startUpload;
- (void)searchWithParam:(id)a0 callback:(id /* block */)a1;
- (void)registerNetworkManager:(id)a0;
- (void)registerModuleWithDescriptor:(id)a0;
- (void)updateReportDegradeState:(BOOL)a0 moduleId:(id)a1;
- (void)updateGlobalConfig:(id)a0;
- (id)instanceWithConfig:(id)a0;
- (id)dumpSessionRecord;
- (void)updateSessionRecordWith:(id)a0;
- (void)uploadLocalDataWithModuleId:(id)a0;
- (void)updateFlowControlStrategy:(long long)a0;
- (void)resumeUploadTimerWithModuleId:(id)a0;
- (void)pauseUploadTimerWithModuleId:(id)a0;
- (void)triggerUploadManuallyWithModuleId:(id)a0;
- (void)triggerFlushAndUploadManuallyWithModuleId:(id)a0;
- (void)cleanAllCacheManuallyBeforeTime:(int)a0;
- (void)cleanAllCacheManuallyWithModuleId:(id)a0;
- (void)startUploadWithModuleId:(id)a0;
- (void)updateModuleConfig:(id)a0;
- (id)instanceWithModuleId:(id)a0 aid:(id)a1;
- (void)__syncGlobalConfig:(id)a0;
- (void)__syncModuleConfig:(id)a0 toModuleEnv:(struct shared_ptr<hermas::ModuleEnv> { struct ModuleEnv *x0; struct __shared_weak_count *x1; })a1;
- (void)__startUploadForModule:(struct shared_ptr<hermas::ModuleEnv> { struct ModuleEnv *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
