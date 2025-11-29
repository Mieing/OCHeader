@class NSArray;

@interface AWEPzComponentGroupPeriodShowLimitStrategyDataModel : AWEPzStrategyBaseRecordDataModel

@property (nonatomic) long long timeLimit;
@property (nonatomic) long long showLimit;
@property (retain, nonatomic) NSArray *avoidScopes;

+ (id)avoidScopesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
