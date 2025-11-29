@class NSObject, UILabel, UIImageView, NSString, AWEFullScreenAdEggModel, AWEFullScreenAdEggMainConvertAreaView, UIView;
@protocol OS_dispatch_source, AWEFullScreenAdEggView;

@interface AWEFullScreenAdEggViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate, CAAnimationDelegate>

@property (retain, nonatomic) AWEFullScreenAdEggMainConvertAreaView *mainConvertArea;
@property (retain, nonatomic) UIView<AWEFullScreenAdEggView> *adEggView;
@property (retain, nonatomic) AWEFullScreenAdEggModel *model;
@property (retain, nonatomic) UIImageView *closeView;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL isTimerSuspend;
@property (nonatomic) BOOL shouldShowImmediately;
@property (nonatomic) BOOL isAdEggViewLoadComplete;
@property (nonatomic) long long countDownSecs;
@property (nonatomic) BOOL isClosed;
@property (nonatomic) BOOL isLoadFail;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (nonatomic) BOOL isDataPreloaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowFullScreenAdEggWithModel:(id)a0;

- (void)trackShow;
- (void)tryShowAdEggImmediately;
- (void)trackLoadFailwithFailReason:(id)a0;
- (void)trackShowResultWithSuccess:(long long)a0 failReason:(id)a1;
- (void)presentAdEgg;
- (void)setupAdEggView;
- (void)setupCloseView;
- (void)setupCountDownLabel;
- (void)setupViewConstraints;
- (void)setupGestureRecognizer;
- (void)showOverAction;
- (void)trackAdEventWithLabel:(id)a0 refer:(id)a1;
- (void)didClickMainConvertAreaView;
- (void)trackOtherClick;
- (void)trackClick;
- (void)dismissWithLabel:(id)a0;
- (void)dismissWithAnimation;
- (void)trackAdEventWithLabel:(id)a0;
- (void)updateAndStartCountDownSecs:(long long)a0;
- (void)trackPreloadStart;
- (void)trackPreloadResultWithSuccess:(long long)a0 failReason:(id)a1 isPreload:(long long)a2;
- (void)handlePan:(id)a0;
- (void)didBecomeActive;
- (void)clearTimer;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)closeAction;
- (void)viewWillAppear:(BOOL)a0;
- (void)reset;
- (void)didResignActive;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateWithModel:(id)a0;

@end
