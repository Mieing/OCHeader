@class UITextView, NSString, UIView, ACCAnimatedButton;

@interface ACCMVTextEditorInputView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) ACCAnimatedButton *confirmButton;
@property (nonatomic) struct CGSize { double width; double height; } lastContentSize;
@property (copy, nonatomic) NSString *initialContent;
@property (copy, nonatomic) id /* block */ textDidChangedBlock;
@property (copy, nonatomic) id /* block */ didEndEditBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_keyboardWillShow:(id)a0;
- (void)p_keyboardWillHide:(id)a0;
- (void)p_keyboardWillChangeFrame:(id)a0;
- (void)p_handleMaskViewTapped:(id)a0;
- (void)p_handleConfirmButtonClicked:(id)a0;
- (void)p_setupUI;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)resignActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)textViewDidChange:(id)a0;

@end
