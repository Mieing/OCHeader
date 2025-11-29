@class NSNumber, NSArray, NSDictionary;

@interface AWEMerchandiseInnerFeedLoadMoreResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *resultType;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) NSDictionary *extra;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
