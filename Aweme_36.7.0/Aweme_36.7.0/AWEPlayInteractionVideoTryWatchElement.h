@class NSString, UIView;
@protocol AWEVideoTryWatchViewProtocol;

@interface AWEPlayInteractionVideoTryWatchElement : AWEPlayInteractionLeftElement <CAAnimationDelegate, AWEPaidStreamPlugin, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<AWEVideoTryWatchViewProtocol> *tryWatchView;
@property (nonatomic) double currVideoStartTime;
@property (nonatomic) double currVideoEndTime;
@property (nonatomic) double playBackTime;
@property (nonatomic) BOOL hasReportTrialEnd;
@property (nonatomic) BOOL hasClosedProductDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id /* block */)onClickBlock;
- (id)commonParameters;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)paidStreamTrialWillStart:(id)a0;
- (void)paidStream:(id)a0 trialRemainingTimeDidChange:(double)a1 totalTimeInterval:(double)a2;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (id)createTrialTagView;
- (double)currentPlayProgressWithScene:(long long)a0;
- (id)getRecType:(id)a0;
- (void)updateUIConfigIfNeededForView:(id)a0;
- (void)animateViewDisappearance;
- (void)animateViewAppearance;
- (BOOL)shouldUseRTSVideoTryWatchView;
- (id)trackLogoShowExtraParams;
- (id)trackTrialEndExtraParams;
- (id)opacityAnimation:(double)a0 toValue:(double)a1;
- (id)pathAnimation:(BOOL)a0;
- (void)paymentVideoExceptPlayletChangeWithView:(id)a0;
- (id)trackLogoClickExtraParams;
- (id)trackIAAParameters;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (double)animationDuration;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
