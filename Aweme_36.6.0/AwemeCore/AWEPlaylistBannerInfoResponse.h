@class NSArray;

@interface AWEPlaylistBannerInfoResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *bannerList;

+ (id)bannerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
