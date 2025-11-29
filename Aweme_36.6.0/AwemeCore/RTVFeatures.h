@class NSDictionary, NSString;

@interface RTVFeatures : NSObject

@property (retain) NSDictionary *featureValues;
@property (copy, nonatomic) NSString *rawJson;

+ (id)defaultFeatureValueWithFeatureType:(long long)a0;
+ (long long)mergeFeature:(id)a0 withFeatures:(id)a1 ofFeatureType:(long long)a2;
+ (long long)mergeValue:(long long)a0 withValues:(id)a1 ofFeatureType:(long long)a2;

- (id)toJSONString;
- (id)keyMapper;
- (BOOL)containValue:(long long)a0 ofFeature:(long long)a1;
- (void)mergeFromOtherParticipantsFeatures:(id)a0;
- (id)reverseKeyMapper;
- (void)mergeFromOtherParticipantsFeatures:(id)a0 excludeTypes:(id)a1;
- (long long)getValueOfFeature:(long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithJSONString:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
