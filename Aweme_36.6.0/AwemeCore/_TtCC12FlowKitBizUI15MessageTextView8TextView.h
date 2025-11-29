@interface _TtCC12FlowKitBizUI15MessageTextView8TextView : UITextView {
    void /* unknown type, empty encoding */ isDoubleClickAction;
    void /* unknown type, empty encoding */ shouldBecomeFirstResponder;
    void /* unknown type, empty encoding */ copyAction;
    void /* unknown type, empty encoding */ shouldShowCustomMenu;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)copy:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)selectAll:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
