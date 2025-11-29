@class UIButton;

@interface WCClearModeTextViewItem : WCBaseTextViewItem {
    UIButton *m_clearButton;
}

- (id)scaleImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)OnClear:(id)a0;
- (void)setClearButtonHidden:(BOOL)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void).cxx_destruct;

@end
