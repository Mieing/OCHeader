@class MiniTaskTransitionContext, NSString, UIScreenEdgePanGestureRecognizer, MiniTaskNavEdgeInteractiveTransition, UIViewController;
@protocol MiniTaskEdgeGestureHandlerDelegate;

@interface MiniTaskNavEdgeGestureHandler : NSObject <UIGestureRecognizerDelegate, MiniTaskNavEdgeInteractiveTransitionDelegate, MiniTaskEdgeGestureHandlerInterface>

@property (nonatomic) unsigned int edgeGestureType;
@property (retain, nonatomic) MiniTaskNavEdgeInteractiveTransition *interactiveTransition;
@property (nonatomic) struct CGPoint { double x; double y; } gestureStartPoint;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture;
@property (weak, nonatomic) id<MiniTaskEdgeGestureHandlerDelegate> delegate;
@property (weak, nonatomic) UIViewController *toVC;
@property (nonatomic) BOOL shouldAutoComplete;
@property (retain, nonatomic) MiniTaskTransitionContext *transitionContext;
@property (nonatomic) BOOL disableInteractiveAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEdgeGestureType:(unsigned int)a0;
- (void)initEdgeGestureWithEdgeGestureType:(unsigned int)a0;
- (BOOL)isInteracting;
- (id)screenEdgeGesture;
- (void)initInteractiveTransition;
- (void)handlerScreenEdgeGesture:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)onMiniTaskNavInteractiveTransitionDidFinish;
- (void)onMiniTaskNavInteractiveTransitionDidCancel;
- (double)progressFromCurGesturer:(id)a0;
- (BOOL)isSweepFastInVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
