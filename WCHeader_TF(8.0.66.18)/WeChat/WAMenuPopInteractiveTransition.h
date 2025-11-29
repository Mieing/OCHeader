@class NSString, UIPercentDrivenInteractiveTransition, UIGestureRecognizer;
@protocol WAPopInteractiveTransitionDelegate;

@interface WAMenuPopInteractiveTransition : NSObject <UIGestureRecognizerDelegate> {
    UIPercentDrivenInteractiveTransition *_interactivePopTransition;
}

@property (weak, nonatomic) id<WAPopInteractiveTransitionDelegate> delegate;
@property (nonatomic) BOOL shouldForceCancel;
@property (nonatomic) BOOL isLeftEdge;
@property (retain, nonatomic) NSString *debugInfo;
@property (weak, nonatomic) UIGestureRecognizer *gesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interactivePopTransition;
- (BOOL)isInteracting;
- (void)handlePopBackInteractivePopGesture:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
