@class NSString;

@interface AWEIMConversationTransationComponent : AWEIMComponentBase <AWEIMConversationTransationProtocol>

@property (nonatomic) unsigned long long slideDirection;
@property (nonatomic) BOOL shouldTrackEnterUserProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (unsigned long long)conversation_transition_destinatedType;
- (id)conversation_transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)conversation_transition_didStartTransitionWithContext:(id)a0;
- (void)conversation_transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (void)conversation_transition_didPopDoneTransitionWithContext:(id)a0;
- (void)conversation_viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)conversation_transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;

@end
