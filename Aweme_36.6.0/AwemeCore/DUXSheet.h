@class UINavigationController, DUXPresentationContextViewController, DUXSheetAnimationModel, NSString, UIView;
@protocol DUXSheetDelegate;

@interface DUXSheet : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, DUXSheetPresentationModelProtocol>

@property (retain, nonatomic) UINavigationController *contentNavigationController;
@property (retain, nonatomic) DUXPresentationContextViewController *presentationContextViewController;
@property (retain, nonatomic) UIView *dismissView;
@property (nonatomic) BOOL hasMask;
@property (nonatomic) BOOL hasCloseButton;
@property (weak, nonatomic) id<DUXSheetDelegate> delegate;
@property (retain, nonatomic) DUXSheetAnimationModel *presentAnimationModel;
@property (retain, nonatomic) DUXSheetAnimationModel *dismissAnimationModel;
@property (nonatomic) BOOL adjustPresentingViewControllerWhenDismissed;
@property (nonatomic) BOOL useSystemNavigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)duxSheet_clickMask;
- (BOOL)duxSheet_shouldRenderMask;
- (id)duxSheet_dismingView;
- (void)duxSheet_Dismiss;
- (BOOL)duxSheet_shouldPresentInFullscreen;
- (void)duxSheet_didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withUserInteraction:(BOOL)a1;
- (void)dismiss:(id /* block */)a0 withAnimated:(BOOL)a1;
- (void)clickCloseButton;
- (void)addCloseButtonToViewController:(id)a0;
- (void)showOnViewController:(id)a0 completion:(id /* block */)a1;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)navigationController;
- (id)initWithCoder:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismiss:(id /* block */)a0;
- (void)showOnViewController:(id)a0;

@end
