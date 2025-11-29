@class NSArray, NSDictionary;

@interface AWEECommerceFeedGoodsVideoResponse : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSDictionary *sourceTypeDic;
@property (nonatomic) long long totalCount;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
