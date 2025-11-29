@class IESECGoodsDetailCouponMarketingTip, IESECGoodsDetailCouponMarketingBanner;

@interface IESECFeedCouponMarketingInfoModel : IESECBaseApiModel

@property (copy, nonatomic) IESECGoodsDetailCouponMarketingBanner *marketingBanner;
@property (retain, nonatomic) IESECGoodsDetailCouponMarketingTip *marketingTip;

+ (id)marketingBannerJSONTransformer;
+ (id)marketingTipJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
