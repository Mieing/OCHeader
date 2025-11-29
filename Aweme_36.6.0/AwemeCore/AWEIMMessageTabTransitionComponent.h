@class NSString;

@interface AWEIMMessageTabTransitionComponent : AWEIMComponentBase <AWEIMMessageTabRootViewControllerProtocol>

@property (nonatomic) unsigned long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (unsigned long long)messageTabTransition_destinatedType;
- (id)messageTabTransition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)messageTabTransition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)messageTabTransition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void)messageTabTransition_didPopDoneTransitionWithContext:(id)a0;
- (void)messageTabTransition_didCancelPercentDrivenTransitionWithContext:(id)a0;

@end
