@class IESLiveCommonNotifyEnterNode, UIImageView, IESLiveAnimatedImageView, UILabel, IESLiveFlexBackgroundImageView;

@interface IESLiveCommonNotifyEnterView : IESLiveUserEnterBaseView

@property (retain, nonatomic) IESLiveCommonNotifyEnterNode *node;
@property (nonatomic) double startShowingTime;
@property (retain, nonatomic) IESLiveFlexBackgroundImageView *enterView;
@property (retain, nonatomic) IESLiveAnimatedImageView *sweepLightView;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *descLabel;

- (void)updateWithEnterMessageNode:(id)a0;
- (void)touchViewDidTap;
- (double)notifyEnterViewEnterAnimationDuration;
- (void)startShowingAnimation;
- (void)startComboAnimationIfNeeded;
- (double)notifyEnterViewEnterDismissDuration;
- (void)startComboAnimation;
- (void)layoutUIForNode;
- (void)updateContainerViewBackground;
- (void)updateForCombinedText;
- (void)updateForDisplayTextAndIcons;
- (BOOL)isEcomScene;
- (id)getViewWithDisplayItem:(id)a0;
- (id)replaceNickname:(id)a0;
- (id)replaceNicknameByDot:(id)a0;
- (id)stackImageItem:(id)a0;
- (void)addTag:(id)a0 toView:(id)a1;
- (void)startNumberRollIfNeedWithLabel:(id)a0 number:(long long)a1;
- (void)startNumerRollWithLabel:(id)a0 number:(long long)a1 iterateTime:(long long)a2;
- (void)layoutUIForEcom;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)layoutContainerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startFadeOutAnimation;

@end
