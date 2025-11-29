@class MMWebImageView, NSString, MMFinderLiveHotSaleAnimationLogic, CAGradientLayer, FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions, FinderLiveAggregationCardProduct, UILabel, MMFinderLiveGoodsHotSaleAnimationView;
@protocol MMFinderLiveAggregationCardGridProductInfoViewDelegate;

@interface MMFinderLiveAggregationCardGridProductInfoView : UIView <MMFinderLiveHotSaleAnimationDelegate>

@property (retain, nonatomic) FinderLiveAggregationCardProduct *aggregationCardProduct;
@property (retain, nonatomic) MMWebImageView *productImgView;
@property (retain, nonatomic) UILabel *promotingLabel;
@property (retain, nonatomic) CAGradientLayer *promotingGradientLayer;
@property (retain, nonatomic) MMFinderLiveHotSaleAnimationLogic *animationLogic;
@property (retain, nonatomic) MMFinderLiveGoodsHotSaleAnimationView *hotSaleAnimationView;
@property (retain, nonatomic) FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *hotSellingOptions;
@property (weak, nonatomic) id<MMFinderLiveAggregationCardGridProductInfoViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ onTapped;
@property (copy, nonatomic) id /* block */ getHotSellingPAGFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)onSelfTapped;
- (void)updateAggregationCardProduct:(id)a0;
- (id)priceString:(unsigned long long)a0;
- (void)updateProductImageUrl:(id)a0;
- (void)updateProductSales:(unsigned long long)a0;
- (void)updateText:(id)a0;
- (void)updateHotSellingOps:(id)a0;
- (BOOL)enableHotSellingAnimation;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)startHotSaleAnimation:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateHotSaleAnimation:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)finishHotSaleAnimation:(id /* block */)a0;
- (BOOL)hasAnimationResource;
- (void).cxx_destruct;

@end
