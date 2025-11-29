@class HybridContext, NSArray, NSString, HybridResourceLoaderConfig, NSMutableArray, HybridRLOperator;

@interface HybridDefaultResourceLoader : NSObject <HybridResourceLoaderProtocol, HybridResourceLoaderAdvancedOperatorProtocol> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _taskPoolLock;
}

@property (retain, nonatomic) NSMutableArray *taskPool;
@property (retain, nonatomic) NSMutableArray *globalProcessors;
@property (retain, nonatomic) NSMutableArray *globalMonitors;
@property (retain, nonatomic) HybridRLOperator *advancedOperator;
@property (copy, nonatomic) NSArray *processorsDefaultSequence;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long fetchIncreaser;
@property (retain, nonatomic) HybridResourceLoaderConfig *loaderConfig;
@property (weak, nonatomic) HybridContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registeGlobalMonitor:(id)a0;
+ (void)registeGlobalProcessor:(id)a0;
+ (void)reportLog:(id)a0;
+ (id)monitorWithTaskConfig:(id)a0;
+ (id)monitor;
+ (id)sharedInstance;
+ (void)reportError:(id)a0;
+ (id)defaultLoader;
+ (id)appid;

- (void)registeGlobalMonitor:(id)a0;
- (id)getAdvancedOperator;
- (void)updateLoaderConfig:(id)a0;
- (id)currentLoaderConfig;
- (id)fetchResourceWithURL:(id)a0 container:(id)a1 taskConfig:(id)a2 completion:(id /* block */)a3;
- (BOOL)cancelResourceLoad:(id)a0;
- (void)clearCacheWith:(id)a0;
- (id)targetUrlWithParamConfig:(id)a0;
- (id)getPerformanceMetric:(id)a0;
- (void)registeGlobalProcessor:(id)a0;
- (void)appendPrefixList:(id)a0 withAccessKey:(id)a1;
- (void)syncChannelIfNeeded:(id)a0 accessKey:(id)a1 completion:(id /* block */)a2;
- (void)registeDefaultAccessKey:(id)a0;
- (void)registeAccessKey:(id)a0 withPrefixList:(id)a1;
- (void)registeAccessKey:(id)a0 appendPrefixList:(id)a1;
- (id)openSession:(id)a0;
- (id)findPreloadConfigWith:(id)a0 taskConfig:(id)a1;
- (id)getDefaultAccessKey;
- (id)getFalconPrefixList;
- (unsigned long long)packageVersionForAccessKey:(id)a0 andChannel:(id)a1;
- (id)createNewPipelineWith:(id)a0 container:(id)a1 taskConfig:(id)a2 paramConfig:(id)a3;
- (void)reportFetchEventWithParamConfig:(id)a0 container:(id)a1 resourceProvider:(id)a2 metric:(id)a3 errorMessage:(id)a4;
- (void)completeWithTask:(id)a0 paramConfig:(id)a1 provider:(id)a2 loaderName:(id)a3 error:(id)a4 container:(id)a5;
- (void)onResourceLoadCompleted:(id)a0 inContainer:(id)a1 context:(id)a2;
- (void)addDefaultProcessorsWith:(id)a0 url:(id)a1 container:(id)a2 paramConfig:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)closeSession:(id)a0;
- (BOOL)deleteResource:(id)a0;

@end
