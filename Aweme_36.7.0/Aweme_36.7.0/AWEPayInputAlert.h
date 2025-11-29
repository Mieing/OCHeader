@class UITextView, NSString, UILabel, UIView, UIButton;

@interface AWEPayInputAlert : UIView <UITextViewDelegate>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) unsigned long long maxCount;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIView *textViewContainer;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIView *alertContainer;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (copy, nonatomic) id /* block */ limitTipDidShow;
@property (nonatomic) BOOL emptyComfirmEnable;
@property (nonatomic) BOOL forbidDismissByClickMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithTitle:(id)a0 placeholder:(id)a1 maxCount:(unsigned long long)a2 confirmBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;

- (void)didClickCancel;
- (void)didClickMask;
- (id)initWithTitle:(id)a0 placeholder:(id)a1 maxCount:(unsigned long long)a2 confirmBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)setConfirmBtnEnable:(BOOL)a0;
- (void)showCountTips:(unsigned long long)a0;
- (void)didClickConfirm;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)setText:(id)a0;
- (void)hide;
- (void)show;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;

@end
