@class NSURL, AWEURLModel;

@interface AWEGeneralFilmTelevisionBannerModel : AWEBaseApiModel

@property (copy, nonatomic) NSURL *link;
@property (retain, nonatomic) AWEURLModel *image;

+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
