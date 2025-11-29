@interface IESLLLiveCommonNetManager : NSObject

+ (void)pickUpCouponWithRoomId:(id)a0 drawTicketParams:(id)a1 completion:(id /* block */)a2;
+ (void)processWithModel:(id)a0 error:(id)a1 successBlock:(id /* block */)a2;
+ (void)pickUpCouponWithCouponId:(id)a0 roomId:(id)a1 anchorId:(id)a2 lanchId:(id)a3 lanchIdV2:(id)a4 lanchType:(id)a5 benefitId:(id)a6 benefitType:(id)a7 xidempotentId:(id)a8 assignRecordId:(id)a9 couponType:(id)a10 completion:(id /* block */)a11;
+ (void)pickUpCouponWithCollectSource:(long long)a0 coupons:(id)a1 completion:(id /* block */)a2;

@end
