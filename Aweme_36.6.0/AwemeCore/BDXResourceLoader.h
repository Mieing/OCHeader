@class NSString, BDXRLOperator, NSArray, BDXResourceLoaderConfig, NSMutableArray, BDXRLPreloadInfoManager;
@protocol BDXRLSecurityInterceptorProtocol, BDXRLMonitorDelegate;

@interface BDXResourceLoader : NSObject <BDXResourceLoaderProtocol> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _taskPoolLock;
}

@property (class, readonly, nonatomic) BDXResourceLoaderConfig *globalLoaderConfig;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) BDXResourceLoaderConfig *loaderConfig;
@property (retain, nonatomic) NSMutableArray *taskPool;
@property (retain, nonatomic) BDXRLOperator *advancedOperator;
@property (copy, nonatomic) NSArray *processorsDefaultSequence;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long fetchIncreaser;
@property (retain, nonatomic) BDXRLPreloadInfoManager *preloadInfoManager;
@property (retain, nonatomic) NSMutableArray *processors;
@property (retain, nonatomic) NSMutableArray *monitors;
@property (retain) id<BDXRLMonitorDelegate> monitorDelegate;
@property (retain) id<BDXRLSecurityInterceptorProtocol> securityInterceptor;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)registeGlobalMonitor:(id)a0;
+ (id)extractURLDetail:(id)a0 withPrefix:(id)a1;
+ (void)setupGlobalSecurityInterceptor:(id)a0;
+ (id)globalSecurityInterceptor;
+ (id)bdxrl_createLoaderWithMonitor:(id)a0;
+ (id)defaultMonitorDelegate;
+ (id)defaultMonitorDelegate;
+ (id)globalProcessor;
+ (id)globalMonitor;
+ (id)mergeLoaderConfig:(id)a0 to:(id)a1;
+ (id)convertAnimateImageSerialQueue;
+ (void)updateGlobalLoaderConfig:(id)a0;
+ (void)registeGlobalProcessor:(id)a0;
+ (id)sharedInstance;
+ (unsigned long long)serviceType;
+ (id)appId;
+ (id)appid;

- (void)registeGlobalMonitor:(id)a0;
- (id)getAdvancedOperator;
- (void)updateLoaderConfig:(id)a0;
- (id)currentLoaderConfig;
- (id)fetchResourceWithURL:(id)a0 container:(id)a1 taskConfig:(id)a2 completion:(id /* block */)a3;
- (id)fetchResourceWithURL:(id)a0 taskConfig:(id)a1 completion:(id /* block */)a2;
- (BOOL)cancelResourceLoad:(id)a0;
- (id)extractChannelAndBundleFromURL:(id)a0 taskConfig:(id)a1;
- (void)clearCacheWith:(id)a0;
- (BOOL)isCompliantRemoteUrl:(id)a0;
- (id)fetchLocalResourceWithURL:(id)a0 taskConfig:(id)a1 error:(id *)a2;
- (void)bdxrl_setMonitor:(id)a0;
- (id)fetchImageDataWithURLString:(id)a0 taskConfig:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 downsampling:(id)a3 deviceScore:(double)a4 completion:(id /* block */)a5;
- (id)getLocalPathWithURL:(id)a0 taskConfig:(id)a1 error:(id *)a2;
- (id)imageWithData:(id)a0 downsampling:(BOOL)a1 downsampleSize:(struct CGSize { double x0; double x1; })a2;
- (id)createNewPipelineWith:(id)a0 taskConfig:(id)a1 paramConfig:(id)a2;
- (void)reportFetchEventWithParamConfig:(id)a0 resourceProvider:(id)a1 metric:(id)a2 errorMessage:(id)a3;
- (void)completeWithTask:(id)a0 paramConfig:(id)a1 provider:(id)a2 loaderName:(id)a3 error:(id)a4;
- (void)assignOfflineRule:(id)a0 resourceProvider:(id)a1;
- (void)addDefaultProcessorsWith:(id)a0 url:(id)a1 paramConfig:(id)a2;
- (BOOL)isLegalUrl:(id)a0 paramConfig:(id)a1;
- (BOOL)isFirstRecordWithChannel:(id)a0;
- (void)saveFirstRecordWithChannel:(id)a0;
- (id)getPerformanceMetric:(id)a0;
- (id)__recordChannelAllowList;
- (id)__storageKeyWithChannel:(id)a0;
- (void)registeGlobalProcessor:(id)a0;
- (id)initWithGlobalConfig;
- (void)removeTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (BOOL)deleteResource:(id)a0;

@end
