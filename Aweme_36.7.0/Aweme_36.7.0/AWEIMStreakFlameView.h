@class NSDate, UIView, NSString, BDImageView, NSMutableArray, IESIMStreakFlameViewConfig, CAGradientLayer, UILabel;
@protocol IESIMStreakFlameViewDelegate;

@interface AWEIMStreakFlameView : UIView <IESIMStreakFlameViewProtocol>

@property (retain, nonatomic) IESIMStreakFlameViewConfig *currentViewConfig;
@property (retain, nonatomic) UIView *streakLabelBackgroundView;
@property (retain, nonatomic) BDImageView *streakIconImageView;
@property (retain, nonatomic) UILabel *streakTextLabel;
@property (retain, nonatomic) UIView *labelContainerView;
@property (nonatomic) BOOL p_isIconImageViewDisappearing;
@property (nonatomic) BOOL isAnimationPlaying;
@property (nonatomic) unsigned long long animationType;
@property (retain, nonatomic) NSMutableArray *animationQueue;
@property (retain, nonatomic) NSDate *lastAnimationCompleteTime;
@property (nonatomic) double temporaryAnimationDuration;
@property (retain, nonatomic) BDImageView *streakTipsIconImageView;
@property (retain, nonatomic) UIView *streakTipsLabelBackgroundView;
@property (retain, nonatomic) CAGradientLayer *streakTipsLabelBackgroundViewGradientLayer;
@property (retain, nonatomic) UILabel *streakTipsTextLabel;
@property (weak, nonatomic) id<IESIMStreakFlameViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playTipsAnimationWithConfig:(id)a0;
- (void)streakFlameViewDidClick;
- (void)renderWithViewConfig:(id)a0;
- (id)getStreakText;
- (void)setupClickEvent;
- (void)setupNormalStreakLayout;
- (struct CGSize { double x0; double x1; })currentStreakIconSize;
- (double)getDistanceBetweenIconAndLabel;
- (void)playAnimationWithViewConfig:(id)a0 preBlock:(id /* block */)a1;
- (void)updateStreakTextLabelWithConfig:(id)a0;
- (void)updateLabelWithAnimate:(BOOL)a0;
- (void)updateIconWithAnimated:(BOOL)a0;
- (void)updateIconImageViewDataWithConfig:(id)a0;
- (void)playAnimationBlockWithForceAddAnimationQueue:(BOOL)a0 animationBlock:(id /* block */)a1;
- (void)setupTipsViewElementsWithAnimationConfig:(id)a0;
- (void)playScaleAnimationWithElement:(id)a0 xValues:(id)a1 yValues:(id)a2 keyTimes:(id)a3 beginTime:(double)a4 duration:(double)a5 isAppearAnimation:(BOOL)a6;
- (void)playAlphaAnimationWithElement:(id)a0 values:(id)a1 keyTimes:(id)a2 beginTime:(double)a3 duration:(double)a4 isAppearAnimation:(BOOL)a5;
- (void)updateLabelBackgroundViewLayout;
- (double)getBackgroundViewPadding;
- (void)updateLabelWithAnimate:(BOOL)a0 disappearThenAppear:(BOOL)a1 didDisappeared:(id /* block */)a2;
- (void)updateChatDaysLabelSize;
- (void)updateIconV2WithAppearOnly:(BOOL)a0;
- (void)playIconScaleAnimation;
- (void)triggerAnimationLoop;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
