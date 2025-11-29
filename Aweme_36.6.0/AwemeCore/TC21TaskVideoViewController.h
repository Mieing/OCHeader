@class UIView, TC21TaskVideoModel, NSString, UIImageView, UIButton, AWETC21VideoPlayerAdapter, UILabel, TC21TaskVideoSponsorCardView;

@interface TC21TaskVideoViewController : UIViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWETC21VideoPlayerAdapter *videoPlayer;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) TC21TaskVideoModel *videoModel;
@property (nonatomic) long long playState;
@property (retain, nonatomic) TC21TaskVideoSponsorCardView *cardView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) UIImageView *adMarkImageView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIImageView *stallView;
@property (retain, nonatomic) UIImageView *playImageView;
@property (nonatomic) long long tickCount;
@property (nonatomic) long long lastTimestamp;
@property (nonatomic) BOOL isPlayGurdVideo;
@property (nonatomic) BOOL isReplay;
@property (nonatomic) BOOL shouldHandleReportTaskTip;
@property (nonatomic) BOOL isShowingPause;
@property (nonatomic) BOOL hasShowVideoLog;
@property (nonatomic) BOOL isFinishPlayVideoTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)willResignActiveNotification;
- (void)didBecomeActiveNotification;
- (void)showSponsorCard;
- (void)playWithModel:(id)a0;
- (void)updateCountDown:(id)a0;
- (void)changePlayState:(BOOL)a0;
- (void)showStallView:(BOOL)a0;
- (void)p_startLoadingAnimation;
- (BOOL)shouldShowSponsorCard;
- (void)hideSponsorCard;
- (void)reportCommerceGQCompleted;
- (void)trackCommerceGQIfNeededWithEvent:(id)a0;
- (void)playAnimationWithPaused:(BOOL)a0;
- (void)tryShowSponsorCard;
- (void)playOnlineTaskVideo;
- (void)addPlayFailedLog;
- (void)onPlayProgress:(long long)a0;
- (void)playControlAction;
- (void)showToastWith:(id)a0;
- (id)reportSuccessToast:(long long)a0;
- (void).cxx_destruct;
- (void)closeAction;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (double)topMargin;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupViews;
- (void)playVideo;

@end
