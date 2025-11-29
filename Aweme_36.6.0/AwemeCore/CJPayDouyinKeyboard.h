@class UIStackView, UIView, NSMutableArray, UIButton;

@interface CJPayDouyinKeyboard : UIView

@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *delButton;
@property (retain, nonatomic) UIButton *dotButton;
@property (retain, nonatomic) UIStackView *zeroAndDotStackView;
@property (retain, nonatomic) NSMutableArray *buttonArr;
@property (nonatomic) unsigned long long keyBoardType;
@property (copy, nonatomic) id /* block */ inputStrBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL disableConfirmAccessibility;
@property (retain, nonatomic) UIView *assistView;

- (void)showAssistView;
- (id)p_createStackView:(long long)a0;
- (id)p_buildButtonWithTitle:(id)a0 andTag:(long long)a1;
- (void)p_buttonClicked:(id)a0;
- (void)p_shakeFeedback;
- (void)p_didDeleteLast;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
