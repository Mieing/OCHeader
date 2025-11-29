@class NSArray;

@interface AWECodeGenV1AiInspirationRecommendResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *inspirationListModelArray;
@property (nonatomic) int nextCursor;
@property (nonatomic) BOOL hasMore;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
