@class NSString, NSTimer, UILabel, UIView;
@protocol AWEVideoTryWatchViewProtocol, AWEPaidStreamControlProtocol;

@interface AWEPlayInteractionLongVideoIAACountDownElement : AWEPlayInteractionLeftElement <AWEPaidStreamControlDelegate>

@property (retain, nonatomic) UIView<AWEVideoTryWatchViewProtocol> *countDownView;
@property (retain, nonatomic) UILabel *hasUnlockedLabel;
@property (retain, nonatomic) NSTimer *timeStayTimer;
@property (nonatomic) long long totalSeconds;
@property (nonatomic) long long secondsStayed;
@property (nonatomic) BOOL isVCDisplaying;
@property (nonatomic, getter=isViewAppearing) BOOL viewAppearing;
@property (nonatomic) long long secondsSubmitted;
@property (nonatomic) long long status;
@property (retain, nonatomic) id<AWEPaidStreamControlProtocol> paidStreamControl;
@property (nonatomic) BOOL firstFrameDidLoad;
@property (nonatomic) double monitorPaidStreamTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoDidActivity;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (void)viewController_viewWillDisappear;
- (void)viewController_viewDidDisappear;
- (id)commonParams;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)setupEvent;
- (void)paidStreamTrialDidStart:(long long)a0;
- (void)preparePaidStream;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamDidUpdatePaidInfoWithPaidInfoItems:(id)a0;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 totalTimeInterval:(double)a1 scene:(long long)a2;
- (id)aboveViewForPaidStreamWithScene:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })blockViewFrameForPaidStreamWithScene:(long long)a0;
- (id)trialContainerViewForPaidStreamWithScene:(long long)a0;
- (id)commonParametersForPaidStreamWithScene:(long long)a0;
- (id)requestParametersForPaidStreamWithScene:(long long)a0;
- (id)playerViewControllerForSecurity;
- (void)paidStreamDidAcquireRightsWithScene:(long long)a0 paymentType:(long long)a1 rights:(id)a2 extraInfo:(id)a3;
- (void)paidStreamDidExitPaymentPage;
- (void)updateForPaidInfoItems:(id)a0;
- (BOOL)shouldShowCountDownView;
- (void)playForPaidStreamIfEnable;
- (void)pauseForPaidStreamIfEnable;
- (void)openIAARewardADContainerFromLandscapeNotification:(id)a0;
- (BOOL)shouldShowLongVideoSelectEpisodeLeftElement;
- (void)updateNeedPreventPlay:(BOOL)a0;
- (void)reloadCountDownData;
- (void)updatePreviewEnable:(BOOL)a0;
- (void)saveCountDownData;
- (void)updateWithPaidStreamTrialStateIsStopped:(BOOL)a0;
- (void)updateProgressController;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)pause;
- (void)startTimer;
- (void)applicationDidEnterBackground;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
