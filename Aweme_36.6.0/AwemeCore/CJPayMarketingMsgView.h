@class CJScrollAmountView, NSDictionary, UILabel, UIView, CJPayStandardAmountView;
@protocol CJPayMarketingMsgViewDelegate;

@interface CJPayMarketingMsgView : UIView

@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIView *priceView;
@property (retain, nonatomic) UILabel *discountLabel;
@property (nonatomic) BOOL isShowVoucherMsg;
@property (nonatomic) long long viewStyle;
@property (copy, nonatomic) NSDictionary *btnInfoDict;
@property (retain, nonatomic) CJScrollAmountView *oldScrollAmountView;
@property (retain, nonatomic) CJPayStandardAmountView *scrollAmountView;
@property (weak, nonatomic) id<CJPayMarketingMsgViewDelegate> delegate;

- (void)updateWithPayAmount:(id)a0 voucherMsg:(id)a1 animated:(BOOL)a2;
- (id)initWithViewStyle:(long long)a0 isShowVoucherMsg:(BOOL)a1;
- (void)updateWithPayAmount:(id)a0 voucherMsg:(id)a1 fee:(id)a2 feeButtonInfo:(id)a3;
- (void)updatePriceColor:(id)a0;
- (void)updateWithPayAmount:(id)a0 voucherMsg:(id)a1;
- (void)p_setupUIForNormal;
- (void)p_setupUIForCompact;
- (void)p_setupUIForDenoiseV2;
- (void)p_setupUIForMacro;
- (void)p_setupUIForStandard;
- (void)updateWithModel:(id)a0 isFromSkipPwdConfirm:(BOOL)a1;
- (void)p_setupUIForSkipPwdHalfPageConfirm;
- (void)p_updateUIForVoucherTypeNone:(id)a0;
- (void)p_updateUIForVoucherTypeImmediatelyDiscount:(id)a0;
- (void)p_updateUIForVoucherTypeRandomDiscount:(id)a0;
- (void)p_updateUIForVoucherTypeFreeCharge:(id)a0;
- (void)p_updateUIForVoucherTypeChargeDiscount:(id)a0;
- (void)p_updateUIForVoucherTypeChargeNoDiscount:(id)a0;
- (void)p_updateUIForVoucherTypeStagingWithDiscount:(id)a0;
- (void)p_updateUIForVoucherTypeStagingWithRandomDiscount:(id)a0;
- (void)p_updateStandardAmount:(id)a0 animated:(BOOL)a1;
- (void)p_setupPriceAttributeWithText:(id)a0;
- (void)p_updateVoucherMsg:(id)a0 fee:(id)a1 feeButtonInfo:(id)a2;
- (id)p_discountString:(id)a0 withFee:(id)a1 feeButtonInfo:(id)a2;
- (void)p_handleLabelTap:(id)a0;
- (void)p_onTipsIconClick;
- (BOOL)p_isUseStandardAmountView;
- (id)p_discountStringWithModel:(id)a0;
- (id)p_buildMarketingString:(id)a0;
- (void)hideDiscountLabel;
- (void)setMinHeightForDiscountLabel;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)updateWithModel:(id)a0;
- (id)initWithViewStyle:(long long)a0;

@end
