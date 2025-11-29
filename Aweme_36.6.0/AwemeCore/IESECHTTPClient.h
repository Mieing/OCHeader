@interface IESECHTTPClient : NSObject

+ (id)postWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (id)requestWithRequest:(id)a0 modelClass:(Class)a1 needSaaSHeaders:(BOOL)a2 completion:(id /* block */)a3 metricsBlock:(id /* block */)a4;
+ (id)requestWithURLString:(id)a0 params:(id)a1 needSaaSHeaders:(BOOL)a2 usePOST:(BOOL)a3 modelClass:(Class)a4 completion:(id /* block */)a5 metricsBlock:(id /* block */)a6;
+ (id)requestWithURLString:(id)a0 params:(id)a1 needSaaSHeaders:(BOOL)a2 usePOST:(BOOL)a3 modelClass:(Class)a4 completion:(id /* block */)a5;
+ (id)postWithJSONSerializerURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (id)requestWithURLString:(id)a0 params:(id)a1 headers:(id)a2 usePOST:(BOOL)a3 modelClass:(Class)a4 completion:(id /* block */)a5;
+ (id)requestWithRequest:(id)a0 modelClass:(Class)a1 completion:(id /* block */)a2;
+ (long long)fetchCurrentNetworkEffectLevel;
+ (Class)serviceImpl;
+ (id)requestWithRequest:(id)a0 modelClass:(Class)a1 completion:(id /* block */)a2 metricsBlock:(id /* block */)a3;
+ (id)requestWithURLString:(id)a0 params:(id)a1 headers:(id)a2 usePOST:(BOOL)a3 modelClass:(Class)a4 completion:(id /* block */)a5 metricsBlock:(id /* block */)a6;
+ (id)uploadFileData:(id)a0 needSaaSHeaders:(BOOL)a1 URLString:(id)a2 progress:(id *)a3 parameters:(id)a4 completionHandler:(id /* block */)a5 fileType:(long long)a6;
+ (id /* block */)convertBlock:(id /* block */)a0;
+ (id)requestWithRequest:(id)a0 modelClass:(Class)a1 needSaaSHeaders:(BOOL)a2 completion:(id /* block */)a3;
+ (BOOL)enableNetPerfMetrics;
+ (void)p_findHeaderInfoAndSetToResult:(id)a0;
+ (void)p_responseTrackWithHTTPRequest:(id)a0 extra:(id)a1;
+ (id)uploadFileData:(id)a0 URLString:(id)a1 progress:(id *)a2 parameters:(id)a3 headers:(id)a4 completionDataHandler:(id /* block */)a5 fileType:(long long)a6;
+ (id)uploadFileData:(id)a0 URLString:(id)a1 progress:(id *)a2 parameters:(id)a3 headers:(id)a4 completionHandler:(id /* block */)a5 fileType:(long long)a6;

@end
