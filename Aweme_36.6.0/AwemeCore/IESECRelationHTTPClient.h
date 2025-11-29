@interface IESECRelationHTTPClient : NSObject

+ (id)postWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)preconnectRelationApiHosts;
+ (void)preconnectRelationPicHosts;
+ (id)postWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3 metricsBlock:(id /* block */)a4;
+ (void)preconnectHost:(id)a0;
+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3 metricsBlock:(id /* block */)a4;
+ (id)getWithURLString:(id)a0 verifiedParams:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3 metricsBlock:(id /* block */)a4;
+ (id)verifyRequestParameters:(id)a0 invalidParameters:(id)a1;
+ (void)trackParametersVerifyErrorWithURL:(id)a0 parameters:(id)a1;
+ (id)postWithURLString:(id)a0 verifiedParams:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3 metricsBlock:(id /* block */)a4;
+ (id)getWithURLString:(id)a0 params:(id)a1 requiredKeys:(id)a2 modelClass:(Class)a3 completion:(id /* block */)a4 metricsBlock:(id /* block */)a5;
+ (id)postWithURLString:(id)a0 params:(id)a1 requiredKeys:(id)a2 modelClass:(Class)a3 completion:(id /* block */)a4 metricsBlock:(id /* block */)a5;

@end
