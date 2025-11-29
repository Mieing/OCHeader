@interface IESECGoodsDetailAddToCartHelper : NSObject

+ (void)monitorAddCartRateEndWithSuccess:(BOOL)a0 model:(id)a1 extraParams:(id)a2;
+ (void)monitorAddCartDurationWithStartTime:(double)a0 isDirectAddcart:(BOOL)a1 extraParams:(id)a2;
+ (void)addToShoppingCartActionWithSKUInfo:(id)a0 commonMeta:(id)a1 addToCartMeta:(id)a2 openWithSaaS:(BOOL)a3 btmModel:(id)a4 completion:(id /* block */)a5;
+ (void)handleAddToCartActionWithCommonMeta:(id)a0 addToCartMeta:(id)a1 openWithSaaS:(BOOL)a2 btmModel:(id)a3 completion:(id /* block */)a4;
+ (void)skuAddToCartWithSKUInfo:(id)a0 commonMeta:(id)a1 addToCartMeta:(id)a2 openWithSaaS:(BOOL)a3 btmModel:(id)a4 completion:(id /* block */)a5;

@end
