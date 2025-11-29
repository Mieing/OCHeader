@class NSString, ACCTextContentInputTextView, UILabel, UIView, UIButton;
@protocol ACCTextContentInputContainerViewDelegate;

@interface ACCTextContentInputContainerView : UIView <UITextViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *textInputBackgroundView;
@property (retain, nonatomic) UILabel *placeholder;
@property (retain, nonatomic) UIButton *confirm;
@property (weak, nonatomic) id<ACCTextContentInputContainerViewDelegate> delegate;
@property (retain, nonatomic) ACCTextContentInputTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmBtnClick:(id)a0;
- (void)addTextInputTapGesture;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRangeInTextView:(id)a0;
- (double)calculateTextBgHeight:(id)a0;
- (void)textViewDidChangeProgrammatically;
- (double)textContentInputViewHeight;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)attributes;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;
- (void)handleTapGesture:(id)a0;
- (void)addObservers;

@end
