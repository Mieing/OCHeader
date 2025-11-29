@class NSArray;

@interface AFDFullPageWaterFallResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsOuter:(BOOL)a0;
- (void)setIsFullPageOuter:(BOOL)a0;
- (void)setIsRelatedSug:(BOOL)a0;
- (void).cxx_destruct;

@end
