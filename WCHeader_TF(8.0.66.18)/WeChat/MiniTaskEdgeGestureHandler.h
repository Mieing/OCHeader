@class NSString, UIScreenEdgePanGestureRecognizer, UIPercentDrivenInteractiveTransition, UIViewController;
@protocol MiniTaskEdgeGestureHandlerDelegate;

@interface MiniTaskEdgeGestureHandler : NSObject <UIGestureRecognizerDelegate, MiniTaskEdgeGestureHandlerInterface>

@property (nonatomic) unsigned int edgeGestureType;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition;
@property (nonatomic) BOOL hasTapic;
@property (nonatomic) struct CGPoint { double x; double y; } gestureStartPoint;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture;
@property (weak, nonatomic) id<MiniTaskEdgeGestureHandlerDelegate> delegate;
@property (weak, nonatomic) UIViewController *toVC;
@property (nonatomic) BOOL shouldAutoComplete;
@property (nonatomic) double resistanceParam;
@property (nonatomic) BOOL shouldEnableTapic;
@property (nonatomic) BOOL shouldSpeedEnterWhenSwapFast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEdgeGestureType:(unsigned int)a0;
- (void)initEdgeGestureWithEdgeGestureType:(unsigned int)a0;
- (BOOL)isInteracting;
- (id)screenEdgeGesture;
- (void)handlerScreenEdgeGesture:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (double)progressFromCurGesturer:(id)a0;
- (BOOL)isSweepFastInVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
