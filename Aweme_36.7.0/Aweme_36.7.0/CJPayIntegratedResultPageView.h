@class CJPayButton, CJPayAccountInsuranceTipView, UILabel, CJPayOrderResultResponse;
@protocol CJPayIntegratedResultPageViewDelegate;

@interface CJPayIntegratedResultPageView : UIView

@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayButton *backToMerchantButton;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) CJPayOrderResultResponse *cjResultResponse;
@property (weak, nonatomic) id<CJPayIntegratedResultPageViewDelegate> delegate;
@property (nonatomic) long long resultPageType;

- (void)p_setDetailUIAndText;
- (void)p_updateDiscountText:(id)a0 payTypeDescText:(id)a1;
- (void)p_showBackToMerchantBtn;
- (void)p_tapBtmButton:(id)a0;
- (id)initWithCJResponse:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
