@interface IESECSKUNetworkApi : NSObject

+ (void)skuInfoToCart:(id)a0 fromLive:(BOOL)a1 openWithSaaS:(BOOL)a2 completion:(id /* block */)a3;
+ (void)uploadCartGuideFreqWithParameters:(id)a0 openWithSaaS:(BOOL)a1 completion:(id /* block */)a2;
+ (void)requestAutoGetCouponsWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)fetchSKUInfoWithParameters:(id)a0 fromLive:(BOOL)a1 openWithSaaS:(BOOL)a2 completion:(id /* block */)a3;
+ (void)fetchGoodsSKUSoldOutState:(id)a0 skuID:(id)a1 completion:(id /* block */)a2;
+ (void)fetchSKUInstallmentWithParameters:(id)a0 openWithSaaS:(BOOL)a1 completion:(id /* block */)a2;
+ (void)subscribeStockWithParams:(id)a0 openWithSaaS:(BOOL)a1 completion:(id /* block */)a2;
+ (void)requestWithPath:(id)a0 params:(id)a1 usePost:(BOOL)a2 fromSaaS:(BOOL)a3 completion:(id /* block */)a4;
+ (void)monitorAddCartRateEndWithParams:(id)a0 skuModel:(id)a1;
+ (void)skuCheckFromLiveWithParameters:(id)a0 openWithSaaS:(BOOL)a1 completion:(id /* block */)a2;

@end
