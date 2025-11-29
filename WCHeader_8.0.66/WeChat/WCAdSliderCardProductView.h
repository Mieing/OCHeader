@class WCDataItem, NSString, WCAdSliderCardProductItem, CAAnimation, MMUIView, WCAdURLImageView, CAGradientLayer, WCAdSliderCardProductInfo, MMUILabel, MMUIButton, WCAdSliderCardLogic;
@protocol WCAdSliderCardProductViewDelegate;

@interface WCAdSliderCardProductView : MMUIView <IWCAdSliderCardLogicExt, CAAnimationDelegate>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdSliderCardProductInfo *productInfo;
@property (nonatomic) BOOL isDetail;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) MMUIView *barView;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) WCAdURLImageView *productImageView;
@property (retain, nonatomic) CAGradientLayer *actionBgLayer;
@property (retain, nonatomic) MMUIButton *actionTitleView;
@property (retain, nonatomic) MMUILabel *nextTitleView;
@property (retain, nonatomic) WCAdURLImageView *nextProductImageView;
@property (readonly, nonatomic) WCAdSliderCardLogic *sliderCardLogic;
@property (readonly, nonatomic) WCAdSliderCardProductItem *currentProductItem;
@property (retain, nonatomic) CAAnimation *currentAnimation;
@property (nonatomic) BOOL isMediaPlayProcessed;
@property (weak, nonatomic) id<WCAdSliderCardProductViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 isDetail:(BOOL)a2;
- (void)dealloc;
- (void)initView;
- (void)switchToIndex:(long long)a0;
- (void)onMediaPlay;
- (void)doAnimationSwitchToIndex:(long long)a0 isSlideLeft:(BOOL)a1;
- (void)delaySwitchToActionState:(double)a0;
- (void)cancelDelaySwitchToActionState;
- (void)doAnimationSwitchToActionState;
- (void)doAnimationFirstShow;
- (void)setContentWithIndex:(long long)a0 andState:(long long)a1;
- (void)showActionView:(long long)a0;
- (void)hideActionView;
- (id)createTitleView;
- (id)createProductImageView;
- (void)updateVisible;
- (void)initNextProductView:(long long)a0;
- (void)removeNextProductView;
- (void)removeAllAnimations;
- (void)resetCurrentContentView;
- (id)fetchProductItem:(long long)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onBarViewTapped;
- (void)onOpeningAnimationVisibleStateChanged:(id)a0 contentItemScene:(unsigned long long)a1 isVisible:(BOOL)a2;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
