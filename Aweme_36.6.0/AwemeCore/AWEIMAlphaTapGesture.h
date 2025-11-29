@interface AWEIMAlphaTapGesture : UIGestureRecognizer {
    struct CGPoint { double x; double y; } _touchBeginPos;
}

- (void)p_executeReverseAnimation;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
