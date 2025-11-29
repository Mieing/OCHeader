@class NSString;

@interface ReceiveCouponByFeedCardResponse_CouponInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *couponId;
@property (nonatomic) int discountType;
@property (copy, nonatomic) NSString *consumeDesc;
@property (copy, nonatomic) NSString *couponName;
@property (copy, nonatomic) NSString *minPayAmount;
@property (copy, nonatomic) NSString *discountAmount;
@property (copy, nonatomic) NSString *consumePath;
@property (copy, nonatomic) NSString *useCondition;
@property (copy, nonatomic) NSString *useTimeDesc;

+ (id)descriptor;

@end
