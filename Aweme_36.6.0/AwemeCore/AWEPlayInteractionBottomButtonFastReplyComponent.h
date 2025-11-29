@class NSString, AWEPageContext, UIView, AWECommonButtonInfoModel, AWEPlayInteractionBottomButtonFastReplyViewModel;
@protocol AWEPlayInteractionBottomButtonViewProtocol, AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol, AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionBottomButtonFastReplyComponent : NSObject <AWEPlayInteractionBottomButtonComponentProtocol, AFDPlayInteractionFastReplyBaseElementProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (retain, nonatomic) UIView<AWEPlayInteractionBottomButtonViewProtocol> *buttonView;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonFastReplyViewModel *viewModel;
@property (copy, nonatomic) id /* block */ showFastReplyHandler;
@property (copy, nonatomic) id /* block */ hideFastReplyHandler;
@property (copy, nonatomic) id /* block */ updateFastReplyHandler;
@property (copy, nonatomic) id /* block */ clickFastReplyHandler;
@property (nonatomic) BOOL shouldReaddObserver;
@property (readonly, nonatomic) BOOL isCommentInputViewShowing;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (BOOL)shouldValidateUI;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (void)viewController_viewDidDisappear;
- (void)elementDidActivated;
- (void)showFastReplyView:(id)a0;
- (void)hideFastReplyView;
- (void)updateFastReplyView;
- (void)didClickFastReplyView;
- (void)updateLandscapeView;
- (id)fastReplyConfig;
- (BOOL)isAppear;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)addObserver;
- (void)reset;
- (void)removeObserver;
- (void)didInitialize;
- (double)containerWidth;

@end
