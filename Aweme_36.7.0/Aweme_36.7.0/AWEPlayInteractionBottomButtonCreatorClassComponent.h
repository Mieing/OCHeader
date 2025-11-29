@class AWEPlayInteractionCreatorClassButtonView, NSString, AWEPageContext, AWEPlayInteractionBottomButtonCreatorClassViewModel, AWECommonButtonInfoModel;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol;

@interface AWEPlayInteractionBottomButtonCreatorClassComponent : NSObject <AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) id<AWEPlayInteractionContextProtocol> context;
@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonCreatorClassViewModel *viewModel;
@property (retain, nonatomic) AWEPlayInteractionCreatorClassButtonView *creatorClassButton;
@property (nonatomic) BOOL isOnRightRectWhenWillDisplay;
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
- (void)viewController_willDisplay;
- (void)viewController_didDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (void).cxx_destruct;
- (void)reset;
- (id)buttonView;

@end
