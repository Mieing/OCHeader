@interface FlowKit.FlowCameraInputTextDelegateComponent : FlowKit.FlowCameraInputDelegateComponent <UITextViewDelegate> {
    void /* unknown type, empty encoding */ _toastProvider;
}

- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void).cxx_destruct;

@end
