@class NSDictionary, AWEEcomSearchBannerModel;

@interface AWEEcomSearchResultPageCoinSubmitResponse : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) AWEEcomSearchBannerModel *toast;

+ (id)toastJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
