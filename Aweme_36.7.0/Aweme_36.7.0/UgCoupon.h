@class NSString, IncentiveAsset;

@interface UgCoupon : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *prizeId;
@property (nonatomic) long long couponType;
@property (nonatomic) long long couponSubType;
@property (nonatomic) long long credit;
@property (nonatomic) long long threshold;
@property (nonatomic) long long validPeriod;
@property (nonatomic) long long validType;
@property (copy, nonatomic) NSString *couponName;
@property (retain, nonatomic) IncentiveAsset *cost;
@property (nonatomic) BOOL hasCost;
@property (copy, nonatomic) NSString *popupTitle;

+ (id)descriptor;

@end
