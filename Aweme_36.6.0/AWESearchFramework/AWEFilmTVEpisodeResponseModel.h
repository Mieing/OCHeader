@class NSArray, NSNumber;

@interface AWEFilmTVEpisodeResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *list;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *total;

+ (id)coverJSONTransformer;
+ (id)listJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
