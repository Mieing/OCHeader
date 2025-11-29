@class NSString;
@protocol RTVInteractionFunctionContentDelegate, RTVXRInteractionController, RxInjector, RTVXRControllerInjector, RTVInteractionController, RTVEffectGameListController;

@interface AWERTVEffectGameCastContainerViewController : UIViewController <RTVEffectGameListControllerDelegate, RTVInteractionControllerObserver, RTVInteractionFunctionContentProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRInteractionController> xrinteractionController;
@property (readonly, weak, nonatomic) id<RTVInteractionController> interactionController;
@property (readonly, nonatomic) id<RTVEffectGameListController> gameListController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVInteractionFunctionContentDelegate> delegate;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)__addGameListVC;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (void)effectGameListController:(id)a0 selectGame:(id)a1;
- (void)renderViewModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
