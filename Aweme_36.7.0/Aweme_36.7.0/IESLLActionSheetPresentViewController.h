@class UIColor, IESLLActionSheet, NSString, UIViewController;

@interface IESLLActionSheetPresentViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIViewController *subViewController;
@property (retain, nonatomic) UIViewController *fromViewController;
@property (nonatomic) BOOL isInteracting;
@property (nonatomic) struct CGPoint { double x; double y; } startingPoint;
@property (retain, nonatomic) IESLLActionSheet *actionSheet;
@property (retain, nonatomic) UIColor *maskViewColor;
@property (nonatomic) unsigned long long sheetAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldBypassPresentationHook;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (id)initWithViewController:(id)a0 actionSheet:(id)a1;

@end
