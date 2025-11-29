@class NSArray;

@interface AWECodeGenV1AiRecommendWordsResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *recommendWordListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
