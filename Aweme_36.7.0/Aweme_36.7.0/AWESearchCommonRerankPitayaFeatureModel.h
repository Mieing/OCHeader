@class NSArray, NSString;

@interface AWESearchCommonRerankPitayaFeatureModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *docFeatures;
@property (copy, nonatomic) NSString *sessionFeature;

+ (id)docFeaturesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
