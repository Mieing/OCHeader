@protocol MMLiveGestureRecognizerDelegate;

@interface MMLiveLongPressRecognizer : UILongPressGestureRecognizer

@property (weak, nonatomic) id<MMLiveGestureRecognizerDelegate> liveGestureDelegate;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
