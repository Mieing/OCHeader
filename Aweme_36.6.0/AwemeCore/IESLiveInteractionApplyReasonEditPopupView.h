@class UITextView, NSString, UIView, UILabel, UIButton;

@interface IESLiveInteractionApplyReasonEditPopupView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIView *textBackView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIButton *confimBtn;
@property (retain, nonatomic) UIView *backContainerView;
@property (retain, nonatomic) UILabel *countLabel;
@property (copy, nonatomic) NSString *lastEditText;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) id /* block */ trackCallback;
@property (copy, nonatomic) id /* block */ didEditedReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmAction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andDIContext:(id)a1;
- (void)didViewShow;
- (void)changeButtonEnable:(BOOL)a0;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupView;

@end
