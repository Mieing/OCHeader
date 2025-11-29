@class NSArray;

@interface AWESampledTrackingConfig : AWEBaseSettingsModel

@property (nonatomic) double sampleRate;
@property (retain, nonatomic) NSArray *rules;

+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
