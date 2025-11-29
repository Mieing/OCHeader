@class UIStackView, NSString, UIView, UIButton;

@interface AWEPayNumberKeyboard : UIView

@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *delButton;
@property (retain, nonatomic) UIButton *dotButton;
@property (retain, nonatomic) UIStackView *zeroAndDotStackView;
@property (retain, nonatomic) UIStackView *containerView;
@property (retain, nonatomic) UIView *assistView;
@property (nonatomic) unsigned long long keyBoardType;
@property (copy, nonatomic) id /* block */ inputStrBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *confirmBtnTitle;
@property (nonatomic) BOOL confirmBtnEnable;

- (void)showAssistView;
- (id)p_createStackView:(long long)a0;
- (id)p_buildButtonWithTitle:(id)a0 andTag:(long long)a1;
- (void)p_buttonClicked:(id)a0;
- (void)p_shakeFeedback;
- (void)p_didCompleteInput;
- (void)p_didDeleteLast;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
