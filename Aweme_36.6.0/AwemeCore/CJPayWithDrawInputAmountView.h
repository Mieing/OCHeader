@class UIView, NSString, CJPayAmountTextFieldContainer, CJPayUserInfo, MASConstraint, CJPayButton, UILabel, CJPayWithdrawTriangleView;

@interface CJPayWithDrawInputAmountView : UIView <CJPayAmountTextFieldContainerDelegate>

@property (retain, nonatomic) CJPayAmountTextFieldContainer *withDrawAmountField;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *limitLabel;
@property (retain, nonatomic) CJPayButton *totalWithDrawBtn;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *withdrawalFeeContainerView;
@property (retain, nonatomic) UILabel *withdrawalFeeText;
@property (retain, nonatomic) CJPayWithdrawTriangleView *pointerView;
@property (nonatomic) BOOL isShowLimitText;
@property (nonatomic) BOOL isShowWithdrawalFee;
@property (nonatomic) unsigned long long infoStartLocation;
@property (retain, nonatomic) MASConstraint *withdrawAllButtonLeftConstraint;
@property (retain, nonatomic) MASConstraint *withdrawAllButtonRightConstraint;
@property (retain, nonatomic) MASConstraint *selfBottomBaseTotalWithdrawBtnConstraint;
@property (retain, nonatomic) MASConstraint *selfBottomBaseFeeContainerConstraint;
@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (copy, nonatomic) id /* block */ amountDidChangeBlock;
@property (copy, nonatomic) id /* block */ amountWithdrawAllBlock;
@property (copy, nonatomic) id /* block */ withdrawTextFieldTapGestureClickBlock;
@property (copy, nonatomic) id /* block */ infoClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_adapterTheme;
- (void)textFieldTapGestureClick;
- (void)textFieldContentChange:(id)a0 textContainer:(id)a1;
- (id)getAmountValue;
- (void)showLimitLabel:(BOOL)a0;
- (unsigned long long)integerAmount;
- (void)containerKeyBoardClick;
- (void)renderBalanceWithUserInfo:(id)a0;
- (void)updateWithFeeQueryResponse:(id)a0;
- (void)totalWithDrawClick;
- (id)getLimitLabelText;
- (void)showTotalWithDrawBtn;
- (void)p_didClickInfo:(id)a0;
- (id)p_withdrawalFeeDescStringWithResponse:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupView;
- (void)p_updateFrame;

@end
