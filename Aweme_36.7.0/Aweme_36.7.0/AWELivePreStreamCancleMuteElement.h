@class UIView;
@protocol AFDMuteAwemeCancelViewProtocol;

@interface AWELivePreStreamCancleMuteElement : AWELiveLeftElement <AFDMuteAwemeMessage>

@property (retain, nonatomic) UIView<AFDMuteAwemeCancelViewProtocol> *cancelMuteView;
@property (nonatomic) BOOL isShowing;

+ (BOOL)shouldActivateElement;

- (void)viewController_viewWillAppear;
- (void)muteAwemeCanceled;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)viewDidDisposed;
- (void)streamPlayer_startToPlay;
- (void)accessibilityElementAutomaticFocus;
- (void)p_shortenBottomArea:(double)a0;
- (void)showAnimationMuteButton;
- (void)trackCancelMuteViewEvent:(id)a0;
- (void)recoverVoice;
- (void)didtappedCancelMuteView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)priority;
- (void)reset;
- (void)viewDidLoad;
- (void)showMuteButton;
- (void)clean;
- (void)layoutUI;

@end
