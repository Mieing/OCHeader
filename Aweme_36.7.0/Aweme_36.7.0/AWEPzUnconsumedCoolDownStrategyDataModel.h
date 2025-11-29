@interface AWEPzUnconsumedCoolDownStrategyDataModel : AWEPzStrategyBaseRecordDataModel

@property (nonatomic) long long exitTime;
@property (nonatomic) long long countLimit;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValid;

@end
