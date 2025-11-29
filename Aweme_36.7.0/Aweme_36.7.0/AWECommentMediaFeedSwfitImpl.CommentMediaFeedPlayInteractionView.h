@interface AWECommentMediaFeedSwfitImpl.CommentMediaFeedPlayInteractionView : UIView {
    void /* unknown type, empty encoding */ actionBlock;
    void /* unknown type, empty encoding */ needTouchAnimation;
    void /* unknown type, empty encoding */ preventRepeatTap;
    void /* unknown type, empty encoding */ labelWidthConstraint;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ iconView;
    void /* unknown type, empty encoding */ titleLabel;
}

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)recoverInteraction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
