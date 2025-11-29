@class MMLiveGradientLayerView, MMFinderLivePkTaskedBonusBarBackgroundFrenzyPatternAnimationView, UIImageView, UIView, MMFinderLivePkTaskedBonusBarBackgroundFrenzyPatternView;

@interface MMFinderLivePkTaskedBonusBarBackgroundFrenzyView : MMLiveGradientLayerView

@property (retain, nonatomic) UIView *patternContainerView;
@property (retain, nonatomic) MMFinderLivePkTaskedBonusBarBackgroundFrenzyPatternAnimationView *patternAnimationView;
@property (retain, nonatomic) MMFinderLivePkTaskedBonusBarBackgroundFrenzyPatternView *patternView;
@property (retain, nonatomic) MMLiveGradientLayerView *topBorderView;
@property (retain, nonatomic) MMLiveGradientLayerView *bottomBorderView;
@property (retain, nonatomic) UIImageView *shineView;
@property (nonatomic) BOOL shineViewHidden;
@property (nonatomic) double relativeHorizontalShinePosition;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)startPatternAnimation;
- (void)stopPatternAnimation;
- (void).cxx_destruct;

@end
