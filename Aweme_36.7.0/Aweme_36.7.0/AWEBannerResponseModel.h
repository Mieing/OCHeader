@class NSArray;

@interface AWEBannerResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *bannerList;

+ (id)bannerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
