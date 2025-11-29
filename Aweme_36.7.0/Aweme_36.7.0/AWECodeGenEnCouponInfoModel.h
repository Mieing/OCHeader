@class NSString;

@interface AWECodeGenEnCouponInfoModel : AWEBaseDataModel

@property (nonatomic) long long currencyType;
@property (copy, nonatomic) NSString *couponId;
@property (nonatomic) long long discountAmount;
@property (nonatomic) long long minPayAmount;
@property (nonatomic) long long metaValidEndTime;
@property (nonatomic) int bizCouponType;
@property (nonatomic) int couponType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
