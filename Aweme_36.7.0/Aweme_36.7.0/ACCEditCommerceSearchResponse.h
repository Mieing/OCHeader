@class NSArray;

@interface ACCEditCommerceSearchResponse : ACCBaseApiModel

@property (retain, nonatomic) NSArray *commerceTags;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;

+ (id)categoriesJSONTransformer;
+ (id)commerceTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
