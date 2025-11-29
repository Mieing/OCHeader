@class AWEPageContext, NSString, AWEPlayInteractionContext, NSTimer, UIView, AWECommonButtonInfoModel, NSObject;
@protocol AWEPlayInteractionBottomButtonComponentDelegateProtocol, AWEPlayInteractionBottomButtonComponentViewModelProtocol, AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonViewProtocol;

@interface AWEPlayInteractionBottomButtonTemplateComponent : NSObject <AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) UIView<AWEPlayInteractionBottomButtonViewProtocol> *buttonView;
@property (retain, nonatomic) NSObject<AWEPlayInteractionBottomButtonComponentViewModelProtocol> *viewModel;
@property (retain, nonatomic) NSTimer *stayTimer;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (void)videoDidActivity;
- (void)showBottomButtonWithTriggerType:(long long)a0;
- (void)hideBottomButton;
- (void)handleClickEventWithModel:(id)a0 clickBlock:(id /* block */)a1;
- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (BOOL)canRespondToTriggerType:(long long)a0;
- (void)didShowViewByTriggerDelay:(BOOL)a0;
- (id)bizParamsForShowEventTrack;
- (id)bizParamsForClickEventTrack;
- (void)viewController_combinedDidEndDisplaying;
- (BOOL)shouldValidateUI;
- (BOOL)shouldShowTemplateButtonRepeatedly;
- (void)viewController_willDisplay;
- (void)viewController_didDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (void)setupBinding;
- (BOOL)shouldTriggerShowForVideoPlayedPeriod;
- (void)onReceiveShareNotification:(id)a0;
- (void)resumeStayTimerIfNeeded;
- (void)destroyStayTimerIfExist;
- (void)pauseStayTimerIfExist;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)setupButtonView;

@end
