@class UIViewController, NSString, AFDMomentComponentManager, NSDictionary, AWESimpleContainer, AFDCloseFriendsMomentContext;
@protocol AFDMomentDetailCameraInterface, AFDMomentDetailCameraTransitionInterface, UINavigationControllerDelegate, AFDMomentDetailFeedInterface;

@interface AFDMomentDetailViewController : UINavigationController <UINavigationControllerDelegate, AFDMomentDetailComponentContainer, AWEZoomTransitionInnerContextProvider, AWERouterViewControllerProtocol, AFDCloseFriendsMomentViewControllerProtocol, AFDMomentDetailViewControllerProtocol>

@property (retain, nonatomic) AFDCloseFriendsMomentContext *context;
@property (retain, nonatomic) AWESimpleContainer *serviceContainer;
@property (retain, nonatomic) AFDMomentComponentManager *componentManager;
@property (nonatomic) BOOL isInTransition;
@property (weak, nonatomic) id<UINavigationControllerDelegate> originDelegate;
@property (retain, nonatomic) id<AFDMomentDetailCameraInterface> cameraComponent;
@property (retain, nonatomic) id<AFDMomentDetailCameraTransitionInterface> cameraTransitionComponent;
@property (retain, nonatomic) id<AFDMomentDetailFeedInterface> feedComponent;
@property (retain, nonatomic) UIViewController *directlyPresentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (retain, nonatomic) UIViewController *destinationViewController;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)zoomTransitionShouldAnimateWithTransform;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (long long)zoomTransitionItemOffset;
- (id)transition_popDestinationController;
- (id)currentDisplayingAweme;
- (id)fromProfileID;
- (void)setViewHasLoadedCallback:(id /* block */)a0;
- (void)syncFeedDirectlyPresentingVC;
- (void)exitFeedDetailViewController;
- (void)popToCameraAnimated:(BOOL)a0;
- (void)injectDependency;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (id)popViewControllerAnimated:(BOOL)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)resolveComponents;

@end
