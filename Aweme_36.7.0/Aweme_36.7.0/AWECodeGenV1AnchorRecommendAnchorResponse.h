@class NSArray;

@interface AWECodeGenV1AnchorRecommendAnchorResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *recommendAnchorModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
