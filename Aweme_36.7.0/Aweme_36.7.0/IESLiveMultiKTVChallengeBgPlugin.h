@class CAGradientLayer, NSString, IESLiveImageView, UIView, HTSEventForwardingView, IESLiveGradientView;

@interface IESLiveMultiKTVChallengeBgPlugin : IESLiveMultiKTVStagePluginBase <IESLiveMultiKTVStageActions, IESLiveMultiKTVStagePluginProtocol>

@property (retain, nonatomic) UIView *backgroundImageView;
@property (retain, nonatomic) UIView *statusBarView;
@property (retain, nonatomic) IESLiveImageView *staticGoldenBG;
@property (retain, nonatomic) UIView *bgContainer;
@property (copy, nonatomic) NSString *currentThemeID;
@property (retain, nonatomic) HTSEventForwardingView *defaultBGView;
@property (retain, nonatomic) IESLiveGradientView *gradientView;
@property (retain, nonatomic) CAGradientLayer *layer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;

- (void)didSetAttachingDIContext;
- (void)updateStatusBarBackgroundColor:(id)a0;
- (void)updateStageViewBackgroundImageWithImageURLs:(id)a0;
- (void)updateShowingTheme:(id)a0;
- (void)updateCurrentTheme:(id)a0;
- (void)updateStageViewBackgroundImage:(id)a0;
- (void)didActivateInKTVStageContainerView:(id)a0;
- (void)didDeactivated;
- (void)p_layoutFullBg;
- (void)p_layoutDynamicBg;
- (void)updateBackgroundTransform:(double)a0;
- (void)eneterChallengeMode;
- (void)exitChallengeMode;
- (BOOL)p_isChallengeTheme;
- (void).cxx_destruct;

@end
