@class NSString;

@interface IESLiveWalletPromotionCouponInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *couponNo;
@property (copy, nonatomic) NSString *couponDiscountAmount;
@property (copy, nonatomic) NSString *couponName;
@property (copy, nonatomic) NSString *couponValidityDuration;
@property (copy, nonatomic) NSString *couponMinPayAmount;
@property (copy, nonatomic) NSString *couponConsumeType;

+ (id)descriptor;

@end
