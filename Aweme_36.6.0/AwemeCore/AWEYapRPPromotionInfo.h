@class NSString;

@interface AWEYapRPPromotionInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *orderNo;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long amount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
