@interface AWEPzVersionPeriodShowLimitStrategyDataModel : AWEPzStrategyBaseRecordDataModel

@property (nonatomic) long long countLimit;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValid;

@end
