@class NSArray;

@interface AWENearbyBannerResourceModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *bannerList;

+ (id)bannerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
