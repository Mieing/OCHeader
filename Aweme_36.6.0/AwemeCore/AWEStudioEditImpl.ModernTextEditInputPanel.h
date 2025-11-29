@interface AWEStudioEditImpl.ModernTextEditInputPanel : UIView <ACCTextStickerInputControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ lastTransform;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputConfigs;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topView;
    void /* unknown type, empty encoding */ currentInputView;
    void /* unknown type, empty encoding */ accessoryView;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ lastSuperView;
    void /* unknown type, empty encoding */ keyboardHeight;
    void /* unknown type, empty encoding */ defaultPointY;
    void /* unknown type, empty encoding */ keyboardBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_socialToolbar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputController;
}

- (void)textStickerInputController:(id)a0 didUpdateSearchStatus:(BOOL)a1 Keyword:(id)a2 searchType:(unsigned long long)a3;
- (void)textStickerInputController:(id)a0 onExtraInfoDidChanged:(id)a1;
- (void)textStickerInputController:(id)a0 textView:(id)a1 onReplaceText:(id)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
