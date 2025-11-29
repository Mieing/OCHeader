@interface AWEPzPeriodConsumeLimitStrategyDataModel : AWEPzStrategyBaseRecordDataModel

@property (nonatomic) long long timeLimit;
@property (nonatomic) long long countLimit;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValid;

@end
