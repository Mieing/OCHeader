@interface FlowInstructionComponent.TranslatorCell : FlowInstructionComponent.FlowInstructionBaseCell {
    void /* unknown type, empty encoding */ cellModel;
    void /* unknown type, empty encoding */ sourceBoxView;
    void /* unknown type, empty encoding */ targetBoxView;
    void /* unknown type, empty encoding */ icon;
    void /* unknown type, empty encoding */ scrollView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
