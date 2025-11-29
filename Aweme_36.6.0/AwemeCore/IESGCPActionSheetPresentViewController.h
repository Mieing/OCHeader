@class NSString, IESGCPActionSheetPresentAnimator;

@interface IESGCPActionSheetPresentViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) IESGCPActionSheetPresentAnimator *animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0 viewSize:(struct CGSize { double x0; double x1; })a1 backgroundView:(id)a2 landscape:(BOOL)a3;
- (id)transitioningDelegate;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)modalPresentationStyle;
- (BOOL)shouldAutorotate;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewDidLoad;

@end
