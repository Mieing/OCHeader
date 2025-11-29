@class NSDictionary, AWEEcomSearchBannerModel;

@interface AWEEcomSearchResultPageCoinTaskResponse : AWEBaseApiModel

@property (nonatomic) BOOL isShowBanner;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) AWEEcomSearchBannerModel *banner;

+ (id)bannerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
