@interface BDUGLuckyNetworkService : NSObject

@property (nonatomic) BOOL shouldBlockSummitRequest;

+ (id)netWorkString;
+ (BOOL)enableAsyncTTNet;
+ (void)__monitorWithService:(id)a0 category:(id)a1 response:(id)a2;
+ (id)commonQueryParams;
+ (id)sharedInstance;

- (id)defaultDomain;
- (void)requestForJSONWithPath:(id)a0 params:(id)a1 method:(id)a2 headerField:(id)a3 callback:(id /* block */)a4;
- (void)requestForJSONWithPath:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 retryTimes:(long long)a4 headerField:(id)a5 callback:(id /* block */)a6;
- (void)requestPlainForJSONWithPath:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 callback:(id /* block */)a5;
- (void)registerResponseSerializerBlock:(id /* block */)a0;
- (void)requestForJSONWithPath:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 retryTimes:(long long)a4 needRetryBlock:(id /* block */)a5 delayTs:(long long)a6 headerField:(id)a7 callback:(id /* block */)a8;
- (void)requestPlainForJSONWithPath:(id)a0 params:(id)a1 method:(id)a2 headerField:(id)a3 callback:(id /* block */)a4;
- (void)registerRequestSerializerBlock:(id /* block */)a0;
- (void)removeResponseSerializerBlock:(id /* block */)a0;
- (void)__requestForJSONWithPath:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 retryTimes:(long long)a4 headerField:(id)a5 requestSerializer:(Class)a6 callback:(id /* block */)a7;
- (void)__requestForJSONWithPath:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 retryTimes:(long long)a4 needRetryBlock:(id /* block */)a5 delayTs:(long long)a6 headerField:(id)a7 requestSerializer:(Class)a8 callback:(id /* block */)a9;
- (void)removeRequestSerializerBlock:(id /* block */)a0;

@end
