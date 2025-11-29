@class UIButton;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKComponentInteractScore : IESLivePKComponent

@property (nonatomic) BOOL isInteractScoreShowAgain;
@property (retain, nonatomic) UIButton *ownerInteractScoreButton;
@property (retain, nonatomic) UIButton *oppositeInteractScoreButton;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;

- (void)bindAction;
- (void)componentContainerFrameChanged;
- (void)componentPlaying;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentDidClear:(BOOL)a0;
- (void)updateScoreWithButton:(id)a0 score:(id)a1;
- (void)refreshHiddenStatus;
- (void)trackInteractScoreShow;
- (void)onInteractScoreButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)setupView;
- (void)clean;

@end
