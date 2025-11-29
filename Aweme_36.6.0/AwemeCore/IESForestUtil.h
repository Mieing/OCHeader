@interface IESForestUtil : NSObject

+ (id)urlStringWithoutQueryAndFragment:(id)a0;
+ (BOOL)isUrlString:(id)a0 resourceScene:(id)a1 inList:(id)a2;
+ (id)numberWithUrlString:(id)a0 resourceScene:(id)a1 inList:(id)a2 defaultValue:(id)a3;
+ (void)generateResponseHeaderAndData:(id)a0 data:(id)a1 completion:(id /* block */)a2;
+ (id)allHTTPHeaderFieldsMergedRequest:(id)a0;
+ (id)fixResponseHeader:(id)a0 forestRequest:(id)a1 pathExtension:(id)a2 fixCORS:(BOOL)a3 fixContentType:(BOOL)a4;
+ (id)extractExpiredDateFrom:(id)a0 forestRequest:(id)a1;
+ (void)dispatchAsyncOnHighPriorityGlobalQueue:(id /* block */)a0;
+ (id)pointAddress:(id)a0;
+ (id)getOriginalFiledKey:(id)a0 fromHeader:(id)a1;
+ (id)dateNowIfPreload:(id)a0;
+ (void)dispatchAsyncOnDefaultPriorityGlobalQueue:(id /* block */)a0;
+ (void)dispatchAsyncOnDefaultPriorityGlobalQueueForceAsync:(BOOL)a0 completion:(id /* block */)a1;
+ (void)dispatchAsyncOnHighPriorityGlobalQueueForceAsync:(BOOL)a0 completion:(id /* block */)a1;
+ (id)urlStringWithoutFragment:(id)a0;
+ (id)getContainerSessionID:(id)a0;
+ (id)extractSourceUrl:(id)a0 isFromUrlQueryKey:(BOOL *)a1;
+ (void)dispatchAsyncOnQueue:(id)a0 forceAsync:(BOOL)a1 completion:(id /* block */)a2;
+ (void)dispatchAsyncOnForestMonitorQueue:(id /* block */)a0;
+ (BOOL)optimizeParamResolve;
+ (id)extractCacheKey:(id)a0;
+ (id)appendUA:(id)a0 withString:(id)a1 testString:(id)a2;
+ (BOOL)enableThreadOptimize;
+ (BOOL)p_isValidContentType:(id)a0;
+ (BOOL)p_dispatchAsyncOnForestMonitorQueue:(id /* block */)a0;
+ (id)extractExpiredDateFromCacheControl:(id)a0 responseDateString:(id)a1 forestRequest:(id)a2;
+ (id)extractExpiredDateFromExpires:(id)a0 forestRequest:(id)a1;
+ (id)dateFromGMTString:(id)a0;
+ (id)adjustExpireDate:(id)a0 forestRequest:(id)a1;
+ (id)p_fixedTargetUrlString:(id)a0 resourceScene:(id)a1;
+ (id)sdkVersion;

@end
