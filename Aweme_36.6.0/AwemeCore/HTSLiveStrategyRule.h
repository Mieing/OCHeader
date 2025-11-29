@class NSString, NSMutableArray, HTSLiveDefaultResult;

@interface HTSLiveStrategyRule : IESLivePBBaseMessage <NSMutableCopying>

@property (nonatomic) long long strategyId;
@property (copy, nonatomic) NSString *strategyName;
@property (retain, nonatomic) NSMutableArray *featuresArray;
@property (readonly, nonatomic) unsigned long long featuresArray_Count;
@property (retain, nonatomic) HTSLiveDefaultResult *defaultValue;
@property (nonatomic) BOOL hasDefaultValue;
@property (retain, nonatomic) NSMutableArray *ruleDetailsArray;
@property (readonly, nonatomic) unsigned long long ruleDetailsArray_Count;
@property (nonatomic) int ruleType;
@property (nonatomic) long long version;
@property (nonatomic) int strategyStatus;

+ (id)descriptor;

- (id)strategyName;
- (BOOL)relatedWith:(id)a0;
- (id)initSimpleStrategyWithDolphin:(id)a0;
- (id)initJsonRuleStrategyWith:(id)a0;
- (id)toDolphinStrategy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
