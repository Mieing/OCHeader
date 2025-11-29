@interface IESECGoodsDetailBuyNowHelper : NSObject

+ (void)openVirtualGoodsPageWithCommonMeta:(id)a0 buyMeta:(id)a1;
+ (void)openInsurancePageWithCommonMeta:(id)a0 buyMeta:(id)a1;
+ (void)openAuctionPanelWithCommonMeta:(id)a0 buyMeta:(id)a1 newSourceType:(id)a2;
+ (void)handleBuyActionWithCommonMeta:(id)a0 buyMeta:(id)a1 openWithSaaS:(BOOL)a2 showRequest:(id)a3 onViewController:(id)a4;
+ (void)monitorBuyNowRateWithSuccess:(BOOL)a0 applyCoupon:(BOOL)a1 categoryParams:(id)a2 start:(double)a3;
+ (void)goToOrderPageWithCouponId:(id)a0 commonMeta:(id)a1 buyMeta:(id)a2 withSKUInfo:(id)a3 onViewController:(id)a4 onSKUViewController:(id)a5 entranceInfoParamsForSKU:(id)a6 showRequest:(id)a7 completion:(id /* block */)a8;
+ (void)monitorRateEndFailWithCode:(id)a0 model:(id)a1 message:(id)a2;
+ (void)goToNativeOrderPageWithCouponId:(id)a0 commonMeta:(id)a1 buyMeta:(id)a2 withSKUInfo:(id)a3 onViewController:(id)a4 onSKUViewController:(id)a5 entranceInfoParamsForSKU:(id)a6 showRequest:(id)a7 completion:(id /* block */)a8;
+ (id)orderURLFromGoodsDetailBuyMeta:(id)a0;
+ (id)p_extraOrderParamsNeedUltimateBuyParams:(BOOL)a0 commonMeta:(id)a1 buyMeta:(id)a2 withSKUInfo:(id)a3 entranceInfoParamsForSKU:(id)a4 onViewController:(id)a5 needSimplify:(BOOL)a6;
+ (id)generateOrderURLV2:(id)a0;
+ (id)p_orderParamsFromRawOrderURL:(id)a0 commonMeta:(id)a1 buyMeta:(id)a2 additionalOrderParams:(id)a3 onViewController:(id)a4;
+ (void)monitorApplyCouponRateWithSuccess:(BOOL)a0 model:(id)a1 error:(id)a2;
+ (id)extraOrderParamsWithCommonMeta:(id)a0 buyMeta:(id)a1 onViewController:(id)a2;
+ (id)rawOrderParamsFromRawOrderURL:(id)a0 commonMeta:(id)a1 buyMeta:(id)a2 additionalOrderParams:(id)a3 onViewController:(id)a4;

@end
