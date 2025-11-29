@class UITextView, NSString, UIColor, UILabel, UIView;

@interface LSIMTextArea : UIView <UITextViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UILabel *lengthLabel;
@property (nonatomic) BOOL showPlaceholder;
@property (nonatomic) long long currentNumberOfLines;
@property (nonatomic) BOOL isEditing;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIColor *placeHolderTextColor;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL showMaxLength;
@property (nonatomic) long long maxLength;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardReturnKeyType;
@property (nonatomic) BOOL prohibitCutOrCopyAction;
@property (nonatomic) long long maxNumberOfLines;
@property (nonatomic) long long minNumberOfLines;
@property (copy, nonatomic) id /* block */ shouldBeginInput;
@property (copy, nonatomic) id /* block */ didBeginInput;
@property (copy, nonatomic) id /* block */ didChangeText;
@property (copy, nonatomic) id /* block */ didCompletedInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLengthLabelText;
- (void)updateTextViewContainerInset;
- (unsigned long long)getTrueTextLength;
- (void)showPlaceholderIfNeeded;
- (id)textViewPrimaryColor;
- (void)adjustTextViewHeight;
- (void)adjustMaxNumberOfLines;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)endEditing:(BOOL)a0;
- (void)textViewDidBeginEditing:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
