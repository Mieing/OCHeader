@class NSString, YYMemoryCache, BDECRabbiFlyDynamicSupervisor;

@interface BDECRabbiFlyJSEngineLoader : NSObject

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (copy, nonatomic) NSString *jsEngineScript;
@property (retain, nonatomic) YYMemoryCache *jsContentCache;

- (id)initWithSupervisor:(id)a0;
- (id)getJSEngineScript;
- (void)loadJSContent:(id)a0 retryCount:(long long)a1 completion:(id /* block */)a2;
- (void)loadJSContentScript:(id)a0 retryCount:(long long)a1 completion:(id /* block */)a2;
- (id)getJSContentScript:(id)a0 token:(id)a1;
- (id)getJSResourcePath:(id)a0;
- (id)getJSContentMapKey:(id)a0;
- (id)getSingleJSEngineScript;
- (id)getMultiJSEngineScript;
- (id)getDestroyScript:(id)a0;
- (void)loadJSContentScript:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)preload;

@end
