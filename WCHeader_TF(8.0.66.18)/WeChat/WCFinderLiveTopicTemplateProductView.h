@class FinderWindowProductInfo, MMWebImageView, NSString, PAGView, MMFinderLiveHotSaleAnimationLogic, CAGradientLayer, FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions, UILabel, MMFinderLiveGoodsHotSaleAnimationView;

@interface WCFinderLiveTopicTemplateProductView : UIView <MMFinderLiveHotSaleAnimationDelegate, MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *productImgView;
@property (retain, nonatomic) UILabel *promotingLabel;
@property (retain, nonatomic) CAGradientLayer *promotingGradientLayer;
@property (retain, nonatomic) MMFinderLiveHotSaleAnimationLogic *animationLogic;
@property (retain, nonatomic) MMFinderLiveGoodsHotSaleAnimationView *hotSaleAnimationView;
@property (retain, nonatomic) PAGView *playingIconView;
@property (retain, nonatomic) FinderWindowProductInfo *productInfo;
@property (copy, nonatomic) id /* block */ onTapped;
@property (copy, nonatomic) id /* block */ getPAGFile;
@property (retain, nonatomic) FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *hotSellingOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)doInit;
- (void)layoutSubviews;
- (void)initPromotingViews;
- (void)onSelfTapped;
- (void)setPromotingViewsAlpha:(double)a0;
- (void)startHotSaleAnimation:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateHotSaleAnimation:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)finishHotSaleAnimation:(id /* block */)a0;
- (BOOL)hasAnimationResource;
- (void)onLoadImageOK:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;

@end
