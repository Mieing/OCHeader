@class AWEEcomSearchGoodsDiscountPriceView, AWEEcomSearchPriceUpperAreaView, UILabel, AWEEcomSearchGoodsDiscountInfoLineView, CAGradientLayer, AWESearchCouponListView, AWESearchAdCouponListView, AWESearchGoodsRecommendView, AWESearchGoodsSellInfoView, YYLabel, AWEEcomSearchNewUserStrengthPriceView, AWEEcomSearchPriceAreaView, UIImageView;
@protocol AWESearchWordProtocol;

@interface AWESearchMerchandiseGoodsInfoSingleColView : AWESearchMerchandiseGoodsInfoView {
    YYLabel *_titleLabel;
    UILabel *_strongPriceLabel;
    UILabel *_weakPriceLabel;
    UILabel *_extraInfoLabel;
    AWESearchCouponListView *_couponListView;
    AWESearchAdCouponListView *_adCouponListView;
}

@property (retain, nonatomic) AWESearchGoodsRecommendView *recommendView;
@property (retain, nonatomic) AWESearchGoodsSellInfoView *sellInfoView;
@property (retain, nonatomic) UIImageView *adSpotImageView;
@property (retain, nonatomic) UIImageView *addCartImageView;
@property (retain, nonatomic) AWEEcomSearchGoodsDiscountPriceView *discountPriceView;
@property (retain, nonatomic) AWEEcomSearchGoodsDiscountInfoLineView *discountInfoLineView;
@property (retain, nonatomic) AWEEcomSearchPriceAreaView *priceAreaView;
@property (retain, nonatomic) AWEEcomSearchPriceUpperAreaView *priceUpperAreaView;
@property (retain, nonatomic) AWEEcomSearchNewUserStrengthPriceView *newerStrenghPriceView;
@property (retain, nonatomic) UILabel *newerStrenghSaleLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL isFromPhotoSearch;
@property (weak, nonatomic) id<AWESearchWordProtocol> delegate;

+ (double)goodsInfoHeightForModel:(id)a0 containerWidth:(double)a1;
+ (double)heightForModel:(id)a0 containerWidth:(double)a1 minHeight:(double)a2;

- (void)configWithModel:(id)a0;
- (void)jumpShop;
- (unsigned long long)titleLabelLines;
- (void)iconRecommendAreaShopClick;
- (void)jumpLeaderboard;
- (void)adCouponListViewTapped:(id)a0;
- (void)jumpComparePrice;
- (void)jumpSearchWord:(id)a0;
- (void)configGradientLayerWithModel:(id)a0;
- (double)getAdCouponListViewMaxWidth;
- (void)iconRecommendAreaShowTrack;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
