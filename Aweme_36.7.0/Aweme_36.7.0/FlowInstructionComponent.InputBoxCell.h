@interface FlowInstructionComponent.InputBoxCell : FlowInstructionComponent.FlowInstructionBaseCell <UITextViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_textView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_placeholderView;
    void /* unknown type, empty encoding */ cellModel;
}

- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
