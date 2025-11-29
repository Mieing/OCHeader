@interface AWENoticeSwiftBizUI.PaddedLabel : UILabel {
    void /* unknown type, empty encoding */ textInsets;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFontSize:(double)a0 isBold:(BOOL)a1 textColor:(id)a2 text:(id)a3;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
