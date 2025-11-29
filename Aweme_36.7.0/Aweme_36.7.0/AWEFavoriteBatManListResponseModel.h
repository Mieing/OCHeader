@class NSArray, NSNumber;

@interface AWEFavoriteBatManListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *batManList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)batManListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
