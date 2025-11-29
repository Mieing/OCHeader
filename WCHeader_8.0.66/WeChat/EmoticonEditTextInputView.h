@class UIView, NSString, MMTextView, EditImageColorBar, UIButton, MMUIButton, UIColor;
@protocol EmoticonEditTextInputDelegate;

@interface EmoticonEditTextInputView : MMUIView <UITextViewDelegate, EditImageColorBarDeleagate> {
    UIView *m_bgView;
    UIButton *m_cancelBtn;
    UIButton *m_confirmBtn;
    MMTextView *m_textView;
    MMUIButton *m_clearBtn;
    EditImageColorBar *m_colorBar;
    BOOL m_isFirstTyping;
    EmoticonEditTextInputView *m_tempTextInputView;
}

@property (weak, nonatomic) id<EmoticonEditTextInputDelegate> delegate;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *strokeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (id)text;
- (void)adjustTextViewFont:(id)a0;
- (void)adjustTextViewMaxWidth:(double)a0;
- (void)adjustClearButtonPosition;
- (void)configCancelButton;
- (void)configConfirmBtn;
- (void)configTextView;
- (void)configColorBar;
- (void)addBlurViewWithImage:(id)a0;
- (void)onCancel;
- (void)onConfirm;
- (void)onClearText;
- (void)didChangeText:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)onEditImageColorBarChangeSelectedColor:(id)a0;
- (void).cxx_destruct;

@end
