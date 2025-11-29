@class NSArray, NSNumber;

@interface AWEFavoriteMovieListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *collectionList;
@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;

+ (id)awemeListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)collectionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
