@class UINavigationController, NSString, UIScrollView, UIPanGestureRecognizer, UIViewController;
@protocol HTSLivePopupViewControllerProtocol;

@interface HTSLivePopupTransition : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>

@property (weak, nonatomic) UIViewController<HTSLivePopupViewControllerProtocol> *viewController;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) UIPanGestureRecognizer *hideGesture;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideGestureActions:(id)a0;
- (void)addHideGestureForViewController:(id)a0;
- (void)showBackAfterPan;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;

@end
