@class NSDictionary, NSMutableDictionary, AWEECDynamicComponentModel;

@interface AWEECNativePrefetchManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _tab_lock;
}

@property (retain, nonatomic) NSMutableDictionary *prefetchProcessorMap;
@property (retain, nonatomic) NSMutableDictionary *prefetchCallbacks;
@property (retain, nonatomic) NSMutableDictionary *processorReusePool;
@property (retain, nonatomic) AWEECDynamicComponentModel *preloadModel;
@property (retain, nonatomic) NSDictionary *sectionViewModelDict;

+ (long long)abilityConfigForSchema:(id)a0 configKey:(id)a1;
+ (BOOL)enableSyncPrefetch;
+ (id)sharedManager;

- (id)gurdAccessKey;
- (id)triggerNativePrefetch:(id)a0 certId:(id)a1;
- (id)triggerNativePrefetch:(id)a0 certId:(id)a1 requestConfig:(id)a2;
- (id)createNativePrefetchWithConfigTag:(id)a0;
- (BOOL)triggerNativePrefetch:(id)a0 channel:(id)a1 bundle:(id)a2 setting:(id)a3 useForest:(BOOL)a4 requestId:(id)a5 requestConfig:(id)a6;
- (BOOL)triggerNativePrefetch:(id)a0 fullUrl:(id)a1 setting:(id)a2 requestId:(id)a3 requestConfig:(id)a4;
- (id)triggerNativePrefetch:(id)a0 prefetchConfig:(id)a1 prefetchId:(id)a2 startProcessTime:(long long)a3 configSource:(unsigned long long)a4 requestConfig:(id)a5;
- (void)getForestConfigDataForSchema:(id)a0 channel:(id)a1 bundle:(id)a2 setting:(id)a3 completion:(id /* block */)a4;
- (void)getGurdConfigDataForChannel:(id)a0 bundle:(id)a1 completion:(id /* block */)a2;
- (void)getForestConfigDataWithSchema:(id)a0 fullUrl:(id)a1 setting:(id)a2 completion:(id /* block */)a3;
- (void)getForestConfigDataWithFullUrl:(id)a0 completion:(id /* block */)a1;
- (void)prefetchNAGYLWithContext:(id)a0 pageName:(id)a1 title:(id)a2 disablePrefetch:(BOOL)a3;
- (void)trackDynamicComponentPreloadWithModel:(id)a0;
- (id)triggerNativePrefetch:(id)a0 channel:(id)a1 bundle:(id)a2 setting:(id)a3 useForest:(BOOL)a4;
- (id)triggerNativePrefetch:(id)a0 fullUrl:(id)a1 setting:(id)a2 prefetchId:(id)a3;
- (id)prefetchProcessorWithRequestId:(id)a0;
- (void)prefetchDataWithRequestId:(id)a0 apiKey:(id)a1 callback:(id /* block */)a2;
- (void)removeProcessorWithRequestId:(id)a0;
- (void)preDecodeDynamicComponentWithKitView:(id)a0 WithContext:(id)a1;
- (void)registerDynamicComponentIfNeededWithKitView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
