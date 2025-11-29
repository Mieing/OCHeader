@class IESLiveIntercomCommentEntranceView;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKComponentIntercomComment : IESLivePKComponent

@property (retain, nonatomic) IESLiveIntercomCommentEntranceView *entranceView;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL hasPropEffectInfo;

- (void)bindAction;
- (void)componentContainerFrameChanged;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)onReceivedPKLynxEvent:(long long)a0 extraParams:(id)a1;
- (void)componentInteracting;
- (void)componentDidClear:(BOOL)a0;
- (void)loadIntercomCommentButton;
- (void)updateIntercomCommentLayout:(BOOL)a0 needShowInteractScore:(BOOL)a1;
- (void)updateCommentPadLayout;
- (void)bindActionLayout;
- (void).cxx_destruct;
- (double)topOffset;
- (void)clean;

@end
