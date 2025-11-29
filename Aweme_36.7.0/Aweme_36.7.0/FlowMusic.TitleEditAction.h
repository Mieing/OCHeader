@interface FlowMusic.TitleEditAction : NSObject <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ sheetTitle;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ editTitleAlert;
    void /* unknown type, empty encoding */ _toastProvider;
}

- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
