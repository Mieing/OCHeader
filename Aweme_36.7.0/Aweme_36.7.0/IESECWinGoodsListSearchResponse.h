@class NSArray;

@interface IESECWinGoodsListSearchResponse : IESECBaseApiModel

@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
