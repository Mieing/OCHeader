@class NSArray, NSNumber;

@interface AWEShopSeekResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSNumber *nextCursor;
@property (copy, nonatomic) NSNumber *hasMore;
@property (copy, nonatomic) NSNumber *itemTotalCount;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
