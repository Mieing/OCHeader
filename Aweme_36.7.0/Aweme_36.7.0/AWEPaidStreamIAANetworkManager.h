@interface AWEPaidStreamIAANetworkManager : NSObject

+ (void)getURLWithURLPath:(id)a0 block:(id /* block */)a1;
+ (void)getAwardConfigV2WithRequestParameter:(id)a0 completion:(id /* block */)a1;
+ (void)getRewardConfigInfosWithRequestParameter:(id)a0 completion:(id /* block */)a1;
+ (id)commonParametersWithRequestParameter:(id)a0;
+ (void)unlockRewardWithRequestParameter:(id)a0 completion:(id /* block */)a1;
+ (void)reportOpenRewardWithRequestParameter:(id)a0 retryCount:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)unlockRewardWithRequestParameter:(id)a0 retryCount:(long long)a1 completion:(id /* block */)a2;

@end
