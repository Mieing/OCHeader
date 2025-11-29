@class UIButton;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKComponentAudienceCloseMic : IESLivePKComponent

@property (nonatomic) BOOL hasBanToastOnce;
@property (retain, nonatomic) UIButton *closeMicButton;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL hasPropEffectInfo;

- (void)bindAction;
- (void)componentDidLoad;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)onReceivedPKLynxEvent:(long long)a0 extraParams:(id)a1;
- (void)componentInteracting;
- (void)componentDidClear:(BOOL)a0;
- (void)loadCloseMicButton;
- (void)updateCloseMicPosWithIsClear:(BOOL)a0;
- (void)onClickCloseMicButton;
- (void).cxx_destruct;
- (void)clean;

@end
