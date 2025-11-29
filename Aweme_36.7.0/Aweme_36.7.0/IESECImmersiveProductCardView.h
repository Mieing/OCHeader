@class NSTimer, UILabel, IESECGoodsFeedImmersiveBottomOperationView, IESECGoodsFeedImmersiveGirdleView, UIView, NSString, IESECGoodsFeedPopoverView, IESECLLPassthroughView, IESECGoodsFeedImmersiveTitleView, UIStackView, IESECGoodsFeedImmersiveSellingPointsView, IESECGoodsFeedImmersiveCardLampsViewController, IESECImmersiveProductCardViewConfig, IESECGoodsFeedImmersiveCarouselView, IESECGoodsFeedImmersivePriceContainerView, UIImageView;
@protocol IESECGoodsFeedImmersiveContainerDelegate;

@interface IESECImmersiveProductCardView : IESECGoodsFeedImmersiveBaseView <IESECGoodsFeedImmersiveCarouselViewDelegate, IESECGoodsFeedPopoverViewDelegate>

@property (retain, nonatomic) IESECImmersiveProductCardViewConfig *config;
@property (retain, nonatomic) IESECGoodsFeedImmersiveCarouselView *imageCarouselView;
@property (retain, nonatomic) UIView *indexIndicatorView;
@property (retain, nonatomic) UILabel *indexIndicatorLabel;
@property (retain, nonatomic) IESECGoodsFeedImmersiveCardLampsViewController *lampsViewController;
@property (weak, nonatomic) IESECGoodsFeedPopoverView *popoverView;
@property (retain, nonatomic) IESECGoodsFeedImmersiveGirdleView *girdleView;
@property (retain, nonatomic) UIView *bottomBackgroundView;
@property (retain, nonatomic) UIStackView *bottomStackView;
@property (retain, nonatomic) IESECGoodsFeedImmersivePriceContainerView *priceView;
@property (retain, nonatomic) IESECGoodsFeedImmersiveTitleView *titleView;
@property (retain, nonatomic) IESECGoodsFeedImmersiveSellingPointsView *sellingPointsView;
@property (retain, nonatomic) IESECGoodsFeedImmersiveBottomOperationView *bottomOperationView;
@property (retain, nonatomic) UIView *fakeNextCardContainerView;
@property (retain, nonatomic) UIImageView *fakeNextCardImageView;
@property (retain, nonatomic) IESECLLPassthroughView *containerView;
@property (retain, nonatomic) NSTimer *dismissPopoverViewTimer;
@property (nonatomic) long long currentImageIndex;
@property (weak, nonatomic) id<IESECGoodsFeedImmersiveContainerDelegate> ecomContainerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFirstCardPanPercent:(double)a0;
- (void)addFakeNextCardIfNeeded:(id)a0;
- (void)updateLayoutWithIsFullMode:(BOOL)a0 animationTime:(double)a1;
- (void)updateLayoutWithPreviewPercent:(double)a0;
- (void)didScrollImagesToIndex:(long long)a0;
- (void)handleLongPressImage:(id)a0;
- (void)handleLongPressTitle:(id)a0;
- (void)trackPopoverWithAction:(id)a0 location:(id)a1 btm:(id)a2;
- (void)showPopoverView:(id)a0 location:(id)a1 btm:(id)a2;
- (void)popoverViewDidDismiss:(id)a0;
- (void)updateThenLayoutGirdleRelatedViews;
- (void)updateContainerViewLayoutWithIsFullMode:(BOOL)a0;
- (void)handleTapImage:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithViewModel:(id)a0;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;
- (void)willDisplay;

@end
