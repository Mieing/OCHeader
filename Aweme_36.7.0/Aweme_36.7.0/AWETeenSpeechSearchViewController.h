@class NSArray, NSString, LOTAnimationView, UIImageView, UILabel, NSObject, UIButton;
@protocol OS_dispatch_source;

@interface AWETeenSpeechSearchViewController : UIViewController <UIViewControllerTransitioningDelegate, AWETeenSpeechServiceDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) NSString *currentString;
@property (nonatomic) long long currentState;
@property (nonatomic) long long lastState;
@property (nonatomic) long long longPressBeginState;
@property (nonatomic) BOOL isFinish;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (nonatomic) BOOL isTimerRunning;
@property (nonatomic) long long cutDownNumber;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) LOTAnimationView *speechAnim;
@property (retain, nonatomic) UIImageView *defaultImageView;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (nonatomic) double startTime;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) NSArray *sugList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_mainAppWindow;
- (void)p_windowDidResignKeyNotification:(id)a0;
- (void)applicationBecomeActive;
- (void)p_dismiss;
- (void)p_startRecording;
- (void)p_cancleRecording;
- (void)p_checkStates;
- (void)p_updateBeforeStatus;
- (void)p_updateRecordingDidStart;
- (void)p_updateRecordingStatus;
- (void)p_updateNosignStatus;
- (void)cancelTimerWithCancelRecording;
- (void)p_stopRecording;
- (id)p_reversedString:(id)a0;
- (id)p_configShowString:(id)a0;
- (void)p_clickSubLable;
- (void)p_didClickRetryBtn;
- (void)p_didClickLottieView;
- (void)p_didLongPreshLottieView:(id)a0;
- (void)handleFailedWithErrorCode:(long long)a0 errorMsg:(id)a1 requestId:(id)a2;
- (void)handleRecordResult:(id)a0 isFinish:(BOOL)a1 requestId:(id)a2;
- (void)speechAudioDidStart;
- (void)p_setupUI;
- (void)close;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
