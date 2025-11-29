@class NSString, LOTAnimationView, AWELiveUserFollowButton, UILabel, UIView;

@interface AWELiveStreamUserNameElement : AWELiveLeftElement <AWEUserMessage>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *watchNumLabel;
@property (nonatomic) long long delayShowFollowIconTime;
@property (nonatomic) BOOL enableShowFollowIcon;
@property (retain, nonatomic) LOTAnimationView *followLottieView;
@property (nonatomic) BOOL isShowed;
@property (retain, nonatomic) AWELiveUserFollowButton *followButton;
@property (nonatomic) BOOL enableReportShowTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)initializeElement;
- (void)viewController_viewDidDisAppear;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)preloadElement;
- (void)streamPlayer_startToPlay;
- (BOOL)isFollow;
- (double)labelHeight;
- (void)onRightAreaChange:(double)a0;
- (void)setupFollowLottieView;
- (BOOL)shouldShowFollowIcon;
- (void)showFollowLottie;
- (void)showFollowButtonAnimation;
- (id)watchNumStr;
- (void)p_trackFollowButtonShow;
- (void)p_trackFollowUser;
- (void)trackAdClickSource;
- (void)usernameTapped:(id)a0;
- (id)createFollowLottieView;
- (void)changeFollowStatus:(id)a0;
- (void)p_changeFollowBtn:(BOOL)a0;
- (BOOL)canUpdateFollowButtonState;
- (void)verifiedIconClick;
- (void)p_trackVerifiedIconShow;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (unsigned long long)priority;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (double)labelFontSize;

@end
