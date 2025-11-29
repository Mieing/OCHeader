@class UIViewController;
@protocol RTVMonitor, RxInjector, RTVXRNavigationControllerDelegate;

@interface RTVXRNavigationController : UINavigationController

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVMonitor> monitor;
@property (weak) UIViewController *rtvFirstViewController;
@property (weak, nonatomic) id<RTVXRNavigationControllerDelegate> businessDelegate;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)rxAwakeFromPropertyInjection;
- (void)__monitorTransitionWithFromViewController:(id)a0 toViewController:(id)a1 type:(unsigned long long)a2;
- (void)setViewControllers:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)popViewControllerAnimated:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (id)firstViewController;

@end
