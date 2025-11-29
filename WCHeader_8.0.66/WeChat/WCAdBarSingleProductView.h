@class MMUIButton, WCAdBarSingleProductInfo, NSString, MMUIView, ColorGradientView, WCAdBarSingleProductTitleView, WCAdURLImageView;
@protocol WCAdBarSingleProductDelegate;

@interface WCAdBarSingleProductView : MMUIView <CAAnimationDelegate>

@property (retain, nonatomic) WCAdBarSingleProductInfo *singleProductInfo;
@property (retain, nonatomic) MMUIView *bannerBackgroundView;
@property (retain, nonatomic) ColorGradientView *brandColorGradientView;
@property (retain, nonatomic) WCAdURLImageView *brandImageView;
@property (retain, nonatomic) WCAdBarSingleProductTitleView *actionTitleView;
@property (retain, nonatomic) MMUIButton *foregroundButton;
@property (weak, nonatomic) id<WCAdBarSingleProductDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 singleProductInfo:(id)a1;
- (void)generateSubviews;
- (void)onForegroundButtonClicked:(id)a0;
- (void)prepare;
- (void)showWithAnimation;
- (void)addVisibleAnimationToView:(id)a0;
- (void)addVisibleAnimationToView:(id)a0 originOffsetX:(double)a1 callback:(id /* block */)a2;
- (id)generateKeyframeAnimationWithKeyPath:(id)a0 duration:(double)a1 timingFunctions:(id)a2 values:(id)a3 keyTimes:(id)a4;
- (void)addAnimation:(id)a0 toView:(id)a1 withInfo:(id)a2;
- (void)onShowAnimationDone;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
