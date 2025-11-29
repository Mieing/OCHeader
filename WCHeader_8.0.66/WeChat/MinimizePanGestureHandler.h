@class UIPercentDrivenInteractiveTransition;
@protocol MinimizePanGestureHandlerDelegate;

@interface MinimizePanGestureHandler : NSObject

@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition;
@property (nonatomic) struct CGPoint { double x; double y; } gestureStartPoint;
@property (nonatomic) unsigned long long direction;
@property (weak, nonatomic) id<MinimizePanGestureHandlerDelegate> delegate;
@property (nonatomic) BOOL shouldForceCancel;
@property (nonatomic) double completionSpeed;

- (void)dealloc;
- (BOOL)isInteracting;
- (void)handleMinimizationPanGesture:(id)a0;
- (double)progressWithTranslation:(struct CGPoint { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1 panDirection:(unsigned long long)a2;
- (void).cxx_destruct;

@end
