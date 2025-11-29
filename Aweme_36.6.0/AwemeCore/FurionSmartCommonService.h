@class NSObject, NSString, NSDictionary, NSSet, FurionSmartServiceOutputData, FurionSmartServiceMonitor, FurionSmartServiceConfig;
@protocol OS_dispatch_queue, FurionSmartCommonServiceDelegate, FurionSmartEngineRunnerProtocol;

@interface FurionSmartCommonService : NSObject <FurionSmartCommonServiceProtocol> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) FurionSmartServiceMonitor *monitor;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) id<FurionSmartEngineRunnerProtocol> engineRunner;
@property (retain, nonatomic) FurionSmartServiceConfig *serviceConfig;
@property (nonatomic) BOOL serviceHasInit;
@property (nonatomic) long long skipTimes;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long lastRunTime;
@property (retain, nonatomic) NSDictionary *appSessionFactorsConfigMap;
@property (retain, nonatomic) FurionSmartServiceOutputData *lastResult;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceRunQueue;
@property (retain, nonatomic) NSSet *filterScenes;
@property (weak, nonatomic) id<FurionSmartCommonServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void)configService:(id /* block */)a0;
- (void)runBatchWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)ignoreRunWithParams:(id)a0;
- (void)addFactorConfigIfNeeded;
- (void)doServiceInit;
- (void)_innerRunWithServiceRunKey:(id)a0 config:(id)a1 completion:(id /* block */)a2;
- (void)p_runBatchAsyncChain:(id)a0 batchIndex:(long long)a1 batchResults:(id)a2 finalCompletion:(id /* block */)a3;
- (void)p_runBatchSync:(id)a0 batchResults:(id)a1 finalCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)prepare;
- (id)initWithServiceName:(id)a0;
- (BOOL)enabled;
- (void)dealloc;
- (id)engineConfig;

@end
