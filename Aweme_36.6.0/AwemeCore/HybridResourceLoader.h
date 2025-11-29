@class HybridContext, NSString, HybridDefaultResourceLoader, HybridResourceConfig, NSNumber, HybridResourceLoaderConfig;
@protocol HybridResourceLoaderProtocol;

@interface HybridResourceLoader : NSObject <HybridResourceForestAdapterProtocol, HybridResourceService>

@property (retain, nonatomic) HybridDefaultResourceLoader *defaultResourceLoader;
@property (retain, nonatomic) HybridResourceConfig *resourceConfig;
@property (retain, nonatomic) NSNumber *useForest;
@property (retain, nonatomic) HybridResourceLoaderConfig *loaderConfig;
@property (weak, nonatomic) HybridContext *context;
@property (retain, nonatomic) id<HybridResourceLoaderProtocol> forestResourceLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registeGlobalMonitor:(id)a0;
+ (void)registeGlobalProcessor:(id)a0;
+ (void)reportLog:(id)a0;
+ (void)setGlobalUseForest:(id)a0;
+ (void)hybrid_service_register;
+ (id)monitor;
+ (id)sharedInstance;
+ (void)reportError:(id)a0;
+ (id)defaultLoader;
+ (id)appid;

- (id)getAdvancedOperator;
- (void)updateLoaderConfig:(id)a0;
- (id)currentLoaderConfig;
- (id)fetchResourceWithURL:(id)a0 container:(id)a1 taskConfig:(id)a2 completion:(id /* block */)a3;
- (BOOL)cancelResourceLoad:(id)a0;
- (void)appendPrefixList:(id)a0 withAccessKey:(id)a1;
- (void)syncChannelIfNeeded:(id)a0 accessKey:(id)a1 completion:(id /* block */)a2;
- (void)registeDefaultAccessKey:(id)a0;
- (void)registeAccessKey:(id)a0 withPrefixList:(id)a1;
- (void)registeAccessKey:(id)a0 appendPrefixList:(id)a1;
- (id)openSession:(id)a0;
- (id)getDefaultAccessKey;
- (id)getFalconPrefixList;
- (unsigned long long)packageVersionForAccessKey:(id)a0 andChannel:(id)a1;
- (BOOL)isUseForest:(id)a0;
- (id)getResourceInstanceIfUseForest:(BOOL)a0;
- (void)updateLoaderConfigProps:(id)a0;
- (id)updateLoaderConfigProp:(id)a0 to:(id)a1;
- (void)reportResourceLoaderPerformanceWithTaskConfig:(id)a0 container:(id)a1 resourceProvider:(id)a2 url:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)closeSession:(id)a0;
- (BOOL)deleteResource:(id)a0;

@end
