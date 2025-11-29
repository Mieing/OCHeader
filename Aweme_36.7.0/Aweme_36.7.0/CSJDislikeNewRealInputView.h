@class UITextView, UIColor, NSString, UILabel, UIView, UIButton;

@interface CSJDislikeNewRealInputView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *submitButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIColor *normalTextColor;
@property (retain, nonatomic) UIColor *normalButtonColor;
@property (retain, nonatomic) UIColor *disableButtonColor;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) long long maxInputLength;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ submitBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)disableEmoji:(id)a0;
- (void)cancelButtonTouchUpInside:(id)a0;
- (void)submitButtonTouchUpInside:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
