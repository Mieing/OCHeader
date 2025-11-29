@interface AWECommentSwiftBasic.CommentTouchGesture : UILongPressGestureRecognizer <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ touchBegin;
    void /* unknown type, empty encoding */ targetView;
    void /* unknown type, empty encoding */ hitTestEdgeInsets;
    void /* unknown type, empty encoding */ touchHotAreaFrame;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
