@class NSArray;

@interface AWESampledTrackingRule : AWEBaseSettingsModel

@property (retain, nonatomic) NSArray *conditions;
@property (nonatomic) long long joinType;
@property (nonatomic) double sampleRate;

+ (id)conditionsJSONTransformer;
+ (id)joinTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)pass:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
