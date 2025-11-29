@class NSArray, AWEPlayInteractionContext, NSString, AWEPlayInteractionBottomButtonComponentProxy, UIViewController;
@protocol AWEPlayInteractionBottomButtonCoordinatorDelegate, AWEPlayInteractionViewControllerProtocol;

@interface AWEPlayInteractionBottomButtonCoordinator : NSObject <AWEPlayInteractionBottomButtonComponentDelegateProtocol>

@property (retain, nonatomic) AWEPlayInteractionBottomButtonComponentProxy *componentProxy;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) NSArray *activateComponentArray;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonCoordinatorDelegate> coordinatorDelegate;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)componentClassForModel:(id)a0 context:(id)a1;

- (void)showBottomButtonWithTriggerType:(long long)a0;
- (void)hideBottomButton;
- (void)handleClickEventWithModel:(id)a0 clickBlock:(id /* block */)a1;
- (BOOL)shouldShowTemplateButtonRepeatedly;
- (void)showBottomButtonWithTriggerType:(long long)a0 animate:(id)a1;
- (BOOL)isBottomButtonElementAppear;
- (double)bottomButtonElementWidth;
- (void)configWithModel:(id)a0 context:(id)a1;
- (id)currentComponent;
- (id)feedTemplateBtnOfflineList;
- (BOOL)shouldShowTemplateButton;
- (void).cxx_destruct;
- (long long)priority;
- (void)reset;

@end
