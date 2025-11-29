@class NSString, UIViewController, AWEPageSheetPresentationRootViewController;

@interface AWEPageSheetPresentationNavigationController : UINavigationController <UINavigationControllerDelegate>

@property (retain, nonatomic) AWEPageSheetPresentationRootViewController *defaultRootViewController;
@property (retain, nonatomic) UIViewController *pageSheetContainerViewController;
@property (copy, nonatomic) id /* block */ dismissalCompletion;
@property (retain, nonatomic) UIViewController *tmpPresentingViewController;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (copy, nonatomic) id /* block */ didDismiss;
@property (copy, nonatomic) id /* block */ configurationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissForAdLightLanding;
- (void)handlePageSheetPresentationControllerDismissalDidEndNotification:(id)a0;
- (void)notifyDismissal;
- (void)presentWithPresentingViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithContentViewController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
