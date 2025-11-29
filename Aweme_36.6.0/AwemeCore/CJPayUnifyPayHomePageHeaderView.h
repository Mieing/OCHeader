@class CJPayDyPayHPVoucherTagContainerView, CJScrollAmountView, MASConstraint, UILabel, CJPayLabel, CJPayStandardAmountView;

@interface CJPayUnifyPayHomePageHeaderView : UIView

@property (retain, nonatomic) CJPayLabel *titleLabel;
@property (retain, nonatomic) CJScrollAmountView *oldScrollAmountLabel;
@property (retain, nonatomic) CJPayStandardAmountView *scrollAmountLabel;
@property (retain, nonatomic) UILabel *originAmountLabel;
@property (retain, nonatomic) CJPayDyPayHPVoucherTagContainerView *voucherTagContainerView;
@property (retain, nonatomic) MASConstraint *amountViewBottomSelfConstraint;
@property (retain, nonatomic) MASConstraint *voucherViewBottomSelfConstraint;
@property (retain, nonatomic) MASConstraint *voucherViewHeightConstraint;
@property (retain, nonatomic) MASConstraint *voucherTagContainerViewTopConstraint;
@property (retain, nonatomic) MASConstraint *scrollAmountLabelTopConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelTopConstraint;
@property (nonatomic) unsigned long long style;

- (void)updateWithShowConfig:(id)a0;
- (void)p_updateOriginAmountWith:(id)a0;
- (BOOL)p_isHitWakUpTimeOpt;
- (void)p_isValidAmount:(id)a0 CJExceptionName:(id)a1;
- (void)p_updateConstraintWithStandardVoucherMsgList:(id)a0 amountStr:(id)a1 crossPriceStr:(id)a2;
- (void)p_updateWithShowConfig:(id)a0 withVoucherType:(id)a1;
- (void)p_updateAmountLabelWithAmountStr:(id)a0;
- (void)updateFromOptionTypeListWithShowConfig:(id)a0;
- (void)updateWithShowConfig:(id)a0 withVoucherType:(id)a1;
- (void)setTitleLabelHiddenStatus:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
