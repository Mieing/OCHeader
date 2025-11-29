@interface MMLivePanGestureRecognizer : UIPanGestureRecognizer

@property (copy, nonatomic) id /* block */ touchCallback;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void).cxx_destruct;

@end
