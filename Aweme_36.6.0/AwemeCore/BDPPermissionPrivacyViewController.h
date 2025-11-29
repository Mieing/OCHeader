@class NSString, UIView, BDPPrivacyRegulationAlertView, UIViewController;

@interface BDPPermissionPrivacyViewController : UIViewController <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, BDPPrivacyRegulationAlertViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIViewController *alertViewController;
@property (retain, nonatomic) BDPPrivacyRegulationAlertView *privacyView;
@property (nonatomic) BOOL shouldUseUnionPrivacy;
@property (copy, nonatomic) id /* block */ privacyAnimationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showViewControllerCompletion:(id /* block */)a0;
- (void)privacyOnclickClose:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewDidLoad;
- (id)initWithContentView:(id)a0;

@end
