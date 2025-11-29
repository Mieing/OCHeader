@class NSTimer;

@interface SLIActiveStyleGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double minimumPressDuration;

- (id)initWithTarget:(id)a0 action:(SEL)a1 element:(id)a2;
- (void)timerFired:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
