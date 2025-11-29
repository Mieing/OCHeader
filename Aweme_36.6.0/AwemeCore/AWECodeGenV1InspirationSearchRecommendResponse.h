@class NSArray;

@interface AWECodeGenV1InspirationSearchRecommendResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *sugListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
