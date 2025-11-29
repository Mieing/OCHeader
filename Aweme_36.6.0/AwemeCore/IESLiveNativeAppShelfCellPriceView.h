@class UILabel, UIView;

@interface IESLiveNativeAppShelfCellPriceView : IESLiveNativeAppShelfCellCouponBaseView

@property (weak, nonatomic) UIView *currentPriceView;
@property (weak, nonatomic) UILabel *currentPricePrefixLabel;
@property (weak, nonatomic) UILabel *currentPriceRMBLabel;
@property (weak, nonatomic) UILabel *currentPriceBigNumLabel;
@property (weak, nonatomic) UILabel *currentPriceSmallNumLabel;
@property (weak, nonatomic) UILabel *currentPriceSuffixLabel;
@property (weak, nonatomic) UILabel *oldPriceLabel;

- (void)setupSubview_currentPriceView;
- (void)updateSubview_currentPriceView;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;

@end
