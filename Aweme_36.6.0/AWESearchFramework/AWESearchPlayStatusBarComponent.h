@class UIView, NSString, UIImageView, UIButton, NSDictionary, NSMutableArray, AWESearchEventDispather, UILabel, AWESearchPlayStatusBarComponentModel;
@protocol AWESearchStandardVideoPlayerComponentProvider, AWESearchContainerProtocol, AWESearchComponentProtocol, AWESearchPlayStatusBarComponentBroadcast;

@interface AWESearchPlayStatusBarComponent : AWESearchComponent <AWESearchPlayStatusBarComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *playStatusButton;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UILabel *leftTimeLabel;
@property (weak, nonatomic) id<AWESearchStandardVideoPlayerComponentProvider> playerProvider;
@property (retain, nonatomic) AWESearchPlayStatusBarComponentModel *playStatusBarModel;
@property (weak, nonatomic) id<AWESearchPlayStatusBarComponentBroadcast> broadCast;
@property (retain, nonatomic) NSMutableArray *broadCastArray;
@property (nonatomic) BOOL pauseBySingleClick;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (id)getLeftTimeStringWithLeftTime:(double)a0;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)showLoadingAnimation;
- (void)stopLoadingAniamtion;
- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)showPlayingUI;
- (void)showPauseUI;
- (void)componentDidLoad;
- (void)updateLeftTime:(double)a0 totalTime:(double)a1;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (id)receiveProtocolList;
- (void)playerStartLoopPlaying;
- (void)didChangePlaybackStateWithPlayer:(id)a0 playBackAction:(long long)a1;
- (void)updatePlayerCompleteWithPlayState:(long long)a0 playedDuration:(double)a1 totalDuration:(double)a2 model:(id)a3;
- (void)updatePlayButtonStatus;
- (void)loadingAnimationStop;
- (BOOL)fixPlayStatusBarShowError;
- (void)loadingAnimationPlay;
- (void)playStatusButtonAction;
- (void).cxx_destruct;
- (id)componentView;

@end
