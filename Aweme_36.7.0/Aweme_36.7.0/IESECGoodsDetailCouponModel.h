@class NSString, NSArray, IESECGoodsDetailCouponComponentModel, IESECBalanceExchangeCouponModel, IESECGoodsDetailCouponMarketingTip, IESECGoodsDetailCouponMarketingBanner, IESECGoodsDetailCouponExtra;

@interface IESECGoodsDetailCouponModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *couponIDArray;
@property (copy, nonatomic) NSArray *discountLabels;
@property (copy, nonatomic) NSArray *canApplyCoupons;
@property (copy, nonatomic) NSArray *availableCoupons;
@property (copy, nonatomic) NSArray *autoApplyCoupons;
@property (retain, nonatomic) IESECBalanceExchangeCouponModel *exchangeCoupons;
@property (retain, nonatomic) IESECGoodsDetailCouponComponentModel *couponComponentModel;
@property (retain, nonatomic) IESECGoodsDetailCouponExtra *innerFlowCouponExtra;
@property (retain, nonatomic) IESECGoodsDetailCouponMarketingBanner *marketingBanner;
@property (retain, nonatomic) IESECGoodsDetailCouponMarketingTip *marketingTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)discountLabelsJSONTransformer;
+ (id)marketingBannerJSONTransformer;
+ (id)marketingTipJSONTransformer;
+ (id)canApplyCouponsJSONTransformer;
+ (id)availableCouponsJSONTransformer;
+ (id)autoApplyCouponsJSONTransformer;
+ (id)exchangeCouponsJSONTransformer;
+ (id)innerFlowCouponExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getCouponIDArray;
- (BOOL)hasShopDiscount;
- (void).cxx_destruct;

@end
