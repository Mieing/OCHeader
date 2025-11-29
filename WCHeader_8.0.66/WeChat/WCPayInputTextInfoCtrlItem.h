@class TPIDKeyboardView;

@interface WCPayInputTextInfoCtrlItem : WCBaseTextFieldItem {
    TPIDKeyboardView *keyboardView;
}

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)dealloc;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)autoRemarkKeyBoradType;
- (void).cxx_destruct;

@end
