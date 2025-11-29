@interface AWECommentSwiftBizUI.CommentInteractionBaseLabel : UILabel <NSObject> {
    void /* unknown type, empty encoding */ tapGesDelegate;
    void /* unknown type, empty encoding */ workAction;
    void /* unknown type, empty encoding */ actionBlock;
    void /* unknown type, empty encoding */ tapGesture;
    void /* unknown type, empty encoding */ preventRepeatTap;
}

- (id)initWithFontSize:(double)a0 isBold:(BOOL)a1 textColor:(id)a2 text:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
