@class AWEFavoriteMovieModel, AWEFavoriteFormatModel, AWENoxusCompassVideoModel;

@interface AWEFavoriteCollectionModel : AWEBaseApiModel

@property (nonatomic) unsigned long long collectionType;
@property (retain, nonatomic) AWEFavoriteMovieModel *movie;
@property (retain, nonatomic) AWENoxusCompassVideoModel *compass;
@property (retain, nonatomic) AWEFavoriteFormatModel *format;

+ (id)movieJSONTransformer;
+ (id)formatJSONTransformer;
+ (id)compassJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)collectionId;

@end
