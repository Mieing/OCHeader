@class UIPercentDrivenInteractiveTransition, NSString, UIPanGestureRecognizer;
@protocol MMFinderLiveEnterSqaurePanGestureHandlerDelegate;

@interface MMFinderLiveEnterSqaurePanGestureHandler : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<MMFinderLiveEnterSqaurePanGestureHandlerDelegate> delegate;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition;
@property (nonatomic) BOOL isInteracting;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesutre;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL forbidTransition;
@property (nonatomic) struct CGPoint { double x; double y; } gestureStartPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setup;
- (void)onHandleGesture:(id)a0;
- (void)setupGestureHandlerTarget:(id)a0;
- (void)startGestureRecognizer;
- (void)updateGestureRecognizer:(double)a0;
- (void)finishGestureRecognizer:(double)a0 completeProgress:(double)a1;
- (void)finishGestureRecognizer:(double)a0;
- (double)progressFromCurGesturer:(id)a0;
- (double)progressFromPanGesture:(id)a0 startY:(double)a1;
- (void)animationEnd:(BOOL)a0;
- (void).cxx_destruct;

@end
