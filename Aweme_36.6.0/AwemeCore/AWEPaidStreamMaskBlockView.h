@class UIImageView, UILabel, UIView, UIButton;

@interface AWEPaidStreamMaskBlockView : AWEPaidStreamBaseBlockView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *purchaseButton;
@property (retain, nonatomic) UIView *purchaseButtonView;
@property (nonatomic) long long enlargeType;

- (void)install:(unsigned long long)a0 uiConfig:(id)a1 paymentButtonView:(id)a2 actionHandler:(id /* block */)a3;
- (double)adaptLargeFontMode:(double)a0;
- (void)reloadUIForNeedsShowPurchaseButton:(id)a0;
- (void)onBackgroundClick;
- (double)iconImageWidthHeight;
- (double)purchaseButtonHeight;
- (double)detailInfoHeight;
- (id)adaptLargeFontWithImage:(id)a0;
- (void)purchaseButtonClick;
- (void)updatePurchaseTitle:(id)a0;
- (void)uninstall;
- (void).cxx_destruct;

@end
