@class NSTimer;

@interface AWEIMTimerTriggerGestureRecognizer : UIGestureRecognizer

@property (nonatomic) struct CGPoint { double x; double y; } touchBeginPos;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long sentinel;
@property (copy, nonatomic) id /* block */ tiggeredBlock;

- (void)p_stopTimer;
- (void)p_trigger;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
