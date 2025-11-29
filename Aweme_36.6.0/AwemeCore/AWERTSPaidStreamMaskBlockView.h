@interface AWERTSPaidStreamMaskBlockView : AWEPaidStreamBaseBlockView {
    void /* unknown type, empty encoding */ paymentPreviewBlockViewModel;
    void /* unknown type, empty encoding */ viewBuilder;
    void /* unknown type, empty encoding */ paymentPreviewBlock;
}

- (id)initWithUIconfig:(id)a0;
- (void)install:(unsigned long long)a0 uiConfig:(id)a1 paymentButtonView:(id)a2 actionHandler:(id /* block */)a3;
- (void)uninstall;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
