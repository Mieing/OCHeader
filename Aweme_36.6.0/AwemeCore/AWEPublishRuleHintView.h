@class UITextView, ACCAnimatedButton, NSString, UILabel, UIView, ACCGradientView;

@interface AWEPublishRuleHintView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *messageTextView;
@property (retain, nonatomic) ACCGradientView *topGradientView;
@property (retain, nonatomic) ACCGradientView *bottomGradientView;
@property (retain, nonatomic) ACCAnimatedButton *confirmButton;
@property (retain, nonatomic) UIView *horizontalLine;
@property (copy, nonatomic) NSString *messageText;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showAlertWithTitle:(id)a0 messageText:(id)a1 confirmButtonTitle:(id)a2 confirmBlock:(id /* block */)a3;

- (void)didClickConfirmButton:(id)a0;
- (void)p_dismiss;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTitle:(id)a1 messageText:(id)a2 confirmButtonTitle:(id)a3 confirmBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)show;
- (void)setupUI;

@end
