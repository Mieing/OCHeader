@class UIImageView, IESLiveAnimatedImageView, UILabel;
@protocol IESLiveCompoundSubscription, IESLiveTeamFightBaseProvider;

@interface IESLiveTeamFightPrepareTopBar : UIView

@property (retain, nonatomic) UIImageView *anchorBgView;
@property (retain, nonatomic) UIImageView *audienceBgView;
@property (retain, nonatomic) IESLiveAnimatedImageView *couldStartAnimationView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL startTeamFightEnable;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) double startClickTimeStamp;
@property (weak, nonatomic) id<IESLiveTeamFightBaseProvider> provider;
@property (nonatomic) long long teamFightType;

- (void)bindAction;
- (id)initWithType:(long long)a0 DIContext:(id)a1;
- (void)refreshPrepareTopBarToStartStyle:(BOOL)a0;
- (BOOL)enableStartTeamFight;
- (void)createAnchorBgView;
- (void)createAudienceBgView;
- (void)startTeamFightClicked;
- (void)showRulePanel;
- (void)showEnableStartAnimation;
- (void).cxx_destruct;
- (void)setupViews;

@end
