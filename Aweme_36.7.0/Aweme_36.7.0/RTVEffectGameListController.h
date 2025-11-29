@class RTVVoipToastHandler, NSString;
@protocol RTVEffectGameListViewController, RTVXRInteractionController, RTVInteractionConfigureManagerInterface, RTVXRControllerInjector, RTVEffectGameListControllerDelegate;

@interface RTVEffectGameListController : NSObject <RTVEffectGameListController, RTVEffectGameListViewControllerDelegate>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRInteractionController> interactionController;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, nonatomic) id<RTVEffectGameListViewController> effectGameListViewController;
@property (readonly, nonatomic) RTVVoipToastHandler *toastHandler;
@property (weak, nonatomic) id<RTVEffectGameListControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)setupListControllerStyle:(long long)a0;
- (void)__showToastWithText:(id)a0;
- (void)effectGameListViewController:(id)a0 didSelectGame:(id)a1;
- (id)dismiss;
- (void).cxx_destruct;
- (id)listController;
- (id)showOnViewController:(id)a0;

@end
