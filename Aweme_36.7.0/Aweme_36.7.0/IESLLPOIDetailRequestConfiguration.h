@class NSString;

@interface IESLLPOIDetailRequestConfiguration : NSObject

@property (class, readonly, nonatomic) NSString *requestPath;
@property (class, readonly, nonatomic) NSString *prefetchRequestPath;
@property (class, readonly, nonatomic) NSString *domain;
@property (class, readonly, nonatomic) NSString *scene;

+ (id)poiTempoConfig;
+ (id)getPreloadCacheKey:(id)a0;
+ (id)requestHeaders:(id)a0;
+ (id)sceneFromRouterParams;
+ (id)ditoParamsFromRouterParams;
+ (id)permissionFromRouterParams;
+ (id)bizParamsForPrefetch:(id)a0;
+ (long long)tripHeadImageOptWithBizCode:(id)a0;
+ (id)extensionParamsFromRouterParams:(id)a0;
+ (id)getPreloadPOIEnterIDKey:(id)a0;
+ (id)bizParamsForRequest:(id)a0 routerParams:(id)a1;
+ (id)requestParamsFromRouterParams:(id)a0;
+ (id)cityExtensionParamsFromRouterParams:(id)a0;
+ (id)tempoExtensionParamsFromRouterParams:(id)a0;
+ (id)shelfContainerExtensionParamsFromRouterParams:(id)a0;
+ (id)poiShelfConfig;
+ (id)requestHeadersForPreload:(id)a0 prefetchModel:(id)a1;
+ (id)networkParamsFromPreload:(id)a0;
+ (id)poiSessionIDWithSchema:(id)a0;

@end
