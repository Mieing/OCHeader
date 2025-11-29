@protocol MMCameraTouchEventViewDelegate;

@interface MMCameraTouchEventView : MMUIView

@property (weak, nonatomic) id<MMCameraTouchEventViewDelegate> delegate;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)makeAllGestureRecognizerNotCancelsTouches;
- (void).cxx_destruct;

@end
