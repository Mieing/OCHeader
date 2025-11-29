@class DUXButton, AWEListenFeedPodCastContinuePlayManager;

@interface AWEListenFeedPodCastElement : AWEListenFeedInteractionBaseElement

@property (retain, nonatomic) DUXButton *podCastButton;
@property (retain, nonatomic) DUXButton *exitPodCastButton;
@property (retain, nonatomic) AWEListenFeedPodCastContinuePlayManager *podCastContinuePlayManager;
@property (nonatomic) long long beforeEnterPodCastPlayState;

+ (double)elementHeight;

- (void)updateWithModel:(id)a0 playModel:(id)a1 context:(id)a2;
- (void)prepareForReuseVC;
- (void)updatePodcastStatusIfNeedWithModel:(id)a0;
- (void)exitPodcastModeIfNeed;
- (void)updateCurrentButtonStatus;
- (void)trackForPodCastButtonShow;
- (void)exitButtonClickFinishAction;
- (double)buttonWidthWithTitle:(id)a0;
- (double)buttonIconSize;
- (void)trackForPodCastButtonClick;
- (void)podCastButtonClickFinishAction;
- (void)resumeListen;
- (void)updatePlayerViewControllerWithModel:(id)a0 defaultSeekToTime:(double)a1;
- (void)podCastButtonClickAction;
- (void)exitButtonClickAction;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)playAudio;

@end
