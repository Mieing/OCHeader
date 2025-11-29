@interface AWEPayQueryRewardInfoRequest : CJPayBaseRequest

+ (id)buildWithParamModel:(id)a0 rewardCacheModel:(id)a1;
+ (id)buildUrl:(id)a0;
+ (id)insuranceHost;
+ (void)startQueryRewardInfoRequest:(id)a0 rewardCacheModel:(id)a1 completion:(id /* block */)a2;

@end
