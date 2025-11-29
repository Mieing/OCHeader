@class CJPayPayAgainOldCardCommonView, CJPayHintInfo, UILabel, CJPayButton, CJPayAccountInsuranceTipView, CJPayStyleButton, UIView, CJPayPayAgainNewCardCommonView, NSString, CJPayPayAgainCreditPayView, CJPayCombineDetailView, NSAttributedString, CJPayPayAgainDiscountView, UIImageView;

@interface CJPayPayAgainHalfView : UIView

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UIView *oldCardContentView;
@property (retain, nonatomic) CJPayPayAgainNewCardCommonView *newCardContentView;
@property (retain, nonatomic) CJPayPayAgainOldCardCommonView *oldCardView;
@property (retain, nonatomic) UILabel *addNewCardHintInfoLabel;
@property (retain, nonatomic) UILabel *oldCardBankTailLabel;
@property (retain, nonatomic) CJPayStyleButton *confirmPayBtn;
@property (retain, nonatomic) CJPayButton *otherPayMethodButton;
@property (retain, nonatomic) UIView *bgCardView;
@property (retain, nonatomic) UIView *voucherTipsView;
@property (retain, nonatomic) UILabel *voucherTipsLabel;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuideView;
@property (retain, nonatomic) UILabel *payTypeLabel;
@property (retain, nonatomic) CJPayPayAgainCreditPayView *creditPayView;
@property (retain, nonatomic) CJPayPayAgainDiscountView *discountView;
@property (copy, nonatomic) NSString *creditInstallment;
@property (retain, nonatomic) CJPayCombineDetailView *combineDetailView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *infoImgView;
@property (retain, nonatomic) CJPayHintInfo *hintInfo;
@property (copy, nonatomic) NSString *discountStr;
@property (copy, nonatomic) NSAttributedString *skipPwdTitle;
@property (nonatomic) unsigned long long showStyle;
@property (nonatomic) BOOL isSuperPay;

- (void)refreshNewHalfWithHintInfo:(id)a0;
- (void)refreshWithNewHalfV2HintInfo:(id)a0;
- (void)refreshWithDiscountNotAvilableHintInfo:(id)a0;
- (void)refreshWithNewHalfV3HintInfo:(id)a0;
- (void)refreshWithHintInfo:(id)a0;
- (id)p_getTitleText:(id)a0;
- (id)p_voucherMsgList:(unsigned long long)a0;
- (id)p_attrStringWithPrefix:(id)a0 Text:(id)a1 suffix:(id)a2;
- (id)p_getConfirmTitleV2Style;
- (void)p_setupNewHalfNewCardConstraintsWithHintInfo:(id)a0;
- (void)p_asyncRefreshLabelWithHintInfoModel:(id)a0 prefixStr:(id)a1 suffixStr:(id)a2;
- (void)p_setupCreditPayConstraints;
- (void)p_setupUISuperPay;
- (void)p_setupVoucherHalfV2Style;
- (void)p_setupUICombineV2Style;
- (void)p_setupUICardV2Style;
- (void)p_setupUICreditV2Style;
- (void)p_setupUIBalanceV2Style;
- (id)p_getBtnPayAmountWithVoucher:(long long)a0;
- (id)p_changeCreditPayAmount;
- (id)p_attrStringWithPrefix:(id)a0 Text:(id)a1 suffix:(id)a2 imageStr:(id)a3 placeholderImg:(id)a4;
- (id)p_shortHandWithBankName:(id)a0;
- (void)p_aboutButtonClick;
- (void)refreshWithNotSufficientHintInfo:(id)a0;
- (id)getDiscount;
- (void)p_setupUIFundPayV2Style;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
