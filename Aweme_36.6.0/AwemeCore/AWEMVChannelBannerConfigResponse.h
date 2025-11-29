@class NSArray;

@interface AWEMVChannelBannerConfigResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *bannerList;

+ (id)bannerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
