@class NSString, UITextView, UILabel;

@interface WCBaseTextViewItem : WCBaseInfoItem <UITextViewDelegate> {
    UITextView *m_textView;
    UILabel *placeHolderLabel;
    int m_iMaxInputLen;
    BOOL m_bRealLen;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTextView:(id)a0 andPlaceHolder:(id)a1;
- (id)getValue;
- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)dealloc;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)getTextView;
- (void)setText:(id)a0;
- (void)setFont:(id)a0;
- (void)setColor:(id)a0;
- (void)setPlaceHolderColor:(id)a0;
- (void)setMaxInputLen:(int)a0;
- (void)setMaxRealStringLen:(int)a0;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (void).cxx_destruct;

@end
