@class CJPayMarketingMsgView, CJPayBDPayMainMessageView, UILabel, UIView, CJPayAccountInsuranceTipView;

@interface CJPayOPHomeContentView : CJPayHomeBaseContentView

@property (retain, nonatomic) UIView *subContainer;
@property (retain, nonatomic) CJPayMarketingMsgView *marketingMsgView;
@property (retain, nonatomic) UILabel *amountDetailLabel;
@property (retain, nonatomic) CJPayBDPayMainMessageView *tradeMesageView;
@property (retain, nonatomic) CJPayBDPayMainMessageView *payTypeMessageView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;

- (void).cxx_destruct;
- (void)setupUI;

@end
