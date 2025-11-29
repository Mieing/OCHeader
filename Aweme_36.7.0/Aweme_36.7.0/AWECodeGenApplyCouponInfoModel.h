@class NSString;

@interface AWECodeGenApplyCouponInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *couponId;
@property (nonatomic) long long minPayAmount;
@property (nonatomic) long long discountAmount;
@property (nonatomic) long long minPayAmountCoin;
@property (nonatomic) long long discountAmountCoin;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *rule;
@property (nonatomic) long long metaValidEndTime;
@property (nonatomic) int couponType;
@property (nonatomic) int couponApplicableBiz;
@property (nonatomic) int bizCouponType;
@property (copy, nonatomic) NSString *jumpLink;
@property (nonatomic) long long fixPrice;
@property (nonatomic) long long currency;
@property (copy, nonatomic) NSString *currencyTypeText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
