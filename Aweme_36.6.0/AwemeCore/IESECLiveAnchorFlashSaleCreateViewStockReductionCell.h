@class IESECLiveAnchorFlashSaleRadioButton;

@interface IESECLiveAnchorFlashSaleCreateViewStockReductionCell : IESECLiveAnchorFlashSaleCreateViewCell

@property (retain, nonatomic) IESECLiveAnchorFlashSaleRadioButton *submitReductionRadio;
@property (retain, nonatomic) IESECLiveAnchorFlashSaleRadioButton *payReductionRadio;

- (void)setItem:(id)a0 showWarn:(BOOL)a1;
- (void)p_submitReductionRadioDidTap;
- (void)p_payReductionRadioDidTap;
- (void)p_switchToStockReductionType:(long long)a0 forceUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
