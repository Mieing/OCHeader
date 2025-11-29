@class UIPanGestureRecognizer, NSString, UIPercentDrivenInteractiveTransition, UIViewController;
@protocol MiniTaskPanGestureHandlerDelegate;

@interface MiniTaskPanGestureHandler : NSObject <UIGestureRecognizerDelegate>

@property (nonatomic) unsigned int panGestureType;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (weak, nonatomic) id<MiniTaskPanGestureHandlerDelegate> delegate;
@property (weak, nonatomic) UIViewController *toVC;
@property (nonatomic) double resistanceParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPanGestureType:(unsigned int)a0;
- (void)internalInit;
- (BOOL)isInteracting;
- (void)handlePanGesture:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (double)progressFromPanGesture:(id)a0;
- (BOOL)isSweepFastInVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
