@class NSTimer, AWEPlayInteractionLLMBottomView, AWEInteractBarModel, NSNumber;

@interface AWEPlayInteractionLLMBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) NSTimer *showTimer;
@property (retain, nonatomic) AWEPlayInteractionLLMBottomView *llmBottomView;
@property (retain, nonatomic) AWEInteractBarModel *interactBarModel;
@property (retain, nonatomic) NSNumber *hideAfterDelay;
@property (nonatomic) double showBeginTimestamp;
@property (nonatomic) double showTime;
@property (nonatomic) BOOL isAppear;

- (void)setHide:(BOOL)a0;
- (void)viewController_willDisplay;
- (void)viewController_didDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (BOOL)isShowingPanels;
- (void)viewDidDisposed;
- (void)handleButtonAction:(id)a0;
- (BOOL)shouldAppearWithData:(id)a0;
- (BOOL)shouldShowLLMBottomBar;
- (void)updateBottomView;
- (void)handleBottomViewStatusIfNeeded;
- (BOOL)enableFixLLMBarShow;
- (long long)transNewTypeToWordType:(long long)a0;
- (BOOL)isPanelsShowingOrDisappearing;
- (void)performHideLLMBottomViewAfterDelay:(id)a0;
- (void)hideLLMBottomView;
- (double)singleWordHideDelayTime;
- (double)feedbackHideDelayTime;
- (void)showLLMBottomViewWithCompletion:(id /* block */)a0;
- (double)singleWordPositiveShowWaitingTime;
- (double)feedbackShowWaitingTime;
- (void)showLLMBottomView;
- (void).cxx_destruct;
- (void)enterBackground;
- (void)reset;
- (void)enterForeground;
- (void)viewDidLoad;
- (id)identifier;
- (void)dealloc;

@end
