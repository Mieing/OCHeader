@class NSLock, NSMutableDictionary, NSMutableArray;

@interface IESLatchManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *bizLoaderMap;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableDictionary *npConfigMap;
@property (retain, nonatomic) NSMutableArray *schemaResolvers;

+ (id)sharedManager;

- (id)allConfigs;
- (id)loaderForBusiness:(id)a0;
- (id)registerCapability:(id)a0 forBusiness:(id)a1;
- (id)allBiz;
- (id)getUniqueLatchID;
- (id)registerContext:(id)a0 forBusiness:(id)a1;
- (BOOL)evaluatePrefetchForContainer:(id)a0;
- (BOOL)stopEvaluateIfNeededForLatchID:(id)a0;
- (void)checkPrefetchTemplateVersion:(id)a0 forBusiness:(id)a1 url:(id)a2 latchID:(id)a3;
- (void)attachWithCompletion:(id /* block */)a0 forBusiness:(id)a1 latchID:(id)a2;
- (void)registerSchemaResolver:(id)a0;
- (id)configForBusiness:(id)a0;
- (BOOL)canNativePrefetchUrl:(id)a0 business:(id)a1;
- (void)reportWithPerfMetric:(id)a0 forBusiness:(id)a1 latchID:(id)a2;
- (void)reportWithResult:(id)a0 forBusiness:(id)a1 latchID:(id)a2 url:(id)a3;
- (void)reportWithJsbPromiseResult:(id)a0 forBusiness:(id)a1 latchID:(id)a2;
- (void)addDefaultSchemaResolver;
- (id)registerJSDataProvider:(id)a0 ForBusiness:(id)a1;
- (void)setMonitorVirtualAid:(id)a0 forBusiness:(id)a1;
- (BOOL)removeLoaderForBusiness:(id)a0;
- (BOOL)evaluateRemotePrefetchForContainer:(id)a0;
- (BOOL)stopEvaluateIfNeededForContainer:(id)a0;
- (void)registerLifeCircleDelegate:(id)a0;
- (void)unregisterLifeCircleDelegate:(id)a0;
- (void)removeConfigForBusiness:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
