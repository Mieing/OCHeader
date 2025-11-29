@class NSURL, AWEURLModel;

@interface AWESearchMovieBannerModel : AWEBaseApiModel

@property (copy, nonatomic) NSURL *link;
@property (retain, nonatomic) AWEURLModel *image;

+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)linkJSONTransformer;

- (void).cxx_destruct;

@end
