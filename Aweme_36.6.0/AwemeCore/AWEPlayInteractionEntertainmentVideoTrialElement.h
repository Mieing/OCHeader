@class NSString, UIView;
@protocol AWEVideoTryWatchViewProtocol, AWEEntertainmentVideoTrialPresenterProtocol;

@interface AWEPlayInteractionEntertainmentVideoTrialElement : AWEPlayInteractionLeftElement <AWEEntertainmentVideoTrialDelegate, AWEPaidStreamPlugin, AWEElementSelfFilterProtocol>

@property (weak, nonatomic) UIView<AWEVideoTryWatchViewProtocol> *trialTagView;
@property (retain, nonatomic) id<AWEEntertainmentVideoTrialPresenterProtocol> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)createPresenter;
- (void)presenterTrialDidStart:(id)a0;
- (void)presenterTrialDidFinish:(id)a0;
- (void)paidStream:(id)a0 trialRemainingTimeDidChange:(double)a1 totalTimeInterval:(double)a2;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (id)createTrialTagView;
- (BOOL)tipChangeWithAutoOpenType;
- (void)setupEvents;
- (void)updateUIConfigIfNeededForView:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
