@interface AWEIMPresentTransitionNavigationController : AWEBaseRootNavigationController <AWEIMLeftToRightPresentOuterContextProvider, AWEIMRightToLeftDismissNonInteractedOuterContextProvider>

@property (nonatomic) unsigned long long slideDirection;

- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (unsigned long long)transition_destinatedType;
- (id)nonInteractedPresentTransitionAnimationDuration;
- (unsigned long long)nonInteractedPresentTransitionAnimationOptions;
- (BOOL)shouldRelyOnToVCViewSuperView;
- (id)nonInteractedDismissTransitionAnimationDuration;
- (unsigned long long)nonInteractedDismissTransitionAnimationOptions;

@end
