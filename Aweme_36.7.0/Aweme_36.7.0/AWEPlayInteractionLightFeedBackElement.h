@class AWEElementContainer, UIView;
@protocol AWEAdLightFeedbackLynxView;

@interface AWEPlayInteractionLightFeedBackElement : AWEPlayInteractionNewBottomElement

@property (nonatomic) BOOL canSendLoopPlayEvent;
@property (nonatomic) double leaveTime;
@property (nonatomic) BOOL surveyShowed;
@property (retain, nonatomic) AWEElementContainer *leftContainer;
@property (retain, nonatomic) AWEElementContainer *rightContainer;
@property (retain, nonatomic) UIView<AWEAdLightFeedbackLynxView> *adLightFeedbackLynxView;

+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)recordElementLeaveTime;
- (void)handleLandingPageSurverShowNotification:(id)a0;
- (void)handleEnterForegroundNotification;
- (void)sendBackFromLandingPageEventIfNeeded;
- (void)layoutAdLightFeedbackLynxView;
- (BOOL)canShowLightFeedback;
- (BOOL)shouldShowAdLightFeedbackLynxView;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;
- (void)dealloc;

@end
