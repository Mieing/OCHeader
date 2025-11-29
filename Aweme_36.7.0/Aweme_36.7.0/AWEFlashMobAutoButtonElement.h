@class NSString, AWEFlashMobButtonViewModel, UIView, UIButton;

@interface AWEFlashMobAutoButtonElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) UIButton *joinButton;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL clicked;
@property (nonatomic) BOOL shouldDelayShowButton;
@property (nonatomic) long long avoidPriority;
@property (retain, nonatomic) AWEFlashMobButtonViewModel *btnViewModel;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL needReverse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillDisappear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)quickFlashModelFromSchema:(id)a0;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)configBtnViewModel;
- (void)onRecommendAwemeDiggNotification:(id)a0;
- (BOOL)shouldShowQuickFlashButtonRecommend;
- (void)routeShootPage:(id)a0;
- (id)parameterForSchema;
- (BOOL)shouldShowRecommendFlashMobButton;
- (void)showJoinQuickFlashButtonRecommend;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;
- (void)viewDidLoad;

@end
