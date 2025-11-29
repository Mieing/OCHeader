@class NSArray, NSMutableDictionary;

@interface PanGestureRecognizerDelegate : CustomGestureRecognizerDelegate {
    NSMutableDictionary *_innerGestures;
}

@property (readonly, nonatomic) NSArray *gestures;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)initWithEventHandler:(id)a0;

@end
