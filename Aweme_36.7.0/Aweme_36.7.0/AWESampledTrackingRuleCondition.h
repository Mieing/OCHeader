@class NSString;

@interface AWESampledTrackingRuleCondition : AWEBaseSettingsModel

@property (retain, nonatomic) NSString *field;
@property (retain, nonatomic) id value;
@property (nonatomic) long long operation;

+ (id)operationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)pass:(id)a0;
- (void).cxx_destruct;

@end
