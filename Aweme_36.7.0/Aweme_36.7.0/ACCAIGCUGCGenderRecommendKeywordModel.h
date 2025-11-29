@class NSArray, NSString;

@interface ACCAIGCUGCGenderRecommendKeywordModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *maleRecommendWord;
@property (copy, nonatomic) NSArray *femaleRecommendWord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)femaleRecommendWordJSONTransformer;
+ (id)maleRecommendWordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
