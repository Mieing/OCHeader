@class NSString, AWEURLModel;

@interface AWEPlaylistBannerInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *bannerID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *bannerURL;
@property (copy, nonatomic) NSString *schema;

+ (id)bannerURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
