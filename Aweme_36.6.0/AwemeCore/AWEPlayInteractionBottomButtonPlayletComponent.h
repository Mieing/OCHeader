@class AWEShowPlayletPlayInteractionBottomButtonViewModel, NSString, AWEPlayInteractionContext, AWEPageContext, AWEShowPlayletPlayInteractionBottomButtonView, AWECommonButtonInfoModel, AWEPlayInteractionBottomButtonPlayletComponentContainerView;
@protocol AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol;

@interface AWEPlayInteractionBottomButtonPlayletComponent : NSObject <AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) AWEShowPlayletPlayInteractionBottomButtonView *bottomButtonView;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonPlayletComponentContainerView *containerView;
@property (retain, nonatomic) AWEShowPlayletPlayInteractionBottomButtonViewModel *viewModel;
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
- (void)didShowViewByTriggerDelay:(BOOL)a0;
- (id)bizParamsForShowEventTrack;
- (id)bizParamsForClickEventTrack;
- (void)viewController_didDisplay;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (id)cellViewController;
- (void)trackShowPlayletEntrance;
- (void)trackClickPlayletEntrance;
- (id)playletEntranceParams;
- (void).cxx_destruct;
- (void)setup;
- (id)buttonView;

@end
