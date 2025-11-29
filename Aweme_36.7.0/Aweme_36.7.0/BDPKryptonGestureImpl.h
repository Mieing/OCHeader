@interface BDPKryptonGestureImpl : UIGestureRecognizer

@property (copy, nonatomic) id /* block */ dispatchBlock;

- (id)init:(id /* block */)a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
