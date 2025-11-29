@interface BDARewardNetworkService : NSObject

+ (id)requestDataWithURL:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)requestParamsWithModel:(id)a0 config:(id)a1 completion:(id /* block */)a2;
+ (void)handleRequestParamsWithModel:(id)a0 config:(id)a1 sync:(BOOL)a2 completion:(id /* block */)a3;
+ (void)handleResponse:(id)a0 jsonObj:(id)a1 params:(id)a2 beginTime:(double)a3 requestError:(id)a4 completion:(id /* block */)a5;
+ (id)requestForJsonFrom:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 completion:(id /* block */)a5;
+ (id)requestForJsonFrom:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 requestSerializer:(Class)a5 responseSerializer:(Class)a6 completion:(id /* block */)a7;
+ (id)parseJsonObj:(id)a0 rewadAdType:(id)a1 requestError:(id)a2 error:(id *)a3;
+ (void)monitorUrl:(id)a0 params:(id)a1 models:(id)a2 jsonObj:(id)a3 response:(id)a4 error:(id)a5 beginTime:(double)a6;
+ (id)commonParamsWithModel:(id)a0 config:(id)a1;
+ (id)removeKeyList:(id)a0 fromDictionary:(id)a1;
+ (id)requestParamsWithModel:(id)a0 config:(id)a1;
+ (void)monitorParams:(id)a0 response:(id)a1 error:(id)a2 beginTime:(double)a3;
+ (void)fetchBannerDataWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)fetchPatchDataWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)fetchRewardDataWithModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)preloadRewardDataWithModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)preloadDeliveryRewardDataWithModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)compensateSendForPreloadDeliveryWithModel:(id)a0 preloadToken:(id)a1 completion:(id /* block */)a2;

@end
