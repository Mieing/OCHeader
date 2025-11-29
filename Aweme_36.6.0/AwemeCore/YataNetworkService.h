@interface YataNetworkService : NSObject

+ (void)yataUpdateAPIRequestWithParams:(id)a0 sceneID:(id)a1 APIPath:(id)a2 completionBlock:(id /* block */)a3 metricsBlock:(id /* block */)a4;
+ (void)yataQueryRequestWithParams:(id)a0 APIPath:(id)a1 completion:(id /* block */)a2 metricsBlock:(id /* block */)a3;
+ (void)yataRequestWithAPI:(id)a0 queryParams:(id)a1 bodyParams:(id)a2 method:(id)a3 postDataFormat:(id)a4 headers:(id)a5 completionBlock:(id /* block */)a6;

@end
