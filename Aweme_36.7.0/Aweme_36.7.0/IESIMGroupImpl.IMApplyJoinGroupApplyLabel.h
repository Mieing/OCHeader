@interface IESIMGroupImpl.IMApplyJoinGroupApplyLabel : UILabel {
    void /* unknown type, empty encoding */ bindingStore;
}

- (id)initWithFontSize:(double)a0 isBold:(BOOL)a1 textColor:(id)a2 text:(id)a3;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 limitedToNumberOfLines:(long long)a1;

@end
