@class AWEEcomSearchPriceUpperAreaView, YYLabel, UILabel, AWESearchCouponListView, AWESearchAdCouponListView, UIImageView, AWESearchGoodsRecommendView, CAGradientLayer, AWEEcomSearchPriceAreaView, AWESearchGoodsKOLView, AWEEcomSearchGoodsDiscountPriceView, AWEEcomSearchGoodsDiscountInfoLineView;
@protocol AWESearchWordProtocol;

@interface AWESearchMerchandiseV3GoodsInfoView : AWESearchMerchandiseGoodsInfoView {
    YYLabel *_titleLabel;
    UILabel *_strongPriceLabel;
    UILabel *_extraInfoLabel;
    UILabel *_weakPriceLabel;
    AWESearchCouponListView *_couponListView;
    AWESearchAdCouponListView *_adCouponListView;
}

@property (retain, nonatomic) AWESearchGoodsRecommendView *recommendView;
@property (retain, nonatomic) AWESearchGoodsKOLView *KOLView;
@property (retain, nonatomic) UIImageView *adSpotImageView;
@property (retain, nonatomic) UIImageView *addCartImageView;
@property (retain, nonatomic) AWEEcomSearchGoodsDiscountPriceView *discountPriceView;
@property (retain, nonatomic) AWEEcomSearchGoodsDiscountInfoLineView *discountInfoLineView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWEEcomSearchPriceAreaView *priceAreaView;
@property (retain, nonatomic) AWEEcomSearchPriceUpperAreaView *priceUpperAreaView;
@property (nonatomic) BOOL alwaysKeepRecommendHeight;
@property (nonatomic) double paddingHorizontal;
@property (weak, nonatomic) id<AWESearchWordProtocol> delegate;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (double)heightForModel:(id)a0 containerWidth:(double)a1 paddingHorizontal:(double)a2 alwaysKeepRecommendHeight:(BOOL)a3;

- (void)configWithModel:(id)a0;
- (void)jumpShop;
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
