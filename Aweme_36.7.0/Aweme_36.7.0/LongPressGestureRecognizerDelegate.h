@interface LongPressGestureRecognizerDelegate : CustomGestureRecognizerDelegate

@property (nonatomic) BOOL disableLongpressAfterScroll;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)initWithEventHandler:(id)a0;

@end
