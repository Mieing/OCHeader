@class NSString, UIImageView, LOTAnimationView, UILabel, HTSLiveToolbarItem;
@protocol IESLiveWebPPlayer;

@interface IESLiveInteractionAudienceCustomItemView : UIView <IESLiveSocialInteractPreLoadExAction>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (retain, nonatomic) LOTAnimationView *matchingAnimationView;
@property (retain, nonatomic) UIImageView *themeBgView;
@property (retain, nonatomic) UIImageView *waitingTipView;
@property (retain, nonatomic) UILabel *waitingNumberLabel;
@property (nonatomic) unsigned long long currentStatus;
@property (nonatomic) BOOL degradeAnimation;
@property (copy, nonatomic) NSString *unregisterId;
@property (weak, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)interactionModeEndedWithLayout:(id)a0;
- (void)renderStatus:(unsigned long long)a0;
- (void)p_animateWithResourceName:(id)a0;
- (void)showWaitingApplicationNumTip:(id)a0;
- (void)registerDegradeStrategy;
- (void)unregisterDegradeStrategy;
- (void)updateThemeBgView;
- (void)startMatchingAnimation;
- (void)stopMatchingAnimation;
- (void)p_setAccessibilityWithStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadViews;

@end
