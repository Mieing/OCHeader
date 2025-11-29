@interface AWESearchQuickDoubleTapGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) BOOL firstTapped;
@property (nonatomic) double minimumIntervalBetweenClick;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
