@interface AWEAlphaTapGesture : UIGestureRecognizer {
    struct CGPoint { double x; double y; } _touchBeginPos;
    double targetAlpha;
}

- (void)p_executeReverseAnimation;
- (id)initWithTarget:(id)a0 alpha:(double)a1 selector:(SEL)a2;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
