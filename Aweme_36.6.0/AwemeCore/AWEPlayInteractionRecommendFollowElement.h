@class NSString, NSTimer, AWEPlayInteractionRecommendFollowViewModel, AWEPlayInteractionRecommendFollowView;

@interface AWEPlayInteractionRecommendFollowElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEPlayInteractionRecommendFollowView *followView;
@property (retain, nonatomic) AWEPlayInteractionRecommendFollowViewModel *viewModel;
@property (nonatomic) BOOL isWaitingDisappear;
@property (nonatomic) BOOL isFollowGuideHandlerAdded;
@property (nonatomic) BOOL isFollowGuideActiveTriggerHandlerAdded;
@property (copy, nonatomic) id /* block */ followGuideHandler;
@property (copy, nonatomic) id /* block */ followGuideActiveTriggerHandler;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double shownTime;
@property (nonatomic) long long prePlayIndex;
@property (nonatomic) BOOL needReverse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)videoDidActivity;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (void)setAppear:(BOOL)a0;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)removeOlderFollowGuideHandler;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)configObservers;
- (void)resetButtonStatus;
- (void)resetFollowView;
- (void)updateFollowView:(BOOL)a0;
- (void)__stopCountDown;
- (void)__postElementShowsNoti;
- (void)__updateFollowGuideShownCount;
- (void)__startCountDown;
- (void)removeOlderFollowGuideActiveTriggerHandler;
- (long long)__ugFollowGuideTriggerType;
- (void)postActiveTriggerMessage:(id)a0;
- (void)forceResetFollowView;
- (void)hideFollowView;
- (void)recordFollowGuideElementWillShow;
- (void)recordFollowGuideElementWillHide;
- (long long)__shownDuration;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
