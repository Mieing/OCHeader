@interface FlowKitBizUI.InfoLabel : UILabel {
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapGestureRecognizer;
    void /* unknown type, empty encoding */ numberOfVisibleLines;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ shortText;
    void /* unknown type, empty encoding */ fullText;
    void /* unknown type, empty encoding */ expanded;
    void /* unknown type, empty encoding */ config;
}

- (void)configureLayout;
- (void)labelDidTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
