@class DUXLottieView, NSString, LOTAnimationView, AWEGradientView, UILabel, UIView;

@interface AWEGrouponLifeSwipeUpGuideView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) DUXLottieView *lottieView;
@property (retain, nonatomic) LOTAnimationView *handGestureLottieView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UILabel *tipsTitle;
@property (retain, nonatomic) UIView *tipsContentView;
@property (nonatomic) double tipsContentBottomOffset;
@property (nonatomic) BOOL isHalfScreenStyle;
@property (copy, nonatomic) id /* block */ scrollToFeedBlock;
@property (copy, nonatomic) id /* block */ interactionBlock;
@property (nonatomic) BOOL hasHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)guideType;
+ (long long)delayShowSecond;
+ (id)fqcStringWithPageType:(long long)a0;
+ (long long)showTimeSecond;
+ (id)guidTips;
+ (long long)tipsFontSize;
+ (long long)tipsFontWeight;
+ (BOOL)enable;

- (void)hideWithDuration:(double)a0 completion:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageType:(long long)a1 isHalfScreenStyle:(BOOL)a2;
- (void)showWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)updateTipsTitle:(id)a0;
- (void)setupUIWithPageType:(long long)a0;
- (void)setupGestureUIWithPageType:(long long)a0;
- (void)setupTipsUIWithPageType:(long long)a0;
- (void)scrollToFeed;
- (void).cxx_destruct;
- (void)interaction;
- (void)stopAnimation;
- (void)registerNotifications;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)appDidBecomeActive;
- (void)playAnimation;

@end
