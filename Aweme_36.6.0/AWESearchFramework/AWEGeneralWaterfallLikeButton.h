@class AWEAwemeModel, UIView;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWEGeneralWaterfallLikeButton : UIButton

@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *likeAnimationView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ touchUpInsideBlock;
@property (nonatomic) BOOL isVisionAIStyle;

- (void)updateDiggCount;
- (void)_onTouchUpInside;
- (void)_stopLikeAnimation;
- (void)_playLikeAnimation;
- (void)announceAccessibility:(id)a0;
- (void)_playDislikeAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })likeAnimationFrame;
- (void)playLikeAnimation;
- (void)playDislikeAnimation;
- (BOOL)doubleColumnExperienceOptimize;
- (void)setForceTheme:(long long)a0;
- (BOOL)showNewLargeFontStyle;
- (id)iconBefore;
- (id)iconAfter;
- (void).cxx_destruct;
- (id)init;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
