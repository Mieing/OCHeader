@interface MMFinderLiveExitSqaurePanGestureHandler : MMFinderLiveEnterSqaurePanGestureHandler

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRecognizerViewFrame;

- (id)init;
- (void)onHandleGesture:(id)a0;
- (void)setupGestureHandlerTarget:(id)a0;
- (void)startGestureRecognizer;
- (void)updateGestureRecognizer:(double)a0;
- (void)finishGestureRecognizer:(double)a0;
- (double)progressFromCurGesturer:(id)a0;

@end
