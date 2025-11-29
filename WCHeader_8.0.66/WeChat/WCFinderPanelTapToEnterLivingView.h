@class UILabel, CAAnimationGroup, UIView;
@protocol WCFinderPanelTapToEnterLivingViewDelegate;

@interface WCFinderPanelTapToEnterLivingView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tapToEnterLabel;
@property (retain, nonatomic) UIView *blurBackgroundView;
@property (retain, nonatomic) UIView *lineContainerView;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIView *breatheContainerView;
@property (retain, nonatomic) CAAnimationGroup *breatheAnimationGroup;
@property (nonatomic) double loopDuration;
@property (nonatomic) double loopInterval;
@property (weak, nonatomic) id<WCFinderPanelTapToEnterLivingViewDelegate> delegate;

+ (double)defaultHeight;
+ (id)labelFont;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startBreatheAnimation:(double)a0 loopInterval:(double)a1;
- (void)stopBreatheAnimation;
- (void)loopPauseAnimation;
- (void)loopResumeAnimation;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateStyle:(unsigned long long)a0 animate:(BOOL)a1;
- (void)updateTapToEnterLabel:(id)a0;
- (void)addViews;
- (void)addContentView;
- (void)addBlurBackgroundView;
- (void)addLineContainerView;
- (void).cxx_destruct;

@end
