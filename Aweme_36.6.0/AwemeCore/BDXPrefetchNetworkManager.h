@class BDXThreadSafeDictionary;

@interface BDXPrefetchNetworkManager : NSObject

@property (retain, nonatomic) BDXThreadSafeDictionary *pendingRequestModel;

- (BOOL)requestWithModel:(id)a0 schema:(id)a1 headerCallback:(id /* block */)a2 dataCallback:(id /* block */)a3 completion:(id /* block */)a4 networkService:(id)a5;
- (BOOL)requestWithModel:(id)a0 schema:(id)a1 completion:(id /* block */)a2 networkService:(id)a3;
- (id)pendingRequestWithModelHashKey:(id)a0;
- (void)__handleRequestCallbackWithRequestModel:(id)a0 object:(id)a1 response:(id)a2 error:(id)a3 completion:(id /* block */)a4 requestBeginDate:(id)a5;
- (void)generalRequestParametersWithModel:(id)a0 callback:(id /* block */)a1;
- (void)__handleStreamRequestHeaderCallbackWithRequestModel:(id)a0 response:(id)a1 completion:(id /* block */)a2 requestBeginDate:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
