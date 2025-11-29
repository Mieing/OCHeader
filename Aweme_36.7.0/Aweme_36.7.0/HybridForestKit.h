@class NSString, HybridForestConfig, IESForestKit;

@interface HybridForestKit : NSObject <HybridForestKitProtocol, HybridResourceLoaderProtocol>

@property (retain, nonatomic) IESForestKit *forestKit;
@property (retain, nonatomic) HybridForestConfig *hybridForestConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLoader;

- (void)updateLoaderConfig:(id)a0;
- (id)currentLoaderConfig;
- (id)fetchResourceWithURL:(id)a0 container:(id)a1 taskConfig:(id)a2 completion:(id /* block */)a3;
- (BOOL)cancelResourceLoad:(id)a0;
- (id)openSession:(id)a0;
- (void)updateForestConfig;
- (id)prepareRequestWithUrlString:(id)a0 withTaskConfig:(id)a1;
- (void)prepareTaskConfigWithResponse:(id)a0 taskConfig:(id)a1;
- (id)prepareProviderWithResponse:(id)a0 url:(id)a1;
- (void)bindForestKit:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)closeSession:(id)a0;
- (BOOL)deleteResource:(id)a0;

@end
