@interface AWEPzUnconsumedExitLimitStrategyDataModel : AWEPzStrategyBaseRecordDataModel

@property (nonatomic) long long showTimeLimit;
@property (nonatomic) long long exitTimeLimit;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValid;

@end
