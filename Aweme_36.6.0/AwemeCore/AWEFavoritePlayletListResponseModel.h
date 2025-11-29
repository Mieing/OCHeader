@class NSArray, NSNumber;

@interface AWEFavoritePlayletListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *playletList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)playletListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
