@interface IESIMGroupImpl.CreateOpenGroupInputItemCell : UICollectionViewCell <UITextViewDelegate, UITextFieldDelegate> {
    void /* unknown type, empty encoding */ cellModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_requiredMark;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputContainerView;
    void /* unknown type, empty encoding */ textField;
    void /* unknown type, empty encoding */ textArea;
    void /* unknown type, empty encoding */ textAreaPlaceHolder;
    void /* unknown type, empty encoding */ didBeginInputBlock;
    void /* unknown type, empty encoding */ didChangeTextBlock;
    void /* unknown type, empty encoding */ didCompletedInputBlock;
    void /* unknown type, empty encoding */ shouldReturnInputBlock;
}

- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)onThemeReloadWithNotification:(id)a0;
- (void)keyboardWillAppearWithNotification:(id)a0;
- (void)keyboardWillChangeFrameWithNotification:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textFieldDidTapClearButton:(id)a0;
- (void)textFieldDidChanged:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)textAreaChangeToFirst;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
