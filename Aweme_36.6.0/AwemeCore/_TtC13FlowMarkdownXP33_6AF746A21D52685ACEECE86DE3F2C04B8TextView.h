@interface _TtC13FlowMarkdownXP33_6AF746A21D52685ACEECE86DE3F2C04B8TextView : UITextView {
    void /* unknown type, empty encoding */ isCustomSelect;
    void /* unknown type, empty encoding */ isDoubleClickAction;
    void /* unknown type, empty encoding */ copyAction;
    void /* unknown type, empty encoding */ shouldShowCustomMenu;
    void /* unknown type, empty encoding */ markdownService;
    void /* unknown type, empty encoding */ prohibitSelectedTextRange;
}

@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;

- (void)copy:(id)a0;
- (void).cxx_destruct;
- (void)select:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)selectAll:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
