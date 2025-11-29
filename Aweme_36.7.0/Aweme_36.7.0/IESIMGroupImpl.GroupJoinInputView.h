@interface IESIMGroupImpl.GroupJoinInputView : UIView <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ textDidChange;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ keyboardShowNoti;
    void /* unknown type, empty encoding */ keyboardHideNoti;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tipLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_clearButton;
}

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldTextDidChange:(id)a0;
- (void)clickClearButton;
- (void)handleTextViewTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
