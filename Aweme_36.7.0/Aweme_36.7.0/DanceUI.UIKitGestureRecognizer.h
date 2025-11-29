@interface DanceUI.UIKitGestureRecognizer : UIGestureRecognizer {
    void /* unknown type, empty encoding */ eventBridge;
    void /* unknown type, empty encoding */ hoverSeed;
    void /* unknown type, empty encoding */ transformSeed;
    void /* unknown type, empty encoding */ initialScale;
    void /* unknown type, empty encoding */ initialAngle;
}

- (void)danceui_transformChangedWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)init;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
