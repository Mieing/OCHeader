@class UIColor, AWESearchMovieModel, AWEAwemeModel, AWESearchMovieBannerModel;

@interface AWESearchMovieInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMovieModel *movie;
@property (retain, nonatomic) AWEAwemeModel *coverVideo;
@property (retain, nonatomic) AWESearchMovieBannerModel *banner;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *centerColor;

+ (id)coverVideoJSONTransformer;
+ (id)bannerJSONTransformer;
+ (id)centerColorJSONTransformer;
+ (id)movieJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)bgColorJSONTransformer;

- (void).cxx_destruct;

@end
