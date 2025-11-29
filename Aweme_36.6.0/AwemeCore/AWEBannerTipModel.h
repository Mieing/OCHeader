@class NSString;

@interface AWEBannerTipModel : AWEBaseApiModel

@property (nonatomic) long long bannerType;
@property (copy, nonatomic) NSString *bannerText;
@property (nonatomic) long long linkType;
@property (copy, nonatomic) NSString *linkURL;
@property (copy, nonatomic) NSString *linkText;
@property (nonatomic) BOOL hasClosed;

+ (id)bannerTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
