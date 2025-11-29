@class BDXContext;

@interface BDXBridgePrefetchMethod : BDXBridgeMethod

@property (weak, nonatomic) BDXContext *bdxContext;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)findPageUrl;
- (void)prefetchMonitor:(id)a0 isSuccess:(BOOL)a1 cacheCode:(id)a2 errorMsg:(id)a3 duration:(double)a4 api:(id)a5;
- (id)checkParamsDict:(id)a0;
- (id)checkHeadersDict:(id)a0;
- (BOOL)shouldForceNetwork;
- (id)findBusinessString;
- (id)prefetchUrlWithSchema:(id)a0;
- (unsigned long long)engineTypes;
- (void).cxx_destruct;
- (long long)authType;
- (id)methodName;

@end
