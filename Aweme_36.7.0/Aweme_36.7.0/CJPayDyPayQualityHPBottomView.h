@class CJPayDyPayRecommendBottomView, CJPayAccountInsuranceTipView, CJPayStandardButton;

@interface CJPayDyPayQualityHPBottomView : UIView

@property (retain, nonatomic) CJPayDyPayRecommendBottomView *recommendView;
@property (retain, nonatomic) CJPayStandardButton *confirmButton;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (copy, nonatomic) id /* block */ confirmClickBlock;

- (void)p_onConfirmAction;
- (void)updateWithShowConfig:(id)a0 usePlusXData:(BOOL)a1;
- (void)updateWithPayAndXShowInfo:(id)a0 showConfig:(id)a1 chooseStatus:(BOOL)a2 chooseBlock:(id /* block */)a3 protocolClickBlock:(id /* block */)a4 markIconClickBlock:(id /* block */)a5;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
