@class UIPercentDrivenInteractiveTransition;
@protocol MPCustomInteractiveHandlerDelegate;

@interface MPCustomInteractiveHandler : NSObject

@property (weak, nonatomic) id<MPCustomInteractiveHandlerDelegate> delegate;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *transitioning;
@property (nonatomic) BOOL shouldForceCancel;

- (id)initWithDelegate:(id)a0;
- (id)interactiveTransitioning;
- (double)interactiveTransitioningProgress;
- (BOOL)isInteracting;
- (void)beginInateractive;
- (void)updateInateractiveProgress:(double)a0 panGesture:(id)a1;
- (void)endInateractiveWithComplete:(BOOL)a0 panGesture:(id)a1;
- (void).cxx_destruct;

@end
