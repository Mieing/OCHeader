@class MASConstraint, CJPayAmountTextFieldContainer, NSString, UILabel, CJPayStyleErrorLabel, UIView;

@interface CJPayRechargeInputAmountView : UIView <CJPayAmountTextFieldContainerDelegate>

@property (retain, nonatomic) CJPayAmountTextFieldContainer *amountField;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayStyleErrorLabel *limitLabel;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIView *keyboardContainerView;
@property (nonatomic) BOOL textfieldEnable;
@property (retain, nonatomic) MASConstraint *bottomBaseLimitLabelConstraint;
@property (retain, nonatomic) MASConstraint *bottomBaseAmountFieldConstraint;
@property (copy, nonatomic) id /* block */ amountDidChangeBlock;
@property (copy, nonatomic) id /* block */ errorDidShowBlock;
@property (copy, nonatomic) id /* block */ rechargeTextFieldTapGestureClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_adapterTheme;
- (void)textFieldTapGestureClick;
- (void)textFieldContentChange:(id)a0 textContainer:(id)a1;
- (id)getAmountValue;
- (void)showLimitLabel:(BOOL)a0;
- (long long)integerAmount;
- (void)containerKeyBoardClick;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)didMoveToWindow;
- (void)setEnabled:(BOOL)a0;
- (void)setupView;

@end
