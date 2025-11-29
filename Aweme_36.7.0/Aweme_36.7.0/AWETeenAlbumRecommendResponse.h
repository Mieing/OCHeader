@class NSString, NSArray;

@interface AWETeenAlbumRecommendResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *albums;

+ (id)albumsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
