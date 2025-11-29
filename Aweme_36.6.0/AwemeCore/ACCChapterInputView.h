@class UITextView, NSString, UILabel, UIButton;
@protocol ACCChapterInputViewDelegate;

@interface ACCChapterInputView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UILabel *countLabel;
@property (weak, nonatomic) id<ACCChapterInputViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ resignFirstResponderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isHalfAlphabet:(id)a0;
- (double)textInputCount:(id)a0;
- (void)trimTextView:(id)a0 toMaxCount:(long long)a1;
- (BOOL)isEmptyOrBlankContnet:(id)a0;
- (void)countLabelTextInit;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setText:(id)a0;
- (void)setTextLength:(double)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancel;
- (void)setAttributedPlaceholder:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)confirm;
- (void)keyboardWillChangeFrame:(id)a0;

@end
