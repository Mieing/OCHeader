@interface AWEPOIOfflineScanDataManager : NSObject

+ (void)fetchProfileCouponInfoForActivity:(id)a0 toUser:(id)a1 extraInfo:(id)a2 materialId:(id)a3 completion:(id /* block */)a4;
+ (void)followMerchantAndGetCoupon:(id)a0 toUser:(id)a1 extraInfo:(id)a2 materialId:(id)a3 completion:(id /* block */)a4;
+ (void)appointLiveAndGetCoupon:(id)a0 extraInfo:(id)a1 materialId:(id)a2 completion:(id /* block */)a3;

@end
