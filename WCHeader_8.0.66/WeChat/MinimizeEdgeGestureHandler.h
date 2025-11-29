@class UIPercentDrivenInteractiveTransition;
@protocol MinimizeEdgeGestureHandlerDelegate;

@interface MinimizeEdgeGestureHandler : NSObject

@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition;
@property (nonatomic) struct CGPoint { double x; double y; } gestureStartPoint;
@property (weak, nonatomic) id<MinimizeEdgeGestureHandlerDelegate> delegate;
@property (nonatomic) BOOL shouldForceCancel;
@property (nonatomic) double completionSpeed;

- (void)dealloc;
- (BOOL)isInteracting;
- (void)handleMinimizationEdgeGesture:(id)a0;
- (void).cxx_destruct;

@end
